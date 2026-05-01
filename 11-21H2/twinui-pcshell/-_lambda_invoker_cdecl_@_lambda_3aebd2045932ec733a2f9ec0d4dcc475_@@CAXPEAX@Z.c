/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_3aebd2045932ec733a2f9ec0d4dcc475_@@CAXPEAX@Z @ 0x18041C510
 * Callers:
 *     <none>
 * Callees:
 *     ?fire_immediately@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18041EBA8 (-fire_immediately@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGI.c)
 */

void __fastcall _lambda_3aebd2045932ec733a2f9ec0d4dcc475_::_lambda_invoker_cdecl_(volatile __int32 *a1)
{
  if ( _InterlockedExchange(a1 + 12, 2) == 1 )
    `winrt::resume_on_signal'::`2'::awaitable::fire_immediately(a1);
}
