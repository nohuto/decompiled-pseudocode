/*
 * XREFs of sub_180020870 @ 0x180020870
 * Callers:
 *     sub_1800B5130 @ 0x1800B5130 (sub_1800B5130.c)
 * Callees:
 *     sub_18002089C @ 0x18002089C (sub_18002089C.c)
 */

__int64 __fastcall sub_180020870(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  sub_18002089C(a1, a2, v3);
  return a1;
}
