/*
 * XREFs of sub_18005F224 @ 0x18005F224
 * Callers:
 *     sub_18005F224 @ 0x18005F224 (sub_18005F224.c)
 *     sub_18005FB18 @ 0x18005FB18 (sub_18005FB18.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18005F224 @ 0x18005F224 (sub_18005F224.c)
 *     sub_18005FD9C @ 0x18005FD9C (sub_18005FD9C.c)
 */

__int64 __fastcall sub_18005F224(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_1800100E8(v6, 0x48uLL) )
  {
    sub_18005F224(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_18005FD9C(v6 + 40);
  }
  return result;
}
