/*
 * XREFs of sub_18006ADDC @ 0x18006ADDC
 * Callers:
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 * Callees:
 *     _o_sqrtf @ 0x18000C074 (_o_sqrtf.c)
 *     _o_tanf @ 0x18000C080 (_o_tanf.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180085A64 @ 0x180085A64 (sub_180085A64.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006ADDC(
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
  __int64 result; // rax
  __int64 v16; // rcx

  o_tanf();
  o_sqrtf();
  sub_180085A64(*a15);
  sub_180085A64(*a15);
  sub_180085A64(*a15);
  sub_180085A64(*a15);
  result = a14;
  v16 = *(_QWORD *)(a14 + 8);
  if ( v16 )
    return sub_180010530(v16);
  return result;
}
