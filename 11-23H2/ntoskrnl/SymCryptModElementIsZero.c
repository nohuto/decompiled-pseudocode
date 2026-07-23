/*
 * XREFs of SymCryptModElementIsZero @ 0x1403F98B0
 * Callers:
 *     SymCryptEcDsaVerify @ 0x1403F9D70 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x1403FF644 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x140400690 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptMontgomeryIsZero @ 0x140400FF0 (SymCryptMontgomeryIsZero.c)
 *     SymCryptShortWeierstrassAdd @ 0x140401430 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140401AB4 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassIsZero @ 0x140402AA0 (SymCryptShortWeierstrassIsZero.c)
 * Callees:
 *     SymCryptFdefModElementIsZero @ 0x1404044AC (SymCryptFdefModElementIsZero.c)
 */

__int64 SymCryptModElementIsZero()
{
  return SymCryptFdefModElementIsZero();
}
