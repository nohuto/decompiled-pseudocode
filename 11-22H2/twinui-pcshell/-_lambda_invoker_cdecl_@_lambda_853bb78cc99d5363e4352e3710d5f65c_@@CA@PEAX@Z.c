/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_853bb78cc99d5363e4352e3710d5f65c_@@CA@PEAX@Z @ 0x18041B460
 * Callers:
 *     <none>
 * Callees:
 *     ?fire_immediately@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x180426F6C (-fire_immediately@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 */

__int64 __fastcall _lambda_853bb78cc99d5363e4352e3710d5f65c_::_lambda_invoker_cdecl_(volatile __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(a1 + 8, 2);
  if ( (_DWORD)result == 1 )
    return `winrt::resume_after'::`2'::awaitable::fire_immediately(a1);
  return result;
}
