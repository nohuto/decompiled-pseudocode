/*
 * XREFs of sub_180059AA0 @ 0x180059AA0
 * Callers:
 *     sub_18005A1F0 @ 0x18005A1F0 (sub_18005A1F0.c)
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 *     unknown_libname_47 @ 0x1800E79B3 (unknown_libname_47.c)
 *     sub_1800F1822 @ 0x1800F1822 (sub_1800F1822.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180059AA0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = a1[165];
  if ( v2 )
    sub_180010530(v2);
  sub_18000B4B0((__int64)(a1 + 148), 16LL, 8LL);
  v3 = a1[141];
  if ( v3 )
    sub_180010530(v3);
  sub_18000B4B0((__int64)(a1 + 95), 16LL, 15LL);
  v4 = a1[93];
  if ( v4 )
    sub_180010530(v4);
  v5 = a1[91];
  if ( v5 )
    sub_180010530(v5);
  v6 = a1[89];
  if ( v6 )
    sub_180010530(v6);
  sub_18000B4B0((__int64)(a1 + 56), 16LL, 16LL);
  sub_18000B4B0((__int64)(a1 + 24), 16LL, 16LL);
  return sub_18000B4B0((__int64)a1, 16LL, 12LL);
}
