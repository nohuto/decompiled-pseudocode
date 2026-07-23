/*
 * XREFs of SepLocateTokenTrustLevel @ 0x140334C20
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228DF0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14072BF70 (RtlpSetSecurityObject.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1407375F0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAdjustAccessStateForConstraints @ 0x1407AB4D0 (SepAdjustAccessStateForConstraints.c)
 *     SepGetDefaultsSubjectContext @ 0x1409CDDE4 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1402B3680 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r11
  BOOLEAN DominatesTrust; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[2];
  DominatesTrust = 0;
  if ( v1 && (RtlSidDominatesForTrust(*(PSID *)(v2 + 1104), *(PSID *)(v1 + 1104), &DominatesTrust), DominatesTrust) )
    return *(_QWORD *)(v1 + 1104);
  else
    return *(_QWORD *)(v2 + 1104);
}
