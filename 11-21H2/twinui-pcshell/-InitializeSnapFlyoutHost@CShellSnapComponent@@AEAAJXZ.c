/*
 * XREFs of ?InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ @ 0x1800D73D4
 * Callers:
 *     ?InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x180176DF4 (-InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180091C4C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C40C0 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??$make_self@VSnapFlyoutHost@@AEAUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@YA?AU?$com_ptr@VSnapFlyoutHost@@@0@AEAUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@0@@Z @ 0x1800C9C64 (--$make_self@VSnapFlyoutHost@@AEAUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ @ 0x180171ABC (--1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAAXXZ @ 0x180171AE8 (-StartActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ??4?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18017EAA0 (--4-$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CShellSnapComponent::InitializeSnapFlyoutHost(CShellSnapComponent *this)
{
  void (__fastcall *v2)(char *, GUID *, IUnknown **); // rbx
  HRESULT v3; // eax
  int v4; // eax
  SnapFlyoutHost **v5; // rax
  DWORD v6; // edx
  IUnknown *punk; // [rsp+28h] [rbp-170h] BYREF
  __int64 v9; // [rsp+30h] [rbp-168h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-160h] BYREF
  _QWORD v11[40]; // [rsp+40h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  if ( *((_BYTE *)this + 992) )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v11,
      (__int64)"InitializeSnapFlyoutHost");
    v11[0] = &CSnapComponentTelemetry::InitializeSnapFlyoutHost::`vftable';
    CSnapComponentTelemetry::InitializeSnapFlyoutHost::StartActivity((CSnapComponentTelemetry::InitializeSnapFlyoutHost *)v11);
    ppvOut = 0LL;
    punk = 0LL;
    v2 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v2((char *)this + 8, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    v3 = IUnknown_QueryService(
           punk,
           &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
           &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
           &ppvOut);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x648,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v3,
        2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v9 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(void *, void *, __int64 *))ppvOut)(
           ppvOut,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics>,
           &v9);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x64A,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v4,
        2);
    v5 = winrt::make_self<SnapFlyoutHost,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics &>(
           (SnapFlyoutHost **)&punk,
           (const struct winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics *)&v9);
    winrt::com_ptr<SnapFlyoutHost>::operator=((char *)this + 984, v5);
    if ( punk )
      winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&punk);
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11, v6);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppvOut);
    CSnapComponentTelemetry::InitializeSnapFlyoutHost::~InitializeSnapFlyoutHost((CSnapComponentTelemetry::InitializeSnapFlyoutHost *)v11);
  }
  return 0LL;
}
