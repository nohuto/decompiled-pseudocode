/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_522324fbb5dde8754aa82d91ec00ee97_@@CAXXZ @ 0x1800C86C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180094070 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 */

void _lambda_522324fbb5dde8754aa82d91ec00ee97_::_lambda_invoker_cdecl_(void)
{
  __int64 v0; // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      wil::TraceLoggingProvider::`vector deleting destructor'((wil::TraceLoggingProvider *)Context, 0LL, v0);
  }
}
