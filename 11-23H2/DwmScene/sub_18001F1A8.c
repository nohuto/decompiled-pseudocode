/*
 * XREFs of sub_18001F1A8 @ 0x18001F1A8
 * Callers:
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 *     sub_1800DD10C @ 0x1800DD10C (sub_1800DD10C.c)
 *     sub_1800DD780 @ 0x1800DD780 (sub_1800DD780.c)
 * Callees:
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 */

_OWORD *__fastcall sub_18001F1A8(_OWORD *a1, __int64 a2)
{
  if ( a1 != (_OWORD *)a2 )
  {
    sub_180013348((__int64)a1);
    *a1 = *(_OWORD *)a2;
    a1[1] = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
  }
  return a1;
}
