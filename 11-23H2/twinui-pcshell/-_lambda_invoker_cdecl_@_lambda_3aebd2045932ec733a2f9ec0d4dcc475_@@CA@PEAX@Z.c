/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_3aebd2045932ec733a2f9ec0d4dcc475_@@CA@PEAX@Z @ 0x1805079B0
 * Callers:
 *     <none>
 * Callees:
 *     ?fire_immediately@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18051CF6C (-fire_immediately@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGI.c)
 */

__int64 __fastcall _lambda_3aebd2045932ec733a2f9ec0d4dcc475_::_lambda_invoker_cdecl_(volatile __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(a1 + 12, 2);
  if ( (_DWORD)result == 1 )
    return `winrt::resume_on_signal'::`2'::awaitable::fire_immediately(a1);
  return result;
}
