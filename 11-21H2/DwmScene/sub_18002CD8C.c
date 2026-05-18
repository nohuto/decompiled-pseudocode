/*
 * XREFs of sub_18002CD8C @ 0x18002CD8C
 * Callers:
 *     sub_18002CD8C @ 0x18002CD8C (sub_18002CD8C.c)
 *     sub_18002D64C @ 0x18002D64C (sub_18002D64C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18002CD8C @ 0x18002CD8C (sub_18002CD8C.c)
 */

__int64 __fastcall sub_18002CD8C(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0xF8uLL) )
  {
    sub_18002CD8C(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    v7 = *((_QWORD *)v6 + 9);
    if ( v7 >= 0x10 )
      sub_180010884(*((char **)v6 + 6), v7 + 1);
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 15LL;
    v6[48] = 0;
  }
  return result;
}
