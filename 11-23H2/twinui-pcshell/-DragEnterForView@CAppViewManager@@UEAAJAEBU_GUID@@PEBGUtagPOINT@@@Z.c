/*
 * XREFs of ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x1803AE6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000D5C0 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803ABCC8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1DragEnterForView@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x1803AC5E0 (--1DragEnterForView@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     _lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator() @ 0x1803AD238 (_lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_--operator().c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1803AEAE8 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1803B1DC0 (-StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803B2AAC (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?_CheckTabletMode@CAppViewManager@@AEAAJXZ @ 0x1803B56C0 (-_CheckTabletMode@CAppViewManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::DragEnterForView(
        CAppViewManager *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct tagPOINT a4)
{
  int v7; // ebx
  RTL_SRWLOCK *v8; // rbx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  RTL_SRWLOCK *v13; // rbx
  int v14; // eax
  struct IImmersiveApplicationInternal *v16; // [rsp+30h] [rbp-D0h] BYREF
  struct tagPOINT v17[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+60h] [rbp-A0h]
  _QWORD v21[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v17[0] = a4;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"DragEnterForView");
  v21[0] = &AppViewManagerTabTelemetry::DragEnterForView::`vftable';
  AppViewManagerTabTelemetry::DragEnterForView::StartActivity(
    (AppViewManagerTabTelemetry::DragEnterForView *)v21,
    a3,
    a2,
    v17);
  v7 = CAppViewManager::_CheckTabletMode((CAppViewManager *)((char *)this - 56));
  if ( v7 >= 0 )
  {
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 16) + 24LL))(
           *((_QWORD *)this + 16),
           a2,
           &v18);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41D,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
      if ( v8 )
        ReleaseSRWLockShared(v8);
LABEL_5:
      v7 = v10;
      goto LABEL_22;
    }
    if ( v8 )
      ReleaseSRWLockShared(v8);
    if ( !v18 )
    {
      v16 = 0LL;
      v17[0] = (struct tagPOINT)((char *)this - 56);
      v17[1] = (struct tagPOINT)&v16;
      v19 = *(_OWORD *)&v17[0].x;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
      v11 = CAppViewManager::EnsureApplication((CAppViewManager *)((char *)this - 56), a3, &v16);
      v7 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x42F,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
        v20 = 0;
        lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()((_QWORD **)&v19);
LABEL_11:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
        goto LABEL_22;
      }
      v17[0] = 0LL;
      v12 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))&v16,
              (__int64)v17);
      v7 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x434,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v17);
        v20 = 0;
        lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()((_QWORD **)&v19);
        goto LABEL_11;
      }
      v13 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v14 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, GUID *, _QWORD))(**((_QWORD **)this + 16) + 32LL))(
              *((_QWORD *)this + 16),
              a2,
              &GUID_NULL,
              *(_QWORD *)v17);
      v10 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x436,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v14);
        if ( v13 )
          ReleaseSRWLockExclusive(v13);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v17);
        v20 = 0;
        lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()((_QWORD **)&v19);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
        goto LABEL_5;
      }
      if ( v13 )
        ReleaseSRWLockExclusive(v13);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v17);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
    }
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
    v7 = 0;
  }
LABEL_22:
  AppViewManagerTabTelemetry::DragEnterForView::~DragEnterForView((AppViewManagerTabTelemetry::DragEnterForView *)v21);
  return (unsigned int)v7;
}
