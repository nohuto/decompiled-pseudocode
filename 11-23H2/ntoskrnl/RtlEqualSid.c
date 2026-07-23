/*
 * XREFs of RtlEqualSid @ 0x14022A880
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x140224C2C (SepSetTrustLevelForProcessToken.c)
 *     RtlFindAceBySid @ 0x140227A80 (RtlFindAceBySid.c)
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 *     SepMaximumAccessCheck @ 0x14022A270 (SepMaximumAccessCheck.c)
 *     SepMatchPackage @ 0x14022C820 (SepMatchPackage.c)
 *     SepNormalAccessCheck @ 0x140233610 (SepNormalAccessCheck.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1402B39D0 (SepSetProcessTrustLabelAceForToken.c)
 *     SepSidInTokenSidHash @ 0x1402B6910 (SepSidInTokenSidHash.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1405AA3E0 (RtlGetAppContainerNamedObjectPath.c)
 *     SeFastTraverseCheck @ 0x1405B7E64 (SeFastTraverseCheck.c)
 *     SepRmReferenceFindCap @ 0x1405B9E28 (SepRmReferenceFindCap.c)
 *     CmpCheckExeOwnerForPca @ 0x14069A314 (CmpCheckExeOwnerForPca.c)
 *     SepHasCriticalAcesRemoved @ 0x14069C020 (SepHasCriticalAcesRemoved.c)
 *     CmpCheckKeyOwnerForPca @ 0x14069E2E4 (CmpCheckKeyOwnerForPca.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C339C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     LookupSidInTable @ 0x1406C3690 (LookupSidInTable.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1406C384C (SePrivilegedServiceAuditAlarm.c)
 *     RtlpIsDuplicateAce @ 0x1406C3940 (RtlpIsDuplicateAce.c)
 *     RtlpGenerateInheritedAce @ 0x1406C3C90 (RtlpGenerateInheritedAce.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C7814 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406C7964 (SepValidOwnerSubjectContext.c)
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715C00 (AlpcpCheckConnectionSecurity.c)
 *     SepCreateImpersonationTokenDacl @ 0x140733510 (SepCreateImpersonationTokenDacl.c)
 *     SeTokenCanImpersonate @ 0x140735190 (SeTokenCanImpersonate.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB23C (AlpcpPortQueryConnectedSidInfo.c)
 *     NtCompareTokens @ 0x1407C7390 (NtCompareTokens.c)
 *     SepCompareSidAndAttributeArrays @ 0x1407C76A0 (SepCompareSidAndAttributeArrays.c)
 *     SepAdjustGroups @ 0x1407CAF6C (SepAdjustGroups.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407ECF8C (SepIsImpersonationAllowedDueToCapability.c)
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2810 (NtCreateLowBoxToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1407F2EC0 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepGetCachedHandlesEntry @ 0x1407F492C (SepGetCachedHandlesEntry.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x1407F4CAC (SepFindMatchingLowBoxNumberEntry.c)
 *     PspLookupProcessQuotaBlock @ 0x1407F8924 (PspLookupProcessQuotaBlock.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087ED40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDqSameUserHive @ 0x14095C770 (PiDqSameUserHive.c)
 *     RtlpCompareKnownObjectAces @ 0x1409BC858 (RtlpCompareKnownObjectAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1409BE8B4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     SepIdAssignableAsGroup @ 0x1409CDE98 (SepIdAssignableAsGroup.c)
 *     SepCheckCapabilities @ 0x1409CF45C (SepCheckCapabilities.c)
 *     SepCompareSidValuesBlocks @ 0x1409CF674 (SepCompareSidValuesBlocks.c)
 *     SepIsLpacCapabilitySid @ 0x1409CFAA8 (SepIsLpacCapabilitySid.c)
 *     SepIsSidEqual @ 0x1409D1458 (SepIsSidEqual.c)
 *     SepFindSharedSidEntry @ 0x1409D194C (SepFindSharedSidEntry.c)
 *     CmpBuildAdminInformation @ 0x140A18C0C (CmpBuildAdminInformation.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A66C (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     memcmp @ 0x1403DA530 (memcmp.c)
 */

BOOLEAN __stdcall RtlEqualSid(PSID Sid1, PSID Sid2)
{
  unsigned __int64 v2; // rax

  v2 = *(unsigned __int16 *)Sid1;
  return (_WORD)v2 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4 * (v2 >> 8) + 8) == 0;
}
