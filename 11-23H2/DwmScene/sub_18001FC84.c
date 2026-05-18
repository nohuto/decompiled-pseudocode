/*
 * XREFs of sub_18001FC84 @ 0x18001FC84
 * Callers:
 *     sub_180020220 @ 0x180020220 (sub_180020220.c)
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CD8AC @ 0x1800CD8AC (sub_1800CD8AC.c)
 *     sub_1800CDC58 @ 0x1800CDC58 (sub_1800CDC58.c)
 *     sub_1800CDE90 @ 0x1800CDE90 (sub_1800CDE90.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 *     sub_1800D71F0 @ 0x1800D71F0 (sub_1800D71F0.c)
 *     sub_1800D97D0 @ 0x1800D97D0 (sub_1800D97D0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001FC84(_QWORD *a1, __int64 *a2)
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
