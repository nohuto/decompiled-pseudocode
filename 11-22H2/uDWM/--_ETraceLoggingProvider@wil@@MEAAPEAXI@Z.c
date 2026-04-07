/*
 * XREFs of ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18009B020
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_87e3050d7bd177bdce03acb9ca29079f_@@CA@XZ @ 0x1800A4470 (-_lambda_invoker_cdecl_@_lambda_87e3050d7bd177bdce03acb9ca29079f_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_522324fbb5dde8754aa82d91ec00ee97_@@CA@XZ @ 0x1800CCDC0 (-_lambda_invoker_cdecl_@_lambda_522324fbb5dde8754aa82d91ec00ee97_@@CA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18009AF0C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
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
