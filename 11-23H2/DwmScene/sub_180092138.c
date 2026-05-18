/*
 * XREFs of sub_180092138 @ 0x180092138
 * Callers:
 *     sub_180093310 @ 0x180093310 (sub_180093310.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 */

_QWORD *__fastcall sub_180092138(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v4 = sub_18004347C(a1 + 8, &v7);
  *a2 = a1 + 1876;
  v5 = v4[1];
  *v4 = 0LL;
  v4[1] = 0LL;
  a2[1] = v5;
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
