/*
 * XREFs of ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1803AE1E0
 * Callers:
 *     _lambda_9cd8ac2da2e7bac8c4911caa5b84bcce_::operator() @ 0x1803AD154 (_lambda_9cd8ac2da2e7bac8c4911caa5b84bcce_--operator().c)
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1803AE010 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000D5C0 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000FF1C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180015A20 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_fedc7e4f644c4c51595793f53b0e36e3___ @ 0x1803AB308 (ShellPositionerHelpers--PerformCallbackOnView__lambda_fedc7e4f644c4c51595793f53b0e36e3___.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803ABCC8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x1803AC5B4 (--1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x1803AC8CC (_lambda_3a58774b2403835eabbd2227e376bc7e_--operator().c)
 *     ?DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1803AEA44 (-DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1803B1CCC (-StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803B2AAC (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::DragCompleteWorker(
        CAppViewManager *this,
        const struct _GUID *a2,
        struct tagPOINT a3)
{
  RTL_SRWLOCK *v6; // rbx
  int v7; // eax
  int v8; // esi
  __int64 v9; // r14
  __int64 (__fastcall *v10)(__int64, const struct _GUID *, __int128 *, __int64 *); // rsi
  __int64 *AddressOf; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct IApplicationView **v16; // r9
  int ViewForApplication; // eax
  RTL_SRWLOCK *v18; // rbx
  struct IApplicationView *v20; // [rsp+30h] [rbp-D0h] BYREF
  struct tagPOINT v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64); // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64); // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ****v26)(_QWORD, GUID *, __int64); // [rsp+68h] [rbp-98h]
  char v27; // [rsp+70h] [rbp-90h]
  __int64 v28[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v29; // [rsp+88h] [rbp-78h] BYREF
  __int64 (__fastcall ****v30)(_QWORD, GUID *, __int64); // [rsp+98h] [rbp-68h]
  _QWORD v31[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v21 = a3;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v31,
    (__int64)"DragComplete");
  v31[0] = &AppViewManagerTabTelemetry::DragComplete::`vftable';
  AppViewManagerTabTelemetry::DragComplete::StartActivity((AppViewManagerTabTelemetry::DragComplete *)v31, a2, &v21);
  v23 = 0LL;
  *(_QWORD *)&v29 = this;
  *((_QWORD *)&v29 + 1) = a2;
  v30 = &v23;
  v25 = v29;
  v26 = &v23;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v24);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v24 )
    {
      v22 = 0LL;
      v29 = 0LL;
      v9 = *((_QWORD *)this + 23);
      v10 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, __int128 *, __int64 *))(*(_QWORD *)v9 + 56LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)&v22);
      v12 = v10(v9, a2, &v29, AddressOf);
      v8 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x49D,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
        if ( v6 )
          ReleaseSRWLockExclusive(v6);
        goto LABEL_14;
      }
      if ( v22 )
      {
        v13 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v22, (__int64)&v23);
        v8 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4A0,
            (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v13);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
          if ( v6 )
            ReleaseSRWLockExclusive(v6);
          goto LABEL_14;
        }
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64, __int64))(**((_QWORD **)this + 23) + 40LL))(
              *((_QWORD *)this + 23),
              a2,
              1LL,
              1LL);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4A4,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
    }
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    if ( v23 )
    {
      v21 = 0LL;
      v15 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v23, (__int64)&v21);
      v8 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4AC,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
        v27 = 0;
        lambda_3a58774b2403835eabbd2227e376bc7e_::operator()((__int64)&v25);
        goto LABEL_31;
      }
      v20 = 0LL;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
      ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                             *((IUnknown **)this + 15),
                             *(struct IUnknown **)&v21,
                             (struct IImmersiveApplication *)&v20,
                             v16);
      v8 = ViewForApplication;
      if ( ViewForApplication < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4B0,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)ViewForApplication);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
        v27 = 0;
        lambda_3a58774b2403835eabbd2227e376bc7e_::operator()((__int64)&v25);
        goto LABEL_31;
      }
      AppViewManagerTabTelemetry::DragComplete::DragViewComplete((AppViewManagerTabTelemetry::DragComplete *)v31, v20);
      v28[0] = (__int64)v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v28);
      v28[1] = (__int64)a3;
      v8 = ShellPositionerHelpers::PerformCallbackOnView__lambda_fedc7e4f644c4c51595793f53b0e36e3___(
             *((IUnknown **)this + 15),
             (__int64)v20,
             (__int64)v28);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v28);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C1,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
        v27 = 0;
        lambda_3a58774b2403835eabbd2227e376bc7e_::operator()((__int64)&v25);
        goto LABEL_31;
      }
      v18 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64), _QWORD))(*v23)[69])(v23, 0LL);
      if ( v18 )
        ReleaseSRWLockExclusive(v18);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v20);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    }
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v31);
    v8 = 0;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x497,
    (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v7);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
LABEL_14:
  v27 = 0;
  lambda_3a58774b2403835eabbd2227e376bc7e_::operator()((__int64)&v25);
LABEL_31:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
  AppViewManagerTabTelemetry::DragComplete::~DragComplete((AppViewManagerTabTelemetry::DragComplete *)v31);
  return (unsigned int)v8;
}
