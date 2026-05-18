/*
 * XREFs of sub_1800A0910 @ 0x1800A0910
 * Callers:
 *     sub_1800A0910 @ 0x1800A0910 (sub_1800A0910.c)
 *     sub_1800A0BF4 @ 0x1800A0BF4 (sub_1800A0BF4.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_1800A0910 @ 0x1800A0910 (sub_1800A0910.c)
 *     sub_1800A0CE8 @ 0x1800A0CE8 (sub_1800A0CE8.c)
 */

__int64 __fastcall sub_1800A0910(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_1800100E8(v6, 0x1D0uLL) )
  {
    sub_1800A0910(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_1800A0CE8(v6 + 32);
  }
  return result;
}
