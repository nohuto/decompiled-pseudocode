/*
 * XREFs of sub_140247C5C @ 0x140247C5C
 * Callers:
 *     sub_1402307A0 @ 0x1402307A0 (sub_1402307A0.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_140279D30 @ 0x140279D30 (sub_140279D30.c)
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_1405A7708 @ 0x1405A7708 (sub_1405A7708.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_140247C5C(__int64 a1, signed __int64 a2, unsigned int a3)
{
  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
  {
    if ( (qword_140D068D8 & 1) != 0 && (a2 & 4) != 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3 | 0x80000000LL);
    if ( a2 < 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3);
  }
}
