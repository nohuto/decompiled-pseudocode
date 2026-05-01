/*
 * XREFs of ??1Completer@?$static_lazy@VViewManagerInteropTabTraceLogging@@@details@wil@@QEAA@XZ @ 0x1804BCB24
 * Callers:
 *     ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804BA348 (--$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Found.c)
 *     ?IsEnabled@ViewManagerInteropTabTraceLogging@@SA_NE_K@Z @ 0x1804C6DD8 (-IsEnabled@ViewManagerInteropTabTraceLogging@@SA_NE_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1803BA5E0 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 */

BOOL __fastcall wil::details::static_lazy<ViewManagerInteropTabTraceLogging>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  __int64 v3; // rdx
  union _RTL_RUN_ONCE v4; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v3 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
           a1,
           (void (__cdecl *)())_lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
    v4.Ptr = v2[1].Ptr;
    v2[2].Ptr = (PVOID)v3;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
