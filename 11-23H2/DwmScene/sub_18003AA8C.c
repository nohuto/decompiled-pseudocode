/*
 * XREFs of sub_18003AA8C @ 0x18003AA8C
 * Callers:
 *     sub_180039E78 @ 0x180039E78 (sub_180039E78.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18003A984 @ 0x18003A984 (sub_18003A984.c)
 */

_QWORD *__fastcall sub_18003AA8C(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  _QWORD *result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v3 = *a2;
  *a2 = 0LL;
  v7 = v3;
  v5 = a2[1];
  a2[1] = 0LL;
  v8 = v5;
  sub_18003A984(a1, a2, a3);
  result = sub_180011020(a1, &v7);
  if ( v8 )
    return (_QWORD *)sub_180010530(v8);
  return result;
}
