/*
 * XREFs of MiSwitchKstackPages @ 0x140591040
 * Callers:
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiStackTheftIsr @ 0x140590E20 (MiStackTheftIsr.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 */

signed __int64 __fastcall MiSwitchKstackPages(__m128i *a1, __m128i *a2)
{
  MiCopyPfnEntryEx(a1, a2);
  a1[2].m128i_i8[2] = a1[2].m128i_i8[2] & 0xF8 | 6;
  return MiSetPfnIdentity((__int64)a1, 2);
}
