/*
 * XREFs of ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180094070
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_87e3050d7bd177bdce03acb9ca29079f_@@CAXXZ @ 0x18009BD70 (-_lambda_invoker_cdecl_@_lambda_87e3050d7bd177bdce03acb9ca29079f_@@CAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_522324fbb5dde8754aa82d91ec00ee97_@@CAXXZ @ 0x1800C86C0 (-_lambda_invoker_cdecl_@_lambda_522324fbb5dde8754aa82d91ec00ee97_@@CAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180093F8C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

wil::TraceLoggingProvider *__fastcall wil::TraceLoggingProvider::`vector deleting destructor'(
        wil::TraceLoggingProvider *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  wil::TraceLoggingProvider::~TraceLoggingProvider(this, a2, a3);
  if ( (v3 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, wil::TraceLoggingProvider *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
