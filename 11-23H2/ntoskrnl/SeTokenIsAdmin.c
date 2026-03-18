/*
 * XREFs of SeTokenIsAdmin @ 0x1407D04A0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140225BB0 (SepMandatorySubProcessToken.c)
 *     IoComputeRedirectionTrustLevel @ 0x140558B40 (IoComputeRedirectionTrustLevel.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     PspDisablePrimaryTokenExchange @ 0x14076F8E0 (PspDisablePrimaryTokenExchange.c)
 *     PspIsContextAdmin @ 0x1407D0278 (PspIsContextAdmin.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D037C (MiIsUserQueryVmCallerTrusted.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E8938 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140228830 (SeTokenIsRestricted.c)
 *     SepSidInToken @ 0x14035C1BC (SepSidInToken.c)
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
