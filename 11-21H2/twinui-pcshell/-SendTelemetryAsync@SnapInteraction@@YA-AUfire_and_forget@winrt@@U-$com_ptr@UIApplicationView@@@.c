/*
 * XREFs of ?SendTelemetryAsync@SnapInteraction@@YA?AUfire_and_forget@winrt@@U?$com_ptr@UIApplicationView@@@3@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1801BEE10
 * Callers:
 *     ?SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180150FD4 (-SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_stora.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     SnapInteraction::SendTelemetryAsync$_InitCoro$2 @ 0x1801BEB4C (SnapInteraction--SendTelemetryAsync$_InitCoro$2.c)
 *     ?release_ref@?$com_ptr@VIMiniSearch@@@winrt@@AEAAXXZ @ 0x1803A4CF8 (-release_ref@-$com_ptr@VIMiniSearch@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SnapInteraction::SendTelemetryAsync(__int64 a1, __int64 a2)
{
  void *v3; // rax
  char v4; // bl
  __int64 v6; // [rsp+198h] [rbp+10h] BYREF
  char v7; // [rsp+1A0h] [rbp+18h] BYREF
  int v8; // [rsp+1A8h] [rbp+20h] BYREF

  v6 = a2;
  v3 = operator new(0x131uLL);
  v8 = 0;
  SnapInteraction::SendTelemetryAsync__InitCoro_2((__int64)&v7, (__int64)&v8, (__int64)v3, a1, (__int64)&v6);
  v4 = v7;
  winrt::com_ptr<IMiniSearch>::release_ref(a1);
  return v4;
}
