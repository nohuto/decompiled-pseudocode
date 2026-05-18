/*
 * XREFs of sub_1800609D0 @ 0x1800609D0
 * Callers:
 *     sub_1800609D0 @ 0x1800609D0 (sub_1800609D0.c)
 *     sub_180061488 @ 0x180061488 (sub_180061488.c)
 *     sub_180062BE0 @ 0x180062BE0 (sub_180062BE0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800609D0 @ 0x1800609D0 (sub_1800609D0.c)
 */

__int64 __fastcall sub_1800609D0(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x58uLL) )
  {
    sub_1800609D0(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    v7 = *((_QWORD *)v6 + 8);
    if ( v7 >= 0x10 )
      sub_180010884(*((char **)v6 + 5), v7 + 1);
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 15LL;
    v6[40] = 0;
  }
  return result;
}
