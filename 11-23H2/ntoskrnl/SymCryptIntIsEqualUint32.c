/*
 * XREFs of SymCryptIntIsEqualUint32 @ 0x1403F941C
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F75C8 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F897C (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403FDB60 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1403FDD64 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FE3A0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE8B0 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x1404044E0 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntIsEqualUint32 @ 0x1404058D0 (SymCryptFdefIntIsEqualUint32.c)
 */

__int64 SymCryptIntIsEqualUint32()
{
  return SymCryptFdefIntIsEqualUint32();
}
