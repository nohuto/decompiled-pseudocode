/*
 * XREFs of sub_1800DD6AC @ 0x1800DD6AC
 * Callers:
 *     sub_1800DD6AC @ 0x1800DD6AC (sub_1800DD6AC.c)
 *     sub_1800DE218 @ 0x1800DE218 (sub_1800DE218.c)
 *     sub_1800DE600 @ 0x1800DE600 (sub_1800DE600.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_1800DD6AC @ 0x1800DD6AC (sub_1800DD6AC.c)
 *     sub_1800DE2BC @ 0x1800DE2BC (sub_1800DE2BC.c)
 */

__int64 __fastcall sub_1800DD6AC(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_1800100E8(v6, 0xC0uLL) )
  {
    sub_1800DD6AC(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_1800DE2BC(v6 + 32);
  }
  return result;
}
