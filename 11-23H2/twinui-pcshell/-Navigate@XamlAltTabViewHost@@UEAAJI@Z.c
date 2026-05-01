/*
 * XREFs of ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x180764110
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802ECA20 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??$?0$$V@NavigateAltTab@XamlSwitcherTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18076171C (--$-0$$V@NavigateAltTab@XamlSwitcherTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180762C7C (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall XamlAltTabViewHost::Navigate(XamlAltTabViewHost *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // esi
  char v6; // dl
  __int64 v7; // rdx
  int v8; // eax
  __int64 v10[40]; // [rsp+40h] [rbp-158h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  XamlSwitcherTelemetry::NavigateAltTab::NavigateAltTab((__int64)v10, v6);
  if ( (unsigned int)(a2 - 5) <= 1 )
  {
    LOBYTE(v7) = a2 == 6;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 168LL))(*((_QWORD *)this + 20), v7);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10, v7);
  XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)v10);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
