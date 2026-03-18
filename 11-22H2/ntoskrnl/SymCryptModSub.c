/*
 * XREFs of SymCryptModSub @ 0x1403F93A4
 * Callers:
 *     SymCryptTwistedEdwardsAdd @ 0x1403FF360 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1403FF780 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x14040024C (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140400DB0 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140401274 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140401A30 (SymCryptShortWeierstrassDouble.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModSub(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_1400064A8 + (*a1 & 0x380)))(a1, a2);
}
