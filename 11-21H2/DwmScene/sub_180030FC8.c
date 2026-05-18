/*
 * XREFs of sub_180030FC8 @ 0x180030FC8
 * Callers:
 *     sub_180030FC8 @ 0x180030FC8 (sub_180030FC8.c)
 *     sub_180032CA8 @ 0x180032CA8 (sub_180032CA8.c)
 *     sub_18003352C @ 0x18003352C (sub_18003352C.c)
 *     sub_18007B198 @ 0x18007B198 (sub_18007B198.c)
 *     sub_18007B62C @ 0x18007B62C (sub_18007B62C.c)
 *     sub_1800DEF9C @ 0x1800DEF9C (sub_1800DEF9C.c)
 *     sub_1800E1CA8 @ 0x1800E1CA8 (sub_1800E1CA8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030FC8 @ 0x180030FC8 (sub_180030FC8.c)
 */

__int64 __fastcall sub_180030FC8(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rbx
  char *v6; // rcx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x30uLL) )
  {
    sub_180030FC8(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
  }
  return result;
}
