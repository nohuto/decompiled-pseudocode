/*
 * XREFs of sub_1800868D4 @ 0x1800868D4
 * Callers:
 *     sub_180061550 @ 0x180061550 (sub_180061550.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 *     sub_18002A4FC @ 0x18002A4FC (sub_18002A4FC.c)
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800868D4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  volatile signed __int32 *v8; // rcx

  sub_18000B4B0(a1 + 496, 16LL, 10LL);
  sub_180027FD4((void **)(a1 + 480));
  sub_18000B4B0(a1 + 384, 16LL, 6LL);
  sub_18000B4B0(a1 + 192, 32LL, 6LL);
  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 )
    sub_180010530(v2);
  sub_18007E7DC(a1 + 144);
  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
    sub_180010530(v3);
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
    sub_180010530(v4);
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
    sub_180010530(v5);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
    sub_180010530(v6);
  result = sub_18002A4FC(a1 + 24);
  v8 = *(volatile signed __int32 **)(a1 + 8);
  if ( v8 )
    return sub_180010574(v8);
  return result;
}
