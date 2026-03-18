/*
 * XREFs of SeReleaseSid @ 0x1406BB2A4
 * Callers:
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 *     NtCreateTokenEx @ 0x1406BB530 (NtCreateTokenEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10C0 (SepAccessCheckAndAuditAlarm.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1407131EC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     AlpcpConnectPort @ 0x1407173E0 (AlpcpConnectPort.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB5FC (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSecureConnectPort @ 0x1407C43C0 (NtSecureConnectPort.c)
 *     NtSetInformationToken @ 0x1407EFA00 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2AC0 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
