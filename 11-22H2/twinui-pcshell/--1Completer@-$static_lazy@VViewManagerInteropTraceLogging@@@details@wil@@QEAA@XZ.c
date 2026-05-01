/*
 * XREFs of ??1Completer@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ @ 0x1801B56F0
 * Callers:
 *     ?get@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAPEAVViewManagerInteropTraceLogging@@P6AXXZ@Z @ 0x1800C3580 (-get@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAPEAVViewManagerInteropTrac.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<ViewManagerInteropTraceLogging>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  __int64 v3; // rdx
  union _RTL_RUN_ONCE v4; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v3 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
           a1,
           _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)[1];
    v4.Ptr = v2[1].Ptr;
    v2[2].Ptr = (PVOID)v3;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
