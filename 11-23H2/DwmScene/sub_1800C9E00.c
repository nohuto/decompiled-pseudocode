/*
 * XREFs of sub_1800C9E00 @ 0x1800C9E00
 * Callers:
 *     sub_1800CAB90 @ 0x1800CAB90 (sub_1800CAB90.c)
 *     sub_1800CAFD0 @ 0x1800CAFD0 (sub_1800CAFD0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 */

_QWORD *__fastcall sub_1800C9E00(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_1800C9FBC(a1, &v4);
  if ( v4 )
  {
    sub_1800C589C(v4, a2);
    if ( v5 )
      sub_180010530(v5);
  }
  else
  {
    if ( v5 )
      sub_180010530(v5);
    *a2 = 0LL;
  }
  return a2;
}
