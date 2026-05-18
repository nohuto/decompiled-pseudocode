/*
 * XREFs of sub_18003AA30 @ 0x18003AA30
 * Callers:
 *     sub_180039E78 @ 0x180039E78 (sub_180039E78.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     unknown_libname_6 @ 0x18003A9D4 (unknown_libname_6.c)
 */

_QWORD *__fastcall sub_18003AA30(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v3 = *a1;
  *a1 = 0LL;
  v7 = v3;
  v4 = a1[1];
  a1[1] = 0LL;
  v8 = v4;
  v5 = unknown_libname_6(a2, a3, a1);
  result = sub_180011020(v5, &v7);
  if ( v8 )
    return (_QWORD *)sub_180010530(v8);
  return result;
}
