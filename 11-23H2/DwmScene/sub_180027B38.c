/*
 * XREFs of sub_180027B38 @ 0x180027B38
 * Callers:
 *     sub_180027C80 @ 0x180027C80 (sub_180027C80.c)
 *     sub_180073DDC @ 0x180073DDC (sub_180073DDC.c)
 *     sub_1800C3AE8 @ 0x1800C3AE8 (sub_1800C3AE8.c)
 *     sub_1800CC6D0 @ 0x1800CC6D0 (sub_1800CC6D0.c)
 * Callees:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 */

__int64 __fastcall sub_180027B38(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  if ( a2 != a3 )
    sub_180011BA0((void **)a1, a2, a3 - a2);
  return a1;
}
