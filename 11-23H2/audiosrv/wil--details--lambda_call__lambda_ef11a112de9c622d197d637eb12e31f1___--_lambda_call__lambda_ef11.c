/*
 * XREFs of wil::details::lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___::_lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___ @ 0x18014A6B0
 * Callers:
 *     ?SetUserSelectedEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014F89C (-SetUserSelectedEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     _CEndpointCharacteristics::SetUserSelectedEffectPack_::_1_::dtor$1 @ 0x18014FAEE (_CEndpointCharacteristics--SetUserSelectedEffectPack_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___::_lambda_call__lambda_ef11a112de9c622d197d637eb12e31f1___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
             g_policyConfigInternal,
             *(_QWORD *)(*(_QWORD *)a1 + 48LL));
  }
  return result;
}
