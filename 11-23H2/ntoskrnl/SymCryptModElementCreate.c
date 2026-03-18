/*
 * XREFs of SymCryptModElementCreate @ 0x1403F966C
 * Callers:
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F79EC (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9B90 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreEnc @ 0x1403FA114 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointGenericSetRandom @ 0x1403FE2D0 (SymCryptEcpointGenericSetRandom.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE8B0 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointCreateEx @ 0x1403FF040 (SymCryptEcpointCreateEx.c)
 *     SymCryptEcpointTransform @ 0x1403FF464 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsAdd @ 0x1403FF9C0 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1403FFDE0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x1404002B0 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x140400520 (SymCryptTwistedEdwardsNegate.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1404005F0 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x140400D10 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140400E40 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140401410 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1404018D4 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140402090 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140402640 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x1404028F0 (SymCryptShortWeierstrassNegate.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x140402990 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptFdefModInvGeneric @ 0x1404044E0 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140409254 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140409380 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementCreate @ 0x1404041AC (SymCryptFdefModElementCreate.c)
 */

__int64 SymCryptModElementCreate()
{
  return SymCryptFdefModElementCreate();
}
