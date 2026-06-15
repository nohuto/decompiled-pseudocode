/*
 * XREFs of wil::details::lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___::_lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___ @ 0x18014A6C0
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056200 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     _EffectPack::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$1 @ 0x18007969C (_EffectPack--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$1.c)
 * Callees:
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180017F10 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___::_lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___(
        __int64 a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  unsigned int v4; // edx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 1288LL);
    v3 = *(_DWORD **)(a1 + 8);
    v4 = 2;
    if ( *v3 != 3 )
      v4 = 0;
    return CEndpointCharacteristics::ClearMixFormatCache(v2, v4);
  }
  return result;
}
