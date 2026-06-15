/*
 * XREFs of std::function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)_::function_long___cdecl(SystemEffectDescriptor___SystemEffectChainDescriptor__)___lambda_0ce50e585f6028199e33aa7804c7da0c__0_ @ 0x180068210
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180051094 (-AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::function_long___cdecl_SystemEffectDescriptor___SystemEffectChainDescriptor____::function_long___cdecl_SystemEffectDescriptor___SystemEffectChainDescriptor______lambda_0ce50e585f6028199e33aa7804c7da0c__0_(
        __int64 a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int64 result; // rax

  v2 = *a2;
  v3 = a2[1];
  *(_QWORD *)a1 = off_18016C6C8;
  result = a1;
  *(_OWORD *)(a1 + 8) = v2;
  *(_OWORD *)(a1 + 24) = v3;
  *(_QWORD *)(a1 + 56) = a1;
  return result;
}
