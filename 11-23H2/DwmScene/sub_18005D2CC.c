/*
 * XREFs of sub_18005D2CC @ 0x18005D2CC
 * Callers:
 *     sub_18001AF40 @ 0x18001AF40 (sub_18001AF40.c)
 *     sub_18001B02C @ 0x18001B02C (sub_18001B02C.c)
 *     sub_18005BEA8 @ 0x18005BEA8 (sub_18005BEA8.c)
 *     sub_18005D050 @ 0x18005D050 (sub_18005D050.c)
 *     sub_18005D0B8 @ 0x18005D0B8 (sub_18005D0B8.c)
 *     sub_18005D20C @ 0x18005D20C (sub_18005D20C.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_18005D26C @ 0x18005D26C (sub_18005D26C.c)
 *     sub_18005D2E8 @ 0x18005D2E8 (sub_18005D2E8.c)
 *     sub_18005D33C @ 0x18005D33C (sub_18005D33C.c)
 *     sub_18005D564 @ 0x18005D564 (sub_18005D564.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18005D2CC(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 544) |= a2;
  if ( (a2 & 4) != 0 )
    *(_BYTE *)(a1 + 1612) = 1;
}
