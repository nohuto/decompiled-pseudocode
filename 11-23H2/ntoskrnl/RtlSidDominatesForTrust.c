/*
 * XREFs of RtlSidDominatesForTrust @ 0x1402B33F0
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402316C0 (SeAccessCheckWithHint.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1402B2E70 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1402B3314 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepTrustLevelCheck @ 0x1402B5BA8 (SepTrustLevelCheck.c)
 *     SepLocateTokenTrustLevel @ 0x140334990 (SepLocateTokenTrustLevel.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x1405B9060 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA488 (SeIsTokenAssignableToProcess.c)
 *     SeTokenCanImpersonate @ 0x140734FA0 (SeTokenCanImpersonate.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x140737400 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAdjustAccessStateForConstraints @ 0x1407AB2E0 (SepAdjustAccessStateForConstraints.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1407E5E30 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1402B3A30 (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r9
  __int64 v5; // r9
  __int64 v6; // r10

  *a3 = 0;
  v3 = a2;
  if ( a1 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a1, a2, a3, a2) )
    return 3221225485LL;
  if ( !v3 )
  {
LABEL_3:
    *a3 = 1;
    return 0LL;
  }
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v3, a2, a3, v3) )
    return 3221225485LL;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v5 + 8) && *(_DWORD *)(v6 + 12) >= *(_DWORD *)(v5 + 12) )
      goto LABEL_3;
  }
  else if ( !*(_DWORD *)(v5 + 8) )
  {
    goto LABEL_3;
  }
  *a3 = 0;
  return 0LL;
}
