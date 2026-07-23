/*
 * XREFs of SeTokenIsRestricted @ 0x140228940
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C7814 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x140735190 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x1407C7390 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x1407D0770 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407ECF8C (SepIsImpersonationAllowedDueToCapability.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5280 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
