/*
 * XREFs of SymCryptModElementIsZero @ 0x1403F96D0
 * Callers:
 *     SymCryptEcDsaVerify @ 0x1403F9B90 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x1403FF464 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x1404004B0 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptMontgomeryIsZero @ 0x140400E10 (SymCryptMontgomeryIsZero.c)
 *     SymCryptShortWeierstrassAdd @ 0x140401250 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1404018D4 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassIsZero @ 0x1404028C0 (SymCryptShortWeierstrassIsZero.c)
 * Callees:
 *     SymCryptFdefModElementIsZero @ 0x1404042CC (SymCryptFdefModElementIsZero.c)
 */

__int64 SymCryptModElementIsZero()
{
  return SymCryptFdefModElementIsZero();
}
