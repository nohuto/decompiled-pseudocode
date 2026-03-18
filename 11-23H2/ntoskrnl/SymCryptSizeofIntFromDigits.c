/*
 * XREFs of SymCryptSizeofIntFromDigits @ 0x1403F9A70
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403F7864 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F79EC (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptRsakeySetValue @ 0x1403F7B0C (SymCryptRsakeySetValue.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x1403F801C (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyCreate @ 0x1403F88C8 (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1403F8F1C (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaVerify @ 0x1403F9B90 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1403FA2EC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403FDB60 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1403FDD64 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FE3A0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE8B0 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x1403FF260 (SymCryptEcpointSetValue.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x14040012C (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140400B6C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140400E40 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1404024DC (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptFdefModInvGeneric @ 0x1404044E0 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefSizeofIntFromDigits @ 0x140405B7C (SymCryptFdefSizeofIntFromDigits.c)
 */

__int64 SymCryptSizeofIntFromDigits()
{
  return SymCryptFdefSizeofIntFromDigits();
}
