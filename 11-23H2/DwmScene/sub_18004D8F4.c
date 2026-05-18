/*
 * XREFs of sub_18004D8F4 @ 0x18004D8F4
 * Callers:
 *     sub_18004D8F4 @ 0x18004D8F4 (sub_18004D8F4.c)
 *     sub_18004E998 @ 0x18004E998 (sub_18004E998.c)
 *     sub_180050550 @ 0x180050550 (sub_180050550.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18004D8F4 @ 0x18004D8F4 (sub_18004D8F4.c)
 *     sub_18004EB48 @ 0x18004EB48 (sub_18004EB48.c)
 */

__int64 __fastcall sub_18004D8F4(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_1800100E8(v6, 0x68uLL) )
  {
    sub_18004D8F4(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_18004EB48(v6 + 32);
  }
  return result;
}
