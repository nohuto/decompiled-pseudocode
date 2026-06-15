/*
 * XREFs of wil::details::lambda_call__lambda_133ffca213661c0098953024967f868b___::_lambda_call__lambda_133ffca213661c0098953024967f868b___ @ 0x18014A540
 * Callers:
 *     _CEndpointCharacteristics::RemoveEffectPack_::_1_::dtor$2 @ 0x18014EED0 (_CEndpointCharacteristics--RemoveEffectPack_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_133ffca213661c0098953024967f868b_::operator() @ 0x18014A938 (_lambda_133ffca213661c0098953024967f868b_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_133ffca213661c0098953024967f868b___::_lambda_call__lambda_133ffca213661c0098953024967f868b___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_133ffca213661c0098953024967f868b_::operator()();
  }
  return result;
}
