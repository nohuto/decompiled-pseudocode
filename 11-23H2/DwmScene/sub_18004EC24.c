/*
 * XREFs of sub_18004EC24 @ 0x18004EC24
 * Callers:
 *     sub_180038210 @ 0x180038210 (sub_180038210.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001B880 @ 0x18001B880 (sub_18001B880.c)
 *     sub_18001D2D8 @ 0x18001D2D8 (sub_18001D2D8.c)
 *     sub_180027FD4 @ 0x180027FD4 (sub_180027FD4.c)
 *     sub_18004E998 @ 0x18004E998 (sub_18004E998.c)
 *     sub_18004E9C8 @ 0x18004E9C8 (sub_18004E9C8.c)
 *     sub_18004E9F8 @ 0x18004E9F8 (sub_18004E9F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004EC24(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  sub_18001B880(a1 + 18664);
  v2 = *(_QWORD *)(a1 + 18656);
  if ( v2 )
    sub_180010530(v2);
  v3 = *(_QWORD *)(a1 + 18640);
  if ( v3 )
    sub_180010530(v3);
  sub_180027FD4((void **)(a1 + 18608));
  sub_18004E9C8((void **)(a1 + 18592));
  sub_18004E998((void **)(a1 + 18576));
  sub_18004E9F8((void **)(a1 + 18560));
  sub_180011B24(a1 + 18528);
  sub_180011B24(a1 + 18496);
  sub_18000B4B0(a1 + 2104, 32LL, 512LL);
  sub_18001D2D8((void **)(a1 + 2088));
  sub_18000B4B0(a1 + 32, 32LL, 64LL);
  result = sub_18001D2D8((void **)(a1 + 16));
  v5 = *(volatile signed __int32 **)(a1 + 8);
  if ( v5 )
    return sub_180010574(v5);
  return result;
}
