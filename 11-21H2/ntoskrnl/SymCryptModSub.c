/*
 * XREFs of SymCryptModSub @ 0x1404012E4
 * Callers:
 *     SymCryptTwistedEdwardsAdd @ 0x140407280 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1404076A0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x14040818C (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140408D00 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1404091C8 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140409980 (SymCryptShortWeierstrassDouble.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModSub(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_140006938 + (*a1 & 0x380)))(a1, a2);
}
