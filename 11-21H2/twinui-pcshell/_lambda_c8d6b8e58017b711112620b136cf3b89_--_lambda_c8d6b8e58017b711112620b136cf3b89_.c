/*
 * XREFs of _lambda_c8d6b8e58017b711112620b136cf3b89_::_lambda_c8d6b8e58017b711112620b136cf3b89_ @ 0x18041FB1C
 * Callers:
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_c8d6b8e58017b711112620b136cf3b89___ @ 0x18041F4C8 (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunch.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1804204C4 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18041FB88 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_18041FB88.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall lambda_c8d6b8e58017b711112620b136cf3b89_::_lambda_c8d6b8e58017b711112620b136cf3b89_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 1,
    a2 + 1);
  a1[1] = (__int64)&XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::`vftable';
  return a1;
}
