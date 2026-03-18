/*
 * XREFs of SeTokenIsRestricted @ 0x140228830
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C77E4 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeTokenCanImpersonate @ 0x140734FA0 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x1407C70C0 (NtCompareTokens.c)
 *     SeTokenIsAdmin @ 0x1407D04A0 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407ECCBC (SepIsImpersonationAllowedDueToCapability.c)
 *     NtImpersonateAnonymousToken @ 0x1407F4FB0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeTokenIsRestricted(PACCESS_TOKEN Token)
{
  return (*((_DWORD *)Token + 50) & 0x10) != 0;
}
