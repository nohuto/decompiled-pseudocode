/*
 * XREFs of SymCryptModSub @ 0x1403F9A04
 * Callers:
 *     SymCryptTwistedEdwardsAdd @ 0x1403FF9C0 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1403FFDE0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x1404008AC (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140401410 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1404018D4 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140402090 (SymCryptShortWeierstrassDouble.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModSub(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_1400064A8 + (*a1 & 0x380)))(a1, a2);
}
