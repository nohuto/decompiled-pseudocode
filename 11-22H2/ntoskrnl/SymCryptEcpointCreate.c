/*
 * XREFs of SymCryptEcpointCreate @ 0x1403FE9C0
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyCreate @ 0x1403F8268 (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F831C (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FDD40 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE250 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptOfflinePrecomputation @ 0x1403FE870 (SymCryptOfflinePrecomputation.c)
 *     SymCryptShortWeierstrassAdd @ 0x140400BF0 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     SymCryptEcpointCreateEx @ 0x1403FE9E0 (SymCryptEcpointCreateEx.c)
 */

__int64 __fastcall SymCryptEcpointCreate(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptEcpointCreateEx(a1, a2, a3, *(_DWORD *)(a3 + 8) & 0xF);
}
