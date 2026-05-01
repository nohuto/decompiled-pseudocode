/*
 * XREFs of ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F5280
 * Callers:
 *     _lambda_09fb039f358b632885968f82146d58d3_::operator() @ 0x1802F3ED8 (_lambda_09fb039f358b632885968f82146d58d3_--operator().c)
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F50B0 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003AC08 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180053DA8 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EBCDC (--$As@UIImmersiveApplication@@@-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJV-$.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_5df9a5d4ba38bb669e81df66bead270a___ @ 0x1802F2A2C (ShellPositionerHelpers--PerformCallbackOnView__lambda_5df9a5d4ba38bb669e81df66bead270a___.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802F330C (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x1802F3C18 (--1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x1802F3FBC (_lambda_3a58774b2403835eabbd2227e376bc7e_--operator().c)
 *     ?DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1802F5AD4 (-DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1802F821C (-StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802F8F1C (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
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
  __int64 *v16; // rax
  struct IApplicationView **v17; // r9
  int ViewForApplication; // eax
  RTL_SRWLOCK *v19; // rbx
  struct tagPOINT v21; // [rsp+30h] [rbp-D0h] BYREF
  struct IApplicationView *v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ****v27)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-98h]
  char v28; // [rsp+70h] [rbp-90h]
  __int64 v29[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v30; // [rsp+88h] [rbp-78h] BYREF
  __int64 (__fastcall ****v31)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp-68h]
  _QWORD v32[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v21 = a3;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v32,
    (__int64)"DragComplete");
  v32[0] = &AppViewManagerTabTelemetry::DragComplete::`vftable';
  AppViewManagerTabTelemetry::DragComplete::StartActivity((AppViewManagerTabTelemetry::DragComplete *)v32, a2, &v21);
  v24 = 0LL;
  *(_QWORD *)&v30 = this;
  *((_QWORD *)&v30 + 1) = a2;
  v31 = &v24;
  v26 = v30;
  v27 = &v24;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v25);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v25 )
    {
      v23 = 0LL;
      v30 = 0LL;
      v9 = *((_QWORD *)this + 23);
      v10 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, __int128 *, __int64 *))(*(_QWORD *)v9 + 56LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)&v23);
      v12 = v10(v9, a2, &v30, AddressOf);
      v8 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x49C,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
        if ( v6 )
          ReleaseSRWLockExclusive(v6);
        goto LABEL_14;
      }
      if ( v23 )
      {
        v13 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v23, (__int64 *)&v24);
        v8 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x49F,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v13);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
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
          (void *)0x4A3,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
    }
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    if ( v24 )
    {
      v21 = 0LL;
      v15 = Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::As<IImmersiveApplication>(&v24, (__int64 *)&v21);
      v8 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4AB,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
        v28 = 0;
        lambda_3a58774b2403835eabbd2227e376bc7e_::operator()((__int64)&v26);
        goto LABEL_31;
      }
      v22 = 0LL;
      v16 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v22);
      ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                             *((IUnknown **)this + 15),
                             *(struct IUnknown **)&v21,
                             (struct IImmersiveApplication *)v16,
                             v17);
      v8 = ViewForApplication;
      if ( ViewForApplication < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4AF,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)ViewForApplication);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
        v28 = 0;
        lambda_3a58774b2403835eabbd2227e376bc7e_::operator()((__int64)&v26);
        goto LABEL_31;
      }
      AppViewManagerTabTelemetry::DragComplete::DragViewComplete((AppViewManagerTabTelemetry::DragComplete *)v32, v22);
      v29[0] = (__int64)v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v29);
      v29[1] = (__int64)a3;
      v8 = ShellPositionerHelpers::PerformCallbackOnView__lambda_5df9a5d4ba38bb669e81df66bead270a___(
             *((IUnknown **)this + 15),
             (__int64)v22,
             (__int64)v29);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v29);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C0,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
        v28 = 0;
        lambda_3a58774b2403835eabbd2227e376bc7e_::operator()((__int64)&v26);
        goto LABEL_31;
      }
      v19 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v24)[69])(v24, 0LL);
      if ( v19 )
        ReleaseSRWLockExclusive(v19);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    }
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v32);
    v8 = 0;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x496,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v7);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
LABEL_14:
  v28 = 0;
  lambda_3a58774b2403835eabbd2227e376bc7e_::operator()((__int64)&v26);
LABEL_31:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
  AppViewManagerTabTelemetry::DragComplete::~DragComplete((AppViewManagerTabTelemetry::DragComplete *)v32);
  return (unsigned int)v8;
}
