/*
 * XREFs of SeReleaseSid @ 0x1406BB2A4
 * Callers:
 *     SeAccessCheckByType @ 0x1402B3AC0 (SeAccessCheckByType.c)
 *     NtCreateTokenEx @ 0x1406BB530 (NtCreateTokenEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14071313C (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     AlpcpConnectPort @ 0x140717370 (AlpcpConnectPort.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB04C (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSecureConnectPort @ 0x1407C3E30 (NtSecureConnectPort.c)
 *     NtSetInformationToken @ 0x1407EF480 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2540 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
