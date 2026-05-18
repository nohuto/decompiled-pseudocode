/*
 * XREFs of sub_180030E94 @ 0x180030E94
 * Callers:
 *     sub_180030E94 @ 0x180030E94 (sub_180030E94.c)
 *     sub_180032C78 @ 0x180032C78 (sub_180032C78.c)
 *     sub_18003352C @ 0x18003352C (sub_18003352C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030E94 @ 0x180030E94 (sub_180030E94.c)
 */

_UNKNOWN **__fastcall sub_180030E94(__int64 a1, __int64 a2, char *a3)
{
  _UNKNOWN **result; // rax
  char *i; // rbx
  char *v7; // rdi
  unsigned __int64 v8; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = a3; !i[25]; result = (_UNKNOWN **)sub_180010884(v7, 0x60uLL) )
  {
    sub_180030E94(a1, a2, *((_QWORD *)i + 2));
    v7 = i;
    i = *(char **)i;
    v8 = *((_QWORD *)v7 + 11);
    if ( v8 >= 8 )
      sub_180010884(*((char **)v7 + 8), 2 * v8 + 2);
    *((_QWORD *)v7 + 10) = 0LL;
    *((_QWORD *)v7 + 11) = 7LL;
    *((_WORD *)v7 + 32) = 0;
  }
  return result;
}
