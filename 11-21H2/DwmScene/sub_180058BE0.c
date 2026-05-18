/*
 * XREFs of sub_180058BE0 @ 0x180058BE0
 * Callers:
 *     sub_1801034A7 @ 0x1801034A7 (sub_1801034A7.c)
 *     sub_1801034B9 @ 0x1801034B9 (sub_1801034B9.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_180058BE0(_QWORD *a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = (char *)a1[3];
  if ( v2 )
  {
    result = sub_180010884(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  return result;
}
