/*
 * XREFs of sub_1800DE1A4 @ 0x1800DE1A4
 * Callers:
 *     sub_1800DD5A8 @ 0x1800DD5A8 (sub_1800DD5A8.c)
 *     sub_1800F1DC4 @ 0x1800F1DC4 (sub_1800F1DC4.c)
 * Callees:
 *     sub_1800DD754 @ 0x1800DD754 (sub_1800DD754.c)
 */

_QWORD *__fastcall sub_1800DE1A4(_QWORD *a1)
{
  _QWORD *result; // rax
  char *v2; // rbx
  char *v3; // rdx

  if ( a1[1] )
  {
    *(_QWORD *)(a1[3] + 8LL) = 0LL;
    result = (_QWORD *)a1[2];
    *result = 0LL;
    v2 = (char *)a1[3];
    while ( v2 )
    {
      v3 = v2;
      v2 = *(char **)v2;
      result = (_QWORD *)sub_1800DD754((__int64)a1, v3);
    }
  }
  return result;
}
