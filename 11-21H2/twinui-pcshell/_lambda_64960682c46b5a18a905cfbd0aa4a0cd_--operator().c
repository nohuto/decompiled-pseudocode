/*
 * XREFs of _lambda_64960682c46b5a18a905cfbd0aa4a0cd_::operator() @ 0x180428B00
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_64960682c46b5a18a905cfbd0aa4a0cd__void_::Invoke @ 0x1804292E0 (Platform--Details--__abi_FunctorCapture__lambda_64960682c46b5a18a905cfbd0aa4a0cd__void_--Invoke.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041CDFC (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18041E6D8 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1RunWindowCallback@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x180428918 (--1RunWindowCallback@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@RunWindowCallback@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x1804296D0 (-StartActivity@RunWindowCallback@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_64960682c46b5a18a905cfbd0aa4a0cd_::operator()(__int64 a1)
{
  int v2; // edx
  _QWORD v3[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v3,
    (__int64)"RunWindowCallback");
  v3[0] = &XamlExplorerHostTelemetry::RunWindowCallback::`vftable';
  XamlExplorerHostTelemetry::RunWindowCallback::StartActivity((XamlExplorerHostTelemetry::RunWindowCallback *)v3);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v3, v2);
  XamlExplorerHostTelemetry::RunWindowCallback::~RunWindowCallback((XamlExplorerHostTelemetry::RunWindowCallback *)v3);
}
