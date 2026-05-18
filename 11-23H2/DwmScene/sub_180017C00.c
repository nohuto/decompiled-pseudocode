/*
 * XREFs of sub_180017C00 @ 0x180017C00
 * Callers:
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 *     sub_1800707C4 @ 0x1800707C4 (sub_1800707C4.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 *     sub_1800CD1B0 @ 0x1800CD1B0 (sub_1800CD1B0.c)
 *     sub_1800CF2D0 @ 0x1800CF2D0 (sub_1800CF2D0.c)
 *     sub_1800D43D0 @ 0x1800D43D0 (sub_1800D43D0.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

_OWORD *__fastcall sub_180017C00(_OWORD *a1, __int64 a2)
{
  if ( a1 != (_OWORD *)a2 )
  {
    sub_180011B24((__int64)a1);
    *a1 = *(_OWORD *)a2;
    a1[1] = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 15LL;
    *(_BYTE *)a2 = 0;
  }
  return a1;
}
