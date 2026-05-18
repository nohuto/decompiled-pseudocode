/*
 * XREFs of sub_1800F7D18 @ 0x1800F7D18
 * Callers:
 *     sub_1800F7D18 @ 0x1800F7D18 (sub_1800F7D18.c)
 *     sub_1800F872C @ 0x1800F872C (sub_1800F872C.c)
 *     sub_1800F875C @ 0x1800F875C (sub_1800F875C.c)
 *     sub_1800F8E90 @ 0x1800F8E90 (sub_1800F8E90.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800F7D18 @ 0x1800F7D18 (sub_1800F7D18.c)
 *     sub_1800FA818 @ 0x1800FA818 (sub_1800FA818.c)
 */

_UNKNOWN **__fastcall sub_1800F7D18(__int64 a1, __int64 a2, char *a3)
{
  _UNKNOWN **result; // rax
  char *i; // rdi
  char *v7; // rbx
  unsigned __int64 v8; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = a3; !i[25]; result = (_UNKNOWN **)sub_180010884(v7, 0xC0uLL) )
  {
    sub_1800F7D18(a1, a2, *((_QWORD *)i + 2));
    v7 = i;
    i = *(char **)i;
    sub_1800FA818(v7 + 64);
    v8 = *((_QWORD *)v7 + 7);
    if ( v8 >= 8 )
      sub_180010884(*((char **)v7 + 4), 2 * v8 + 2);
    *((_QWORD *)v7 + 6) = 0LL;
    *((_QWORD *)v7 + 7) = 7LL;
    *((_WORD *)v7 + 16) = 0;
  }
  return result;
}
