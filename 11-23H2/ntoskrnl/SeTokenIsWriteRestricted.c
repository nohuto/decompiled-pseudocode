/*
 * XREFs of SeTokenIsWriteRestricted @ 0x140371550
 * Callers:
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C7814 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x140735190 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x1407C7390 (NtCompareTokens.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5280 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsWriteRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 8) != 0;
}
