/*
 * XREFs of RtlSidDominatesForTrust @ 0x1402B3680
 * Callers:
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1402B3100 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1402B35A4 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepTrustLevelCheck @ 0x1402B5E38 (SepTrustLevelCheck.c)
 *     SepLocateTokenTrustLevel @ 0x140334C20 (SepLocateTokenTrustLevel.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1405B95D0 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA4B8 (SeIsTokenAssignableToProcess.c)
 *     SeTokenCanImpersonate @ 0x140735190 (SeTokenCanImpersonate.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1407375F0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAdjustAccessStateForConstraints @ 0x1407AB4D0 (SepAdjustAccessStateForConstraints.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1407E6100 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1402B3CC0 (RtlIsValidProcessTrustLabelSid.c)
 */

NTSTATUS __cdecl RtlSidDominatesForTrust(PSID Sid1, PSID Sid2, PBOOLEAN DominatesTrust)
{
  PSID v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *DominatesTrust = 0;
  v3 = Sid2;
  if ( Sid1 && !RtlIsValidProcessTrustLabelSid(Sid1) )
    return -1073741811;
  if ( !v3 )
  {
LABEL_3:
    *DominatesTrust = 1;
    return 0;
  }
  if ( !RtlIsValidProcessTrustLabelSid(v3) )
    return -1073741811;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v5 + 8) && *(_DWORD *)(v6 + 12) >= *(_DWORD *)(v5 + 12) )
      goto LABEL_3;
  }
  else if ( !*(_DWORD *)(v5 + 8) )
  {
    goto LABEL_3;
  }
  *DominatesTrust = 0;
  return 0;
}
