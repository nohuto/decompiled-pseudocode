/*
 * XREFs of sub_1800548F0 @ 0x1800548F0
 * Callers:
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_1800548F0 @ 0x1800548F0 (sub_1800548F0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800548F0 @ 0x1800548F0 (sub_1800548F0.c)
 */

__int64 __fastcall sub_1800548F0(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x40uLL) )
  {
    sub_1800548F0(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    v7 = *((_QWORD *)v6 + 7);
    if ( v7 >= 0x10 )
      sub_180010884(*((char **)v6 + 4), v7 + 1);
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 15LL;
    v6[32] = 0;
  }
  return result;
}
