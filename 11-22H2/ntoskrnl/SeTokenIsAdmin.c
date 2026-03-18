/*
 * XREFs of SeTokenIsAdmin @ 0x1407D0A20
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140225BD0 (SepMandatorySubProcessToken.c)
 *     IoComputeRedirectionTrustLevel @ 0x140558BE0 (IoComputeRedirectionTrustLevel.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     PspDisablePrimaryTokenExchange @ 0x14076FDF0 (PspDisablePrimaryTokenExchange.c)
 *     PspIsContextAdmin @ 0x1407D07D8 (PspIsContextAdmin.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D08DC (MiIsUserQueryVmCallerTrusted.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E89E8 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140228850 (SeTokenIsRestricted.c)
 *     SepSidInToken @ 0x14035BB6C (SepSidInToken.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  BOOLEAN v2; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = SepSidInToken((__int64)Token, 0LL, (unsigned __int8 *)SeAliasAdminsSid, 0, 0, 0);
  if ( v2 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, (unsigned __int8 *)SeAliasAdminsSid, 0, 1, 0);
  }
  return v2;
}
