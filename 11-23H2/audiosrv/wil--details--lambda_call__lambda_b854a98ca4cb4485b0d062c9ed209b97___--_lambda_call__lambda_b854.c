/*
 * XREFs of wil::details::lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___::_lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___ @ 0x18014A650
 * Callers:
 *     ?IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18014D6DC (-IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@$.c)
 *     _CEndpointCharacteristics::IsEffectPackConfigurationApplicableToEndpoint_::_1_::dtor$0 @ 0x18014D9FC (_CEndpointCharacteristics--IsEffectPackConfigurationApplicableToEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_b854a98ca4cb4485b0d062c9ed209b97_::operator() @ 0x18014AC44 (_lambda_b854a98ca4cb4485b0d062c9ed209b97_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___::_lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_b854a98ca4cb4485b0d062c9ed209b97_::operator()();
  }
  return result;
}
