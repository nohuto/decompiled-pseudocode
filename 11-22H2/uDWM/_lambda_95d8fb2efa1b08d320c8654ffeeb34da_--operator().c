/*
 * XREFs of _lambda_95d8fb2efa1b08d320c8654ffeeb34da_::operator() @ 0x1800EA504
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x1800EA134 (CTransitionVisualController--ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x180003624 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180034730 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D9D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_95d8fb2efa1b08d320c8654ffeeb34da_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  CTopLevelWindow3D *v3; // rcx
  __int64 v5; // rbx
  HWND v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // rdi

  v3 = *(CTopLevelWindow3D **)(a2 + 448);
  if ( v3 )
    CTopLevelWindow3D::StopAnimation(v3, a2, a3);
  if ( *(_QWORD *)(a2 + 40) )
  {
    while ( 1 )
    {
      v5 = 0LL;
      v6 = *(HWND *)(a2 + 40);
      v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
      v8 = *(_DWORD *)(v7 + 40);
      if ( !v8 )
        break;
      v9 = *(_QWORD *)(v7 + 16);
      while ( 1 )
      {
        v10 = *(_QWORD *)(v9 + 8 * v5);
        if ( *(_DWORD *)(v10 + 24) != 4
          && (!v6 || CStoryboard::HasAnimationComponent(*(CStoryboard **)(v9 + 8 * v5), v6, 0)) )
        {
          break;
        }
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= v8 )
          return 0LL;
      }
      if ( !v10 )
        break;
      CStoryboard::Abandon((struct _GUID *)v10);
    }
  }
  return 0LL;
}
