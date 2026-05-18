/*
 * XREFs of sub_1800A0450 @ 0x1800A0450
 * Callers:
 *     sub_1800354F0 @ 0x1800354F0 (sub_1800354F0.c)
 *     sub_1800356DC @ 0x1800356DC (sub_1800356DC.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_180037678 @ 0x180037678 (sub_180037678.c)
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 * Callees:
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_180024BC0 @ 0x180024BC0 (sub_180024BC0.c)
 *     sub_1800A01D8 @ 0x1800A01D8 (sub_1800A01D8.c)
 */

char *__fastcall sub_1800A0450(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  char *result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = sub_180011CA0(&v8);
  v5 = sub_180024BC0(*(_DWORD *)v4 - *(_DWORD *)(a2 + 16));
  v6 = *(int *)(a2 + 8);
  *(float *)&v8 = v5;
  sub_1800A01D8(a1 + 8 * (v6 + 2 * v6 + 7), &v8);
  if ( (((*(_QWORD *)(a1 + 280) - *(_QWORD *)(a1 + 272)) ^ (*(_QWORD *)(a1 + 24LL * *(int *)(a2 + 8) + 64)
                                                          - *(_QWORD *)(a1 + 24LL * *(int *)(a2 + 8) + 56))) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    return sub_1800A01D8(a1 + 272, &v8);
  result = *(char **)(a1 + 280);
  *((float *)result - 1) = *(float *)&v8 + *((float *)result - 1);
  return result;
}
