/*
 * XREFs of sub_1402297E4 @ 0x1402297E4
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_14028C82C @ 0x14028C82C (sub_14028C82C.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_14033AC90 @ 0x14033AC90 (sub_14033AC90.c)
 *     sub_14059AAF8 @ 0x14059AAF8 (sub_14059AAF8.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1402297E4(__int64 a1, _WORD *a2)
{
  __int16 v2; // cx

  v2 = *(_WORD *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a2) >> 4) + 16736) + 204LL);
  return (v2 & 0x10) != 0 || (v2 & 0x20) != 0 && (*(_QWORD *)a2 & 2) != 0;
}
