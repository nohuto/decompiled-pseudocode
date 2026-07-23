/*
 * XREFs of SeTokenIsAdmin @ 0x140695DA0
 * Callers:
 *     IoComputeRedirectionTrustLevel @ 0x140201F40 (IoComputeRedirectionTrustLevel.c)
 *     sub_140205B1C @ 0x140205B1C (sub_140205B1C.c)
 *     sub_1406950FC @ 0x1406950FC (sub_1406950FC.c)
 *     sub_140695CF8 @ 0x140695CF8 (sub_140695CF8.c)
 *     sub_140702AF8 @ 0x140702AF8 (sub_140702AF8.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_1409E57B8 @ 0x1409E57B8 (sub_1409E57B8.c)
 * Callees:
 *     sub_14021F640 @ 0x14021F640 (sub_14021F640.c)
 *     SeTokenIsRestricted @ 0x14021F680 (SeTokenIsRestricted.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  BOOLEAN v2; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = sub_14021F640((__int64)Token, 0LL, (__int64)SidToCheck, 0LL, 0, 0);
  if ( v2 )
  {
    if ( SeTokenIsRestricted(Token) )
      return sub_14021F640((__int64)Token, 0LL, (__int64)SidToCheck, 0LL, 1, 0);
  }
  return v2;
}
