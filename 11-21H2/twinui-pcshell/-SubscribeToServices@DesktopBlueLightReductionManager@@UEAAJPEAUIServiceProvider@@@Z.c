/*
 * XREFs of ?SubscribeToServices@DesktopBlueLightReductionManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800CC230
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NightLightOnWCOS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CC450 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NightLightOnWCOS@@@details@wil@@QEAAX_NW4.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DesktopBlueLightReductionManager::SubscribeToServices(
        DesktopBlueLightReductionManager *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v7; // eax
  int v8; // eax
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v10; // eax
  int v11; // eax
  struct IServiceProviderVtbl *v12; // rax
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, a2, 0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7A,
        (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v5,
        v16);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_NightLightOnWCOS>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_NightLightOnWCOS>::GetImpl'::`2'::impl,
      0LL);
    v18 = 0LL;
    QueryService = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v18);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
           a2,
           &IID_IImmersiveWindowMessageService,
           &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
           &v18);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7F,
        (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v7,
        v16);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, char *))(*(_QWORD *)v18 + 24LL))(
           v18,
           30LL,
           ((unsigned __int64)this + 64) & -(__int64)(this != (DesktopBlueLightReductionManager *)40),
           (char *)this + 152);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x80,
        (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v8,
        v16);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v18);
    lpVtbl = a2->lpVtbl;
    v20 = 0LL;
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            &v20);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x84,
        (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v10,
        v16);
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v20 + 24LL))(
            v20,
            ((unsigned __int64)this + 72) & -(__int64)(this != (DesktopBlueLightReductionManager *)40),
            (char *)this + 156);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x85,
        (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v11,
        v16);
    v12 = a2->lpVtbl;
    v19 = 0LL;
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v12->QueryService)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            &v19);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x88,
        (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v13,
        v16);
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v19 + 32LL))(
            v19,
            ((unsigned __int64)this + 80) & -(__int64)(this != (DesktopBlueLightReductionManager *)40),
            (char *)this + 160);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x89,
        (unsigned int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v14,
        v16);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v20);
  }
  return 0LL;
}
