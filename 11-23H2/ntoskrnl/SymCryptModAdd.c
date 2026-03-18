/*
 * XREFs of SymCryptModAdd @ 0x1403F95D4
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 *     SymCryptTwistedEdwardsAdd @ 0x1403FF9C0 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1403FFDE0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1404005F0 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x1404008AC (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140401410 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1404018D4 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140402090 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x140402990 (SymCryptShortWeierstrassOnCurve.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModAdd(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)g_SymCryptModFns + (*a1 & 0x380)))(a1, a2);
}
