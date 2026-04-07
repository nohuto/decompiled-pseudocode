/*
 * XREFs of ?CaptureForSecondaryDisplay@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x1800BDF48
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BE210 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180042BB8 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054398 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyAnimatedVisual::CaptureForSecondaryDisplay(
        CDisplaySecondaryOnlyAnimatedVisual *this,
        __int64 a2,
        __int64 a3)
{
  struct CAnimatedTransitionVisual **v3; // rbx
  struct CAnimatedTransitionVisual *v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  struct CVisual *RootVisualForDesktop; // rax
  int v10; // edi
  int v11; // eax
  int v12; // r14d
  int v13; // eax
  CVisual *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int inserted; // eax
  unsigned int v18; // ebx
  int v19; // [rsp+20h] [rbp-40h]
  unsigned __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v21[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h]
  struct tagRECT v23; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v3 = (struct CAnimatedTransitionVisual **)((char *)this + 440);
  if ( *((_QWORD *)this + 55) )
    return 0LL;
  v20 = 0LL;
  GetDesktopID(1LL, &v20, a3);
  v23.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v23.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99) + v23.left;
  v23.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v23.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100) + v23.top;
  v5 = *v3;
  *v3 = 0LL;
  if ( v5 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v5 + 8));
  v6 = CAnimatedTransitionVisual::Create(v3);
  if ( v6 < 0 )
  {
    v7 = 176LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v20);
  v6 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)*v3, RootVisualForDesktop, 1, &v23);
  if ( v6 < 0 )
  {
    v7 = 184LL;
    goto LABEL_6;
  }
  v10 = 0;
  v11 = v23.right - v23.left;
  v12 = 0;
  if ( v23.right - v23.left < 0 )
    v11 = 0;
  LODWORD(v22) = v11;
  if ( v23.right - v23.left >= 0 )
    v10 = v23.right - v23.left;
  v13 = v23.bottom - v23.top;
  if ( v23.bottom - v23.top < 0 )
    v13 = 0;
  HIDWORD(v22) = v13;
  if ( v23.bottom - v23.top >= 0 )
    v12 = v23.bottom - v23.top;
  CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v3, &v23);
  v14 = (struct CAnimatedTransitionVisual *)((char *)*v3 + 8);
  *(struct tagRECT *)((char *)*v3 + 872) = v23;
  v15 = *((_DWORD *)v14 + 22);
  if ( (v15 & 0x1000) == 0 )
  {
    *((_DWORD *)v14 + 22) = v15 | 0x1000;
    CVisual::PropagateDirtyChildren(v14);
  }
  v16 = (__int64)*v3 + 8;
  v21[0] = v10;
  v21[1] = v12;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v16 + 104LL))(v16, v21);
  *((_QWORD *)*v3 + 119) = v22;
  CVisual::SetInterpolationMode((unsigned int *)*v3 + 2, 1u);
  inserted = VisualCollection::InsertRelative(
               (CDisplaySecondaryOnlyAnimatedVisual *)((char *)this + 32),
               ((unsigned __int64)*v3 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v3 >> 64),
               0LL,
               0,
               v19);
  v18 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlyanimatedvisual.cpp",
    (const char *)(unsigned int)inserted);
  return v18;
}
