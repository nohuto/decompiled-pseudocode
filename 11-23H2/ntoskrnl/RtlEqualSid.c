/*
 * XREFs of RtlEqualSid @ 0x14022A770
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x140224B24 (SepSetTrustLevelForProcessToken.c)
 *     RtlFindAceBySid @ 0x140227970 (RtlFindAceBySid.c)
 *     SepCreateTokenEx @ 0x140229710 (SepCreateTokenEx.c)
 *     SepMaximumAccessCheck @ 0x14022A160 (SepMaximumAccessCheck.c)
 *     SepMatchPackage @ 0x14022C710 (SepMatchPackage.c)
 *     SepNormalAccessCheck @ 0x140233540 (SepNormalAccessCheck.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1402B3740 (SepSetProcessTrustLabelAceForToken.c)
 *     SepSidInTokenSidHash @ 0x1402B6680 (SepSidInTokenSidHash.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1405A9E70 (RtlGetAppContainerNamedObjectPath.c)
 *     SeFastTraverseCheck @ 0x1405B78F4 (SeFastTraverseCheck.c)
 *     SepRmReferenceFindCap @ 0x1405B98B8 (SepRmReferenceFindCap.c)
 *     CmpCheckExeOwnerForPca @ 0x14069A314 (CmpCheckExeOwnerForPca.c)
 *     SepHasCriticalAcesRemoved @ 0x14069C020 (SepHasCriticalAcesRemoved.c)
 *     CmpCheckKeyOwnerForPca @ 0x14069E2E4 (CmpCheckKeyOwnerForPca.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C336C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     LookupSidInTable @ 0x1406C3660 (LookupSidInTable.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1406C381C (SePrivilegedServiceAuditAlarm.c)
 *     RtlpIsDuplicateAce @ 0x1406C3910 (RtlpIsDuplicateAce.c)
 *     RtlpGenerateInheritedAce @ 0x1406C3C60 (RtlpGenerateInheritedAce.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C77E4 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepValidOwnerSubjectContext @ 0x1406C7934 (SepValidOwnerSubjectContext.c)
 *     ObpCreateHandle @ 0x1406E4510 (ObpCreateHandle.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A00 (AlpcpCheckConnectionSecurity.c)
 *     SepCreateImpersonationTokenDacl @ 0x140733320 (SepCreateImpersonationTokenDacl.c)
 *     SeTokenCanImpersonate @ 0x140734FA0 (SeTokenCanImpersonate.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB04C (AlpcpPortQueryConnectedSidInfo.c)
 *     NtCompareTokens @ 0x1407C70C0 (NtCompareTokens.c)
 *     SepCompareSidAndAttributeArrays @ 0x1407C73D0 (SepCompareSidAndAttributeArrays.c)
 *     SepAdjustGroups @ 0x1407CAC9C (SepAdjustGroups.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407ECCBC (SepIsImpersonationAllowedDueToCapability.c)
 *     NtSetInformationToken @ 0x1407EF480 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2540 (NtCreateLowBoxToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1407F2BF0 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepGetCachedHandlesEntry @ 0x1407F465C (SepGetCachedHandlesEntry.c)
 *     SepFindMatchingLowBoxNumberEntry @ 0x1407F49DC (SepFindMatchingLowBoxNumberEntry.c)
 *     PspLookupProcessQuotaBlock @ 0x1407F8654 (PspLookupProcessQuotaBlock.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087EB00 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDqSameUserHive @ 0x14095C570 (PiDqSameUserHive.c)
 *     RtlpCompareKnownObjectAces @ 0x1409BC658 (RtlpCompareKnownObjectAces.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1409BE6B4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     SepIdAssignableAsGroup @ 0x1409CDC98 (SepIdAssignableAsGroup.c)
 *     SepCheckCapabilities @ 0x1409CF25C (SepCheckCapabilities.c)
 *     SepCompareSidValuesBlocks @ 0x1409CF474 (SepCompareSidValuesBlocks.c)
 *     SepIsLpacCapabilitySid @ 0x1409CF8A8 (SepIsLpacCapabilitySid.c)
 *     SepIsSidEqual @ 0x1409D1258 (SepIsSidEqual.c)
 *     SepFindSharedSidEntry @ 0x1409D174C (SepFindSharedSidEntry.c)
 *     CmpBuildAdminInformation @ 0x140A1895C (CmpBuildAdminInformation.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A3BC (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     memcmp @ 0x1403DA350 (memcmp.c)
 */

BOOLEAN __stdcall RtlEqualSid(PSID Sid1, PSID Sid2)
{
  unsigned __int64 v2; // rax

  v2 = *(unsigned __int16 *)Sid1;
  return (_WORD)v2 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4 * (v2 >> 8) + 8) == 0;
}
