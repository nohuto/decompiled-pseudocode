/*
 * XREFs of sub_180020FCC @ 0x180020FCC
 * Callers:
 *     sub_180021530 @ 0x180021530 (sub_180021530.c)
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 *     sub_1800E4630 @ 0x1800E4630 (sub_1800E4630.c)
 *     sub_1800E4AE8 @ 0x1800E4AE8 (sub_1800E4AE8.c)
 *     sub_1800E4DA0 @ 0x1800E4DA0 (sub_1800E4DA0.c)
 *     sub_1800E5DE4 @ 0x1800E5DE4 (sub_1800E5DE4.c)
 *     sub_1800EDBD0 @ 0x1800EDBD0 (sub_1800EDBD0.c)
 *     sub_1800EE7A4 @ 0x1800EE7A4 (sub_1800EE7A4.c)
 *     sub_1800EF960 @ 0x1800EF960 (sub_1800EF960.c)
 *     sub_1800F27A8 @ 0x1800F27A8 (sub_1800F27A8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180020FCC(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *a2;
  *a2 = 0LL;
  *a1 = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  a1[1] = v3;
  return a1;
}
