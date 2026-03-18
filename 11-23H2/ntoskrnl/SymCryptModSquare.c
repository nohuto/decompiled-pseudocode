/*
 * XREFs of SymCryptModSquare @ 0x1403F99D0
 * Callers:
 *     SymCryptTwistedEdwardsDouble @ 0x1403FFDE0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1404005F0 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x1404008AC (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140401410 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1404018D4 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140402090 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140402640 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x140402990 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140409254 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140409380 (SymCryptModExpWindowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModSquare(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_1400064C0 + (*a1 & 0x380)))(a1);
}
