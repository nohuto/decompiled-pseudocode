/*
 * XREFs of KeCopyAffinityEx2 @ 0x140256360
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 */

__int64 __fastcall KeCopyAffinityEx2(__int64 a1, __int64 a2)
{
  return sub_140300030(a1, *(unsigned __int16 *)(a1 + 2), a2);
}
