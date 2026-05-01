/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_853bb78cc99d5363e4352e3710d5f65c_@@CAXPEAX@Z @ 0x18056B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?fire_immediately@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18056ED14 (-fire_immediately@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 */

void __fastcall _lambda_853bb78cc99d5363e4352e3710d5f65c_::_lambda_invoker_cdecl_(volatile __int32 *a1)
{
  if ( _InterlockedExchange(a1 + 8, 2) == 1 )
    `winrt::resume_after'::`2'::awaitable::fire_immediately(a1);
}
