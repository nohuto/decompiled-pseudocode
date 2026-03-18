/*
 * XREFs of SeTokenIsWriteRestricted @ 0x1403713B0
 * Callers:
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C77E4 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x140734FA0 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x1407C70C0 (NtCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x1407F4FB0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
