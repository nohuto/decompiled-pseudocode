/*
 * XREFs of SepLocateTokenTrustLevel @ 0x140334990
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228CE0 (SepCommonAccessCheckEx.c)
 *     SeAccessCheckWithHint @ 0x1402316C0 (SeAccessCheckWithHint.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 *     RtlpNewSecurityObject @ 0x14072A400 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14072BD70 (RtlpSetSecurityObject.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x140737400 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAdjustAccessStateForConstraints @ 0x1407AB2E0 (SepAdjustAccessStateForConstraints.c)
 *     SepGetDefaultsSubjectContext @ 0x1409CDBE4 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1402B33F0 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SepLocateTokenTrustLevel(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r11
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1[2];
  v4 = 0;
  if ( v1 && (RtlSidDominatesForTrust(*(_QWORD *)(v2 + 1104), *(_QWORD *)(v1 + 1104), &v4), v4) )
    return *(_QWORD *)(v1 + 1104);
  else
    return *(_QWORD *)(v2 + 1104);
}
