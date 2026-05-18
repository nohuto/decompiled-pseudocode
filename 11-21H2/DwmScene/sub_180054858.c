/*
 * XREFs of sub_180054858 @ 0x180054858
 * Callers:
 *     sub_180054858 @ 0x180054858 (sub_180054858.c)
 *     sub_180055210 @ 0x180055210 (sub_180055210.c)
 *     sub_1800552F8 @ 0x1800552F8 (sub_1800552F8.c)
 *     sub_180057AF8 @ 0x180057AF8 (sub_180057AF8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180054858 @ 0x180054858 (sub_180054858.c)
 */

__int64 __fastcall sub_180054858(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x50uLL) )
  {
    sub_180054858(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_180010910((__int64)(v6 + 64));
    v7 = *((_QWORD *)v6 + 7);
    if ( v7 >= 0x10 )
      sub_180010884(*((char **)v6 + 4), v7 + 1);
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 15LL;
    v6[32] = 0;
  }
  return result;
}
