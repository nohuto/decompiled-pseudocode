/*
 * XREFs of sub_1800DF19C @ 0x1800DF19C
 * Callers:
 *     sub_1800DF414 @ 0x1800DF414 (sub_1800DF414.c)
 * Callees:
 *     sub_1800DD754 @ 0x1800DD754 (sub_1800DD754.c)
 */

__int64 __fastcall sub_1800DF19C(_QWORD *a1)
{
  char *v1; // rdx
  __int64 result; // rax

  v1 = (char *)a1[2];
  a1[2] = *(_QWORD *)v1;
  sub_1800DD754((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
