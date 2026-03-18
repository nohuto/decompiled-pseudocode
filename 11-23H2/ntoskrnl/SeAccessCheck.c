/*
 * XREFs of SeAccessCheck @ 0x140231650
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14022F320 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x14035A74C (IopCreateSecurityCheck.c)
 *     SeIsSystemContext @ 0x1405B916C (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1405FB808 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140616398 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     EtwpAccessCheck @ 0x1406BDBDC (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1406BF6F0 (EtwpFindOrCreateGuidEntry.c)
 *     CmpCheckCreateAccess @ 0x1406C0848 (CmpCheckCreateAccess.c)
 *     ObpCheckObjectReference @ 0x1406C2F6C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406C4F10 (ObCheckCreateObjectAccess.c)
 *     ObpCreateHandle @ 0x1406E4510 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     sub_1406EF570 @ 0x1406EF570 (sub_1406EF570.c)
 *     ExpWnfCheckCallerAccess @ 0x140713834 (ExpWnfCheckCallerAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A00 (AlpcpCheckConnectionSecurity.c)
 *     RtlpNewSecurityObject @ 0x14072A400 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     CmpCheckNotifyAccess @ 0x140766A84 (CmpCheckNotifyAccess.c)
 *     PiAuVerifyAccessToObject @ 0x14079A8CC (PiAuVerifyAccessToObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407A5BE0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObCheckObjectAccess @ 0x1407B6260 (ObCheckObjectAccess.c)
 *     ExIsRestrictedCaller @ 0x1407D8824 (ExIsRestrictedCaller.c)
 *     PopBootStatAccessCheck @ 0x1407EBB54 (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x140850810 (NtSetUuidSeed.c)
 *     PiAuCheckTokenMembership @ 0x14095B710 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x14097B718 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1409B209C (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x1409B63E4 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x140A018E4 (CMFCheckAccess.c)
 *     CmUpdateFeatureConfiguration @ 0x140A11E2C (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A1213C (CmUpdateFeatureUsageSubscription.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B0E8 (CmpCheckKeyBodyAccess.c)
 *     VfUtilIsLocalSystem @ 0x140AC2754 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402316C0 (SeAccessCheckWithHint.c)
 */

BOOLEAN __stdcall SeAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN SubjectContextLocked,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           DesiredAccess,
           PreviouslyGrantedAccess,
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}
