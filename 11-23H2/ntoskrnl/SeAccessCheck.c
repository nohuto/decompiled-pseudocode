/*
 * XREFs of SeAccessCheck @ 0x140231720
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14022F430 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x14035A8EC (IopCreateSecurityCheck.c)
 *     SeIsSystemContext @ 0x1405B96DC (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1405FBD78 (WdipAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1406168E8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     EtwpAccessCheck @ 0x1406BDC0C (EtwpAccessCheck.c)
 *     EtwpFindOrCreateGuidEntry @ 0x1406BF720 (EtwpFindOrCreateGuidEntry.c)
 *     CmpCheckCreateAccess @ 0x1406C0878 (CmpCheckCreateAccess.c)
 *     ObpCheckObjectReference @ 0x1406C2F9C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406C4F40 (ObCheckCreateObjectAccess.c)
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 *     ExpWnfCheckCallerAccess @ 0x140713A44 (ExpWnfCheckCallerAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715C00 (AlpcpCheckConnectionSecurity.c)
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     CmpCheckNotifyAccess @ 0x140766C74 (CmpCheckNotifyAccess.c)
 *     PiAuVerifyAccessToObject @ 0x14079AABC (PiAuVerifyAccessToObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407A5DD0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObCheckObjectAccess @ 0x1407B6540 (ObCheckObjectAccess.c)
 *     ExIsRestrictedCaller @ 0x1407D8AF4 (ExIsRestrictedCaller.c)
 *     PopBootStatAccessCheck @ 0x1407EBE24 (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x140850B10 (NtSetUuidSeed.c)
 *     PiAuCheckTokenMembership @ 0x14095B910 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x14097B918 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1409B229C (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x1409B65E4 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x140A01B74 (CMFCheckAccess.c)
 *     CmUpdateFeatureConfiguration @ 0x140A120DC (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140A123EC (CmUpdateFeatureUsageSubscription.c)
 *     CmpCheckKeyBodyAccess @ 0x140A1B398 (CmpCheckKeyBodyAccess.c)
 *     VfUtilIsLocalSystem @ 0x140AC2744 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140231790 (SeAccessCheckWithHint.c)
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
