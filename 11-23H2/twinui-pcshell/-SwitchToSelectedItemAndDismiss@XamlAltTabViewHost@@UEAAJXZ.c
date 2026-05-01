/*
 * XREFs of ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x180766900
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802ECA20 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??$?0$$V@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1807617CC (--$-0$$V@SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@AEAA@U-$integral_constant@D$0A@@w.c)
 *     ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180762CD4 (--1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall XamlAltTabViewHost::SwitchToSelectedItemAndDismiss(XamlAltTabViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // esi
  char v4; // dl
  int v5; // edx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9[40]; // [rsp+40h] [rbp-158h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::SwitchToSelectedItemAndDismiss((__int64)v9, v4);
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9, v5);
  XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss((XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *)v9);
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return 0LL;
}
