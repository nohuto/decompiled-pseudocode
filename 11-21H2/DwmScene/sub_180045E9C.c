/*
 * XREFs of sub_180045E9C @ 0x180045E9C
 * Callers:
 *     sub_180045044 @ 0x180045044 (sub_180045044.c)
 *     sub_180045DF4 @ 0x180045DF4 (sub_180045DF4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_180045CF0 @ 0x180045CF0 (sub_180045CF0.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180045E9C(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  sub_18002C73C(a1 + 16);
  if ( a4 )
    sub_180045CF0(a1, a2, a4);
  else
    sub_1800465B0(*a3, a2);
  sub_180010910((__int64)a3);
  return a2;
}
