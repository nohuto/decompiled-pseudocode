/*
 * XREFs of SymCryptIntFromModulus @ 0x1403F93BC
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F75C8 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeySetValue @ 0x1403F7B0C (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F897C (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9B90 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1403FA2EC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403FDB60 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE8B0 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x1403FF260 (SymCryptEcpointSetValue.c)
 *     SymCryptFdefModInvGeneric @ 0x1404044E0 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntFromModulus @ 0x140403E48 (SymCryptFdefIntFromModulus.c)
 */

__int64 SymCryptIntFromModulus()
{
  return SymCryptFdefIntFromModulus();
}
