/*
 * XREFs of sub_1403C1EDC @ 0x1403C1EDC
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_1403C1EDC(unsigned __int8 *a1, ULONG_PTR a2)
{
  __int64 v2; // rax

  *(_QWORD *)(a2 + 34904) = a1;
  v2 = *a1;
  if ( (unsigned __int8)v2 >= 8u )
    KeBugCheckEx(0x3Eu, a2, v2 + 1, 8uLL, 1uLL);
  *(_QWORD *)&a1[8 * v2 + 8] = a2;
  qsort(a1 + 8, ++*a1, 8uLL, sub_1403DEC40);
}
