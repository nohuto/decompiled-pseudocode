/*
 * XREFs of ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x18060F014
 * Callers:
 *     ?AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z @ 0x18060E7A0 (-AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$query@UIAltTabViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAltTabViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801E9BD4 (--$query@UIAltTabViewHost@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041CDFC (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18041E6D8 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18060E420 (--1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x18060F628 (-StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall XamlAltTabViewController::OnAltKeyUp(__int64 a1)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, _QWORD *); // rsi
  __int64 v3; // rbx
  int v4; // edx
  _QWORD *v5; // rax
  __int64 v6[2]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v7[40]; // [rsp+30h] [rbp-158h] BYREF

  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 56);
  v3 = *(_QWORD *)(a1 + 56);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)"OnAltKeyUp");
  v7[0] = &XamlSwitcherTelemetry::OnAltKeyUp::`vftable';
  XamlSwitcherTelemetry::OnAltKeyUp::StartActivity((XamlSwitcherTelemetry::OnAltKeyUp *)v7, v3 != 0);
  if ( !*(_BYTE *)(a1 + 168) && *v2 )
  {
    v5 = wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAltTabViewHost>(v2, v6);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 64LL))(*v5);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v6);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v7, v4);
  XamlSwitcherTelemetry::OnAltKeyUp::~OnAltKeyUp((XamlSwitcherTelemetry::OnAltKeyUp *)v7);
}
