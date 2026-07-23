/*
 * XREFs of sub_140577F60 @ 0x140577F60
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 */

__int64 __fastcall sub_140577F60(unsigned __int16 *a1)
{
  sub_140300030((__int64)a1, a1[1], (unsigned __int16 *)dword_140C2AC40);
  return KeAddProcessorAffinityEx(a1, dword_140C2B1C0);
}
