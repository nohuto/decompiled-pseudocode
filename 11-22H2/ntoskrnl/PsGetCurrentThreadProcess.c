/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14020BB20
 * Callers:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckExeOwnerForPca @ 0x14069A314 (CmpCheckExeOwnerForPca.c)
 *     SepAdtTokenRightAdjusted @ 0x1406BB15C (SepAdtTokenRightAdjusted.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C341C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmQueryKey @ 0x1406D7280 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     SeCheckForCriticalAceRemoval @ 0x14070FC70 (SeCheckForCriticalAceRemoval.c)
 *     CmpIsSystemEntity @ 0x1407BAAAC (CmpIsSystemEntity.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407C8A64 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140842830 (SepAuditAssignPrimaryToken.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x1409908CC (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140990DB0 (PopDiagTracePowerSettingRegistration.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA0C4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA680 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x1409CB148 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409CB310 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB54C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB888 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBAB4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC218 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCCF0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CCF9C (SepAdtStagingEvent.c)
 *     CmpPublishEventForPcaResolver @ 0x140A12BC8 (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A18FDC (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A1BAD4 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
