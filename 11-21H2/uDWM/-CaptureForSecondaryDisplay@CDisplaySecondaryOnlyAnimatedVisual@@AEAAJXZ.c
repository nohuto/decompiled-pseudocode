/*
 * XREFs of ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x18005B030
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x18005AFD0 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::CaptureForSecondaryDisplay(
        CDisplaySecondaryOnlyAnimatedVisual *this)
{
  struct CAnimatedTransitionVisual **v1; // rsi
  struct CAnimatedTransitionVisual *v3; // rcx
  int inserted; // ebx
  struct CVisual *RootVisualForDesktop; // rax
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  struct CAnimatedTransitionVisual *v9; // rcx
  int v10; // eax
  struct CAnimatedTransitionVisual *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h]
  struct tagRECT v19; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v1 = (struct CAnimatedTransitionVisual **)((char *)this + 440);
  if ( *((_QWORD *)this + 55) )
    return 0LL;
  v16 = 0LL;
  GetDesktopID(1LL, &v16);
  v19.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 93);
  v19.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95) + v19.left;
  v19.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 94);
  v19.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96) + v19.top;
  v3 = *v1;
  *v1 = 0LL;
  if ( v3 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v3 + 8));
  inserted = CAnimatedTransitionVisual::Create(v1);
  if ( inserted < 0 )
  {
    v15 = 176LL;
  }
  else
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                             v16);
    inserted = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v1, RootVisualForDesktop, 1, &v19);
    if ( inserted < 0 )
    {
      v15 = 184LL;
    }
    else
    {
      v6 = 0;
      v7 = v19.right - v19.left;
      if ( v19.right - v19.left < 0 )
        v7 = 0;
      LODWORD(v18) = v7;
      if ( v19.right - v19.left >= 0 )
        v6 = v19.right - v19.left;
      v8 = v19.bottom - v19.top;
      v9 = *v1;
      v10 = v19.bottom - v19.top;
      if ( v19.bottom - v19.top < 0 )
        v10 = 0;
      HIDWORD(v18) = v10;
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v9, &v19);
      v11 = *v1;
      *(struct tagRECT *)((char *)v11 + 872) = v19;
      CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v11 + 8), 4096);
      v12 = 0;
      v13 = (__int64)*v1 + 8;
      v17[0] = v6;
      if ( v8 >= 0 )
        v12 = v8;
      v17[1] = v12;
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v13 + 96LL))(v13, v17);
      *((_QWORD *)*v1 + 119) = v18;
      CVisual::SetInterpolationMode((unsigned int *)*v1 + 2, 1u);
      inserted = VisualCollection::InsertRelative(
                   (CDisplaySecondaryOnlyAnimatedVisual *)((char *)this + 32),
                   (struct CVisual *)(((unsigned __int64)*v1 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v1 >> 64)),
                   0LL,
                   0,
                   1);
      if ( inserted >= 0 )
        return 0LL;
      v15 = 194LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
