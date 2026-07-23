/*
 * XREFs of sub_14077A710 @ 0x14077A710
 * Callers:
 *     sub_1406DCFC0 @ 0x1406DCFC0 (sub_1406DCFC0.c)
 *     sub_14076A8FC @ 0x14076A8FC (sub_14076A8FC.c)
 *     sub_140770200 @ 0x140770200 (sub_140770200.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14077A4D4 @ 0x14077A4D4 (sub_14077A4D4.c)
 *     sub_14077A624 @ 0x14077A624 (sub_14077A624.c)
 *     sub_140A27790 @ 0x140A27790 (sub_140A27790.c)
 *     sub_140A2CED0 @ 0x140A2CED0 (sub_140A2CED0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14077A710(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 1LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 2LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 4LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 5LL;
  if ( v6 == 1 )
    return 6LL;
  return 0LL;
}
