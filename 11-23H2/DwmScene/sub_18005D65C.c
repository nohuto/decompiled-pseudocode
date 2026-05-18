/*
 * XREFs of sub_18005D65C @ 0x18005D65C
 * Callers:
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18004347C @ 0x18004347C (sub_18004347C.c)
 *     sub_18005927C @ 0x18005927C (sub_18005927C.c)
 */

_QWORD *__fastcall sub_18005D65C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_18004347C(a1 + 8, &v4);
  sub_18005927C(a2, &v4);
  if ( v5 )
    sub_180010530(v5);
  return a2;
}
