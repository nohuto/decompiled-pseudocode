/*
 * XREFs of sub_18009F00C @ 0x18009F00C
 * Callers:
 *     sub_180106C99 @ 0x180106C99 (sub_180106C99.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18009F00C(_QWORD *a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = (char *)a1[1];
  if ( v2 )
  {
    result = sub_180010884(v2, (a1[3] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[1] = 0LL;
    a1[2] = 0LL;
    a1[3] = 0LL;
  }
  return result;
}
