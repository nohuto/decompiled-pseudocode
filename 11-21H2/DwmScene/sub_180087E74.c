/*
 * XREFs of sub_180087E74 @ 0x180087E74
 * Callers:
 *     sub_180087E74 @ 0x180087E74 (sub_180087E74.c)
 *     sub_180087F0C @ 0x180087F0C (sub_180087F0C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180087E74 @ 0x180087E74 (sub_180087E74.c)
 *     sub_180087FA4 @ 0x180087FA4 (sub_180087FA4.c)
 */

__int64 __fastcall sub_180087E74(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010884(v6, 0x38uLL) )
  {
    sub_180087E74(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_180087FA4(v6 + 40);
  }
  return result;
}
