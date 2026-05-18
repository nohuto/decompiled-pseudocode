/*
 * XREFs of sub_1800DE9B0 @ 0x1800DE9B0
 * Callers:
 *     sub_1800DE9B0 @ 0x1800DE9B0 (sub_1800DE9B0.c)
 *     sub_1800DEF40 @ 0x1800DEF40 (sub_1800DEF40.c)
 *     sub_1800DEF9C @ 0x1800DEF9C (sub_1800DEF9C.c)
 *     sub_1800E1DE0 @ 0x1800E1DE0 (sub_1800E1DE0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800DE9B0 @ 0x1800DE9B0 (sub_1800DE9B0.c)
 */

__int64 __fastcall sub_1800DE9B0(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rbx
  char *v6; // rcx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x48uLL) )
  {
    sub_1800DE9B0(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
  }
  return result;
}
