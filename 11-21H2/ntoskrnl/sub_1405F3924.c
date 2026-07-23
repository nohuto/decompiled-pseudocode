/*
 * XREFs of sub_1405F3924 @ 0x1405F3924
 * Callers:
 *     sub_1405F3544 @ 0x1405F3544 (sub_1405F3544.c)
 *     sub_1405F36B0 @ 0x1405F36B0 (sub_1405F36B0.c)
 * Callees:
 *     sub_140364760 @ 0x140364760 (sub_140364760.c)
 */

KIRQL __fastcall sub_1405F3924(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return sub_140364760((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
