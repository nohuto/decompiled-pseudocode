/*
 * XREFs of sub_180030E20 @ 0x180030E20
 * Callers:
 *     sub_180030E20 @ 0x180030E20 (sub_180030E20.c)
 *     sub_180032894 @ 0x180032894 (sub_180032894.c)
 *     sub_180038370 @ 0x180038370 (sub_180038370.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030E20 @ 0x180030E20 (sub_180030E20.c)
 *     sub_180032D74 @ 0x180032D74 (sub_180032D74.c)
 */

__int64 __fastcall sub_180030E20(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x48uLL) )
  {
    sub_180030E20(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_180032D74(v6 + 32);
  }
  return result;
}
