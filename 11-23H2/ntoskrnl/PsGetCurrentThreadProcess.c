/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14020BB00
 * Callers:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckExeOwnerForPca @ 0x14069A314 (CmpCheckExeOwnerForPca.c)
 *     SepAdtTokenRightAdjusted @ 0x1406BB15C (SepAdtTokenRightAdjusted.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C336C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmQueryKey @ 0x1406D71D0 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     SeCheckForCriticalAceRemoval @ 0x14070FBC0 (SeCheckForCriticalAceRemoval.c)
 *     CmpIsSystemEntity @ 0x1407BA4FC (CmpIsSystemEntity.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407C84D4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140840AA0 (SepAuditAssignPrimaryToken.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x14099081C (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140990D00 (PopDiagTracePowerSettingRegistration.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA014 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA5D0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x1409CB098 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409CB260 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB49C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB7D8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBA04 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC168 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCC40 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CCEEC (SepAdtStagingEvent.c)
 *     CmpPublishEventForPcaResolver @ 0x140A12B18 (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A18F2C (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A1BA24 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
