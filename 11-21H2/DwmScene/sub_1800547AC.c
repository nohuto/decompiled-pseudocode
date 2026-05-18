/*
 * XREFs of sub_1800547AC @ 0x1800547AC
 * Callers:
 *     sub_1800547AC @ 0x1800547AC (sub_1800547AC.c)
 *     sub_1800551E0 @ 0x1800551E0 (sub_1800551E0.c)
 *     sub_1800552F8 @ 0x1800552F8 (sub_1800552F8.c)
 *     sub_180057AF8 @ 0x180057AF8 (sub_180057AF8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800547AC @ 0x1800547AC (sub_1800547AC.c)
 */

_UNKNOWN **__fastcall sub_1800547AC(__int64 a1, __int64 a2, char *a3)
{
  _UNKNOWN **result; // rax
  char *i; // rsi
  char *v7; // rdi
  unsigned __int64 v8; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = a3; !i[25]; result = (_UNKNOWN **)sub_180010884(v7, 0x68uLL) )
  {
    sub_1800547AC(a1, a2, *((_QWORD *)i + 2));
    v7 = i;
    i = *(char **)i;
    sub_180010910((__int64)(v7 + 88));
    sub_180010910((__int64)(v7 + 64));
    v8 = *((_QWORD *)v7 + 7);
    if ( v8 >= 0x10 )
      sub_180010884(*((char **)v7 + 4), v8 + 1);
    *((_QWORD *)v7 + 6) = 0LL;
    *((_QWORD *)v7 + 7) = 15LL;
    v7[32] = 0;
  }
  return result;
}
