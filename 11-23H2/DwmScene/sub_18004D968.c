/*
 * XREFs of sub_18004D968 @ 0x18004D968
 * Callers:
 *     sub_18004D968 @ 0x18004D968 (sub_18004D968.c)
 *     sub_18004E9C8 @ 0x18004E9C8 (sub_18004E9C8.c)
 *     sub_180050550 @ 0x180050550 (sub_180050550.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18004D968 @ 0x18004D968 (sub_18004D968.c)
 *     sub_18004EB70 @ 0x18004EB70 (sub_18004EB70.c)
 */

__int64 __fastcall sub_18004D968(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_1800100E8(v6, 0x50uLL) )
  {
    sub_18004D968(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_18004EB70(v6 + 32);
  }
  return result;
}
