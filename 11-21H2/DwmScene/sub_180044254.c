/*
 * XREFs of sub_180044254 @ 0x180044254
 * Callers:
 *     sub_180044254 @ 0x180044254 (sub_180044254.c)
 *     sub_180044D20 @ 0x180044D20 (sub_180044D20.c)
 *     sub_180044E0C @ 0x180044E0C (sub_180044E0C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180044254 @ 0x180044254 (sub_180044254.c)
 */

_UNKNOWN **__fastcall sub_180044254(__int64 a1, __int64 a2, char *a3)
{
  _UNKNOWN **result; // rax
  char *i; // rdi
  char *v7; // rbx
  unsigned __int64 v8; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = a3; !i[25]; result = (_UNKNOWN **)sub_180010884(v7, 0x50uLL) )
  {
    sub_180044254(a1, a2, *((_QWORD *)i + 2));
    v7 = i;
    i = *(char **)i;
    sub_180010910((__int64)(v7 + 64));
    v8 = *((_QWORD *)v7 + 7);
    if ( v8 >= 8 )
      sub_180010884(*((char **)v7 + 4), 2 * v8 + 2);
    *((_QWORD *)v7 + 6) = 0LL;
    *((_QWORD *)v7 + 7) = 7LL;
    *((_WORD *)v7 + 16) = 0;
  }
  return result;
}
