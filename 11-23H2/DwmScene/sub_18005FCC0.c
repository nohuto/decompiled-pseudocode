/*
 * XREFs of sub_18005FCC0 @ 0x18005FCC0
 * Callers:
 *     sub_180050BB0 @ 0x180050BB0 (sub_180050BB0.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001B880 @ 0x18001B880 (sub_18001B880.c)
 *     sub_18001D2D8 @ 0x18001D2D8 (sub_18001D2D8.c)
 *     sub_18004D8C4 @ 0x18004D8C4 (sub_18004D8C4.c)
 *     sub_18005F1F4 @ 0x18005F1F4 (sub_18005F1F4.c)
 *     sub_18005FB18 @ 0x18005FB18 (sub_18005FB18.c)
 *     sub_1800E0DB0 @ 0x1800E0DB0 (sub_1800E0DB0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005FCC0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  sub_18001B880(a1 + 528);
  sub_180011B24(a1 + 496);
  sub_18005F1F4((void **)(a1 + 480), a1 + 480);
  sub_1800E0DB0(a1 + 472);
  v2 = *(_QWORD *)(a1 + 464);
  if ( v2 )
    sub_180010530(v2);
  v3 = *(_QWORD *)(a1 + 448);
  if ( v3 )
    sub_180010530(v3);
  sub_18005FB18((void **)(a1 + 416));
  sub_18000B4B0(a1 + 256, 16LL, 10LL);
  sub_18000B4B0(a1 + 96, 16LL, 10LL);
  sub_18001D2D8((void **)(a1 + 80));
  sub_18004D8C4((void **)(a1 + 48), a1 + 48);
  result = sub_180011B24(a1 + 16);
  v5 = *(volatile signed __int32 **)(a1 + 8);
  if ( v5 )
    return sub_180010574(v5);
  return result;
}
