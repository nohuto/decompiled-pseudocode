/*
 * XREFs of sub_1C00A0228 @ 0x1C00A0228
 * Callers:
 *     sub_1C00A0174 @ 0x1C00A0174 (sub_1C00A0174.c)
 *     sub_1C00A0260 @ 0x1C00A0260 (sub_1C00A0260.c)
 * Callees:
 *     sub_1C00A0260 @ 0x1C00A0260 (sub_1C00A0260.c)
 */

__int64 __fastcall sub_1C00A0228(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 0x200) != 0 )
    return sub_1C00A0260(a1, *a1, a2);
  else
    return *a1;
}
