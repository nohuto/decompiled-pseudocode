/*
 * XREFs of SeReleaseSid @ 0x1406BB2D4
 * Callers:
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     NtCreateTokenEx @ 0x1406BB560 (NtCreateTokenEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14071334C (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     AlpcpConnectPort @ 0x140717570 (AlpcpConnectPort.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB23C (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSecureConnectPort @ 0x1407C4100 (NtSecureConnectPort.c)
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2810 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
