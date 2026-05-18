/*
 * XREFs of sub_180030C38 @ 0x180030C38
 * Callers:
 *     sub_180030B98 @ 0x180030B98 (sub_180030B98.c)
 *     sub_180030C38 @ 0x180030C38 (sub_180030C38.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030C38 @ 0x180030C38 (sub_180030C38.c)
 */

__int64 __fastcall sub_180030C38(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x60uLL) )
  {
    sub_180030C38(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    v7 = *((_QWORD *)v6 + 7);
    if ( v7 >= 0x10 )
      sub_180010884(*((char **)v6 + 4), v7 + 1);
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 15LL;
    v6[32] = 0;
  }
  return result;
}
