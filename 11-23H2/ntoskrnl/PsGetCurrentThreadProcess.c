/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14020BB00
 * Callers:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckExeOwnerForPca @ 0x14069A314 (CmpCheckExeOwnerForPca.c)
 *     SepAdtTokenRightAdjusted @ 0x1406BB18C (SepAdtTokenRightAdjusted.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C339C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmQueryKey @ 0x1406D7200 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     SeCheckForCriticalAceRemoval @ 0x14070FDD0 (SeCheckForCriticalAceRemoval.c)
 *     CmpIsSystemEntity @ 0x1407BA7DC (CmpIsSystemEntity.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407C87A4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x140840DA0 (SepAuditAssignPrimaryToken.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140990A1C (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140990F00 (PopDiagTracePowerSettingRegistration.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA214 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA7D0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x1409CB298 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409CB460 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB69C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB9D8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBC04 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC368 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCE40 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CD0EC (SepAdtStagingEvent.c)
 *     CmpPublishEventForPcaResolver @ 0x140A12DC8 (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A191DC (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A1BCD4 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
