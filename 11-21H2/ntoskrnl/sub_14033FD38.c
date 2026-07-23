/*
 * XREFs of sub_14033FD38 @ 0x14033FD38
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1403219B0 @ 0x1403219B0 (sub_1403219B0.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_140594ABC @ 0x140594ABC (sub_140594ABC.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405C37D0 @ 0x1405C37D0 (sub_1405C37D0.c)
 *     sub_1406DDC90 @ 0x1406DDC90 (sub_1406DDC90.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14033FD38(__int16 a1)
{
  if ( (a1 & 1) != 0 )
    return 1LL;
  if ( qword_140C50780 && (a1 & 0x10) == 0 )
    a1 &= ~(_WORD)qword_140C50780;
  return (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0;
}
