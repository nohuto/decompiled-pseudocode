/*
 * XREFs of sub_180040E74 @ 0x180040E74
 * Callers:
 *     sub_1800402B0 @ 0x1800402B0 (sub_1800402B0.c)
 *     sub_180040DEC @ 0x180040DEC (sub_180040DEC.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_180040D28 @ 0x180040D28 (sub_180040D28.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180040E74(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rcx

  sub_18002A37C(a1 + 16);
  if ( a4 )
    sub_180040D28(a1, a2, a4);
  else
    sub_180041410(*a3, a2);
  v8 = a3[1];
  if ( v8 )
    sub_180010530(v8);
  return a2;
}
