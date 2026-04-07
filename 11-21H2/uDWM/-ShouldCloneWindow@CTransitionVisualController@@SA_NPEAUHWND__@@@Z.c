/*
 * XREFs of ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800EE360
 * Callers:
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800B39C0 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800C33CC (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800E965C (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___ @ 0x1800E9A20 (CTransitionVisualController--ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___.c)
 *     _lambda_7924ac7615675ed6f4f46acaa8a90be9_::operator() @ 0x1800E9C70 (_lambda_7924ac7615675ed6f4f46acaa8a90be9_--operator().c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800EF294 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18003AEFC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 */

char __fastcall CTransitionVisualController::ShouldCloneWindow(HWND hWnd)
{
  char v2; // bl
  CDesktopManager *v3; // rbp
  unsigned int i; // edi
  WCHAR *v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  wchar_t **j; // rdx
  WCHAR *v10; // rax
  int v11; // r10d
  int v12; // r8d
  struct tagRECT Rect; // [rsp+20h] [rbp-248h] BYREF
  WCHAR ClassName[264]; // [rsp+30h] [rbp-238h] BYREF

  Rect = 0LL;
  v2 = 1;
  if ( GetWindowRect(hWnd, &Rect) && IsRectEmpty(&Rect) )
    return 0;
  memset_0(ClassName, 0, 0x208uLL);
  if ( GetClassNameW(hWnd, ClassName, 260) )
  {
    v3 = CDesktopManager::s_pDesktopManagerInstance;
    for ( i = 0; i < 6; ++i )
    {
      if ( CAnimationScheduler::IsWindowCurrentlyAnimating(
             *((CAnimationScheduler **)v3 + 22),
             0LL,
             *((_DWORD *)&off_180113E60 + 4 * i + 2),
             0) )
      {
        v5 = ClassName;
        do
        {
          v6 = *(WCHAR *)((char *)v5 + (char *)(&off_180113E60)[2 * i] - (char *)ClassName);
          v7 = *v5 - v6;
          if ( v7 )
            break;
          ++v5;
        }
        while ( v6 );
        if ( !v7 )
          return v2;
      }
    }
    v8 = 0;
    for ( j = off_180113EE0; ; ++j )
    {
      v10 = ClassName;
      do
      {
        v11 = *(WCHAR *)((char *)v10 + (char *)*j - (char *)ClassName);
        v12 = *v10 - v11;
        if ( v12 )
          break;
        ++v10;
      }
      while ( v11 );
      if ( !v12 )
        break;
      if ( (unsigned int)++v8 >= 0xC )
        return v2;
    }
    return 0;
  }
  return v2;
}
