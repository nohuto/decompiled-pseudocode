/*
 * XREFs of SymCryptEcpointCreate @ 0x1403FF020
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyCreate @ 0x1403F88C8 (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F897C (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9B90 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FE3A0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE8B0 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptOfflinePrecomputation @ 0x1403FEED0 (SymCryptOfflinePrecomputation.c)
 *     SymCryptShortWeierstrassAdd @ 0x140401250 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     SymCryptEcpointCreateEx @ 0x1403FF040 (SymCryptEcpointCreateEx.c)
 */

__int64 __fastcall SymCryptEcpointCreate(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptEcpointCreateEx(a1, a2, a3, *(_DWORD *)(a3 + 8) & 0xF);
}
