/*
 * XREFs of ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800D26C8
 * Callers:
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D295C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180048534 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D3484 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 */

__int64 __fastcall CScreenRotation::CreateLiveDesktopVisual(struct CAnimatedTransitionVisual **this)
{
  struct CBaseImageProxy ***v2; // rdi
  struct CVisual *RootVisualForDesktop; // r13
  int v4; // r15d
  int v5; // r12d
  int v6; // r8d
  int v7; // eax
  int v8; // r9d
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  int v12; // r9d
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  struct CBaseImageProxy **v17; // rcx
  _DWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  struct CBaseImageProxy *v20; // [rsp+38h] [rbp-28h]
  unsigned __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT v22; // [rsp+48h] [rbp-18h] BYREF

  GetDesktopID(1LL, &v21);
  v2 = (struct CBaseImageProxy ***)(this + 41);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                           v21);
  v4 = 0;
  v5 = 0;
  v22.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 93);
  v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
  v22.right = v6 + v22.left;
  v7 = v6;
  v22.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 94);
  v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
  v22.bottom = v8 + v22.top;
  if ( v6 >= 0 )
    v4 = v6;
  else
    v7 = 0;
  LODWORD(v20) = v7;
  v9 = v8;
  if ( v8 >= 0 )
    v5 = v8;
  else
    v9 = 0;
  HIDWORD(v20) = v9;
  v10 = CAnimatedTransitionVisual::Create(this + 41);
  v11 = v10;
  if ( v10 >= 0 )
  {
    VisualCollection::InsertRelative(
      (VisualCollection *)(this + 4),
      (struct CVisual *)((unsigned __int64)(*v2 + 1) & -(__int64)(*v2 != 0LL)),
      (struct CVisual *)(((unsigned __int64)this[40] + 8) & -(__int64)(this[40] != 0LL)),
      1u,
      1);
    v14 = CAnimatedTransitionVisual::SetVisual(*v2, RootVisualForDesktop, 0, &v22);
    v11 = v14;
    v12 = v14;
    if ( v14 >= 0 )
    {
      v16 = (__int64)(*v2 + 1);
      v19[0] = v4;
      v19[1] = v5;
      (*(void (__fastcall **)(__int64, _DWORD *, __int64, _QWORD))(*(_QWORD *)v16 + 96LL))(
        v16,
        v19,
        v15,
        (unsigned int)v14);
      (*v2)[119] = v20;
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v2, &v22);
      v17 = *v2;
      *(struct tagRECT *)(v17 + 109) = v22;
      CVisual::SetDirtyFlags((CVisual *)(v17 + 1), 4096);
      CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)*v2, 0.0);
      CVisual::SetInterpolationMode((unsigned int *)*v2 + 2, 1u);
      return v11;
    }
    v13 = 576;
  }
  else
  {
    v12 = v10;
    v13 = 574;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v13);
  CScreenRotation::Stop((CScreenRotation *)this, 0, 0);
  return v11;
}
