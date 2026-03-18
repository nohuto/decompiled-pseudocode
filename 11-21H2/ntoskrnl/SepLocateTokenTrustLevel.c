/*
 * XREFs of SepLocateTokenTrustLevel @ 0x140232910
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SepCommonAccessCheckEx @ 0x140383ABC (SepCommonAccessCheckEx.c)
 *     SepAdjustAccessStateForConstraints @ 0x1406B539C (SepAdjustAccessStateForConstraints.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 *     RtlpSetSecurityObject @ 0x140726700 (RtlpSetSecurityObject.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1407B3CD0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1407B4BA0 (SeAdjustAccessStateForAccessConstraints.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 *     SepGetDefaultsSubjectContext @ 0x1409CA928 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1402F8A20 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[2];
  v4 = 0;
  if ( v1 )
  {
    RtlSidDominatesForTrust(*(_QWORD *)(v2 + 1104), *(_QWORD *)(v1 + 1104), &v4);
    if ( v4 )
      v2 = v1;
  }
  return *(_QWORD *)(v2 + 1104);
}
