/*
 * XREFs of ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800D730C
 * Callers:
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D75BC (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180042BB8 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180045FD8 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180054398 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D80E4 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 */

__int64 __fastcall CScreenRotation::CreateLiveDesktopVisual(
        struct CAnimatedTransitionVisual **this,
        __int64 a2,
        __int64 a3)
{
  struct CBaseImageProxy ***v4; // rdi
  struct CVisual *RootVisualForDesktop; // r13
  int v6; // r15d
  int v7; // r12d
  int v8; // r8d
  int v9; // eax
  int v10; // r9d
  int v11; // eax
  int v12; // eax
  unsigned int v13; // esi
  int v14; // r9d
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rcx
  CVisual *v19; // rcx
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-40h]
  _DWORD v23[2]; // [rsp+30h] [rbp-30h] BYREF
  struct CBaseImageProxy *v24; // [rsp+38h] [rbp-28h]
  unsigned __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT v26; // [rsp+48h] [rbp-18h] BYREF

  GetDesktopID(1LL, &v25, a3);
  v4 = (struct CBaseImageProxy ***)(this + 41);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v25);
  v6 = 0;
  v7 = 0;
  v26.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99);
  v26.right = v8 + v26.left;
  v9 = v8;
  v26.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v10 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100);
  v26.bottom = v10 + v26.top;
  if ( v8 >= 0 )
    v6 = v8;
  else
    v9 = 0;
  LODWORD(v24) = v9;
  v11 = v10;
  if ( v10 >= 0 )
    v7 = v10;
  else
    v11 = 0;
  HIDWORD(v24) = v11;
  v12 = CAnimatedTransitionVisual::Create(this + 41);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = v12;
    v15 = 570;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, v15);
    CScreenRotation::Stop((CScreenRotation *)this, 0, 0);
    return v13;
  }
  VisualCollection::InsertRelative(
    (VisualCollection *)(this + 4),
    (unsigned __int64)(*v4 + 1) & -(__int64)(*v4 != 0LL),
    (struct CVisual *)(((unsigned __int64)this[40] + 8) & -(__int64)(this[40] != 0LL)),
    1u,
    v22);
  v16 = CAnimatedTransitionVisual::SetVisual(*v4, RootVisualForDesktop, 0, &v26);
  v13 = v16;
  v14 = v16;
  if ( v16 < 0 )
  {
    v15 = 572;
    goto LABEL_11;
  }
  v18 = (__int64)(*v4 + 1);
  v23[0] = v6;
  v23[1] = v7;
  (*(void (__fastcall **)(__int64, _DWORD *, __int64, _QWORD))(*(_QWORD *)v18 + 104LL))(
    v18,
    v23,
    v17,
    (unsigned int)v16);
  (*v4)[119] = v24;
  CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v4, &v26);
  v19 = (CVisual *)(*v4 + 1);
  *(struct tagRECT *)(*v4 + 109) = v26;
  v20 = *((_DWORD *)v19 + 22);
  if ( (v20 & 0x1000) == 0 )
  {
    *((_DWORD *)v19 + 22) = v20 | 0x1000;
    CVisual::PropagateDirtyChildren(v19);
  }
  CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)*v4, 0.0);
  CVisual::SetInterpolationMode((unsigned int *)*v4 + 2, 1u);
  return v13;
}
