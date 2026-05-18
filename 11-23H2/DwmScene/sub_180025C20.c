/*
 * XREFs of sub_180025C20 @ 0x180025C20
 * Callers:
 *     sub_180025EF0 @ 0x180025EF0 (sub_180025EF0.c)
 *     sub_180052848 @ 0x180052848 (sub_180052848.c)
 *     sub_1800C4398 @ 0x1800C4398 (sub_1800C4398.c)
 *     sub_1800E754C @ 0x1800E754C (sub_1800E754C.c)
 *     sub_1800F15FD @ 0x1800F15FD (sub_1800F15FD.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_1800179FC @ 0x1800179FC (sub_1800179FC.c)
 *     sub_180025B30 @ 0x180025B30 (sub_180025B30.c)
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_180025BEC @ 0x180025BEC (sub_180025BEC.c)
 *     sub_180025D50 @ 0x180025D50 (sub_180025D50.c)
 *     sub_1800271C8 @ 0x1800271C8 (sub_1800271C8.c)
 *     sub_180027804 @ 0x180027804 (sub_180027804.c)
 *     sub_180070144 @ 0x180070144 (sub_180070144.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180025C20(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  volatile signed __int32 *v6; // rcx

  *a1 = &Spectre::Engine::RenderDevice::`vftable';
  sub_1800271C8();
  sub_180025BEC((__int64)(a1 + 512));
  sub_180025B30(a1 + 499);
  sub_180027804(a1 + 482);
  v2 = a1[481];
  if ( v2 )
    sub_180010530(v2);
  sub_18000B4B0((__int64)(a1 + 160), 40LL, 64LL);
  sub_180070144(a1 + 132);
  sub_180070144(a1 + 104);
  sub_180070144(a1 + 76);
  v3 = a1[75];
  if ( v3 )
    sub_180010530(v3);
  sub_180025D50(a1 + 62);
  sub_1800179FC((__int64)(a1 + 36));
  v4 = a1[35];
  if ( v4 )
    sub_180010530(v4);
  sub_180013300((__int64)(a1 + 31));
  sub_180013348((__int64)(a1 + 26));
  sub_180013348((__int64)(a1 + 22));
  sub_180013348((__int64)(a1 + 18));
  sub_180013348((__int64)(a1 + 14));
  sub_180013348((__int64)(a1 + 10));
  result = sub_180025BB0((__int64)(a1 + 3));
  v6 = (volatile signed __int32 *)a1[2];
  if ( v6 )
    return sub_180010574(v6);
  return result;
}
