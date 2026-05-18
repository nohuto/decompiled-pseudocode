/*
 * XREFs of sub_180074FB4 @ 0x180074FB4
 * Callers:
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     _o_sqrtf @ 0x18000C084 (_o_sqrtf.c)
 *     _o_tanf @ 0x18000C090 (_o_tanf.c)
 *     sub_180093800 @ 0x180093800 (sub_180093800.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180074FB4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        _QWORD *a15)
{
  o_tanf();
  o_sqrtf();
  sub_180093800(*a15);
  sub_180093800(*a15);
  sub_180093800(*a15);
  sub_180093800(*a15);
  return sub_180010910(a14);
}
