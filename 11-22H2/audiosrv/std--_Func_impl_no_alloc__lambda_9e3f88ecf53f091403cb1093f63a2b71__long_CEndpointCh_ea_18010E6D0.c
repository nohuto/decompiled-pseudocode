/*
 * XREFs of std::_Func_impl_no_alloc__lambda_9e3f88ecf53f091403cb1093f63a2b71__long_CEndpointCharacteristics___::_Do_call @ 0x18010E6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180023BF4 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18014AD7C (-AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV-$shared_ptr@$$CBUEff.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_9e3f88ecf53f091403cb1093f63a2b71__long_CEndpointCharacteristics___::_Do_call(
        __int64 a1,
        CEndpointCharacteristics **a2)
{
  CEndpointCharacteristics *v2; // rbx
  __int64 v3; // rdx
  __int64 result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  result = CEndpointCharacteristics::AddEffectPackConfigurationIfApplicable(v2, v3, &v5);
  if ( v5 )
    return CEndpointCharacteristics::DetermineCurrentEffectPack(v2);
  return result;
}
