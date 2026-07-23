/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x140742964
 * Callers:
 *     SepAdtTokenRightAdjusted @ 0x1406BB18C (SepAdtTokenRightAdjusted.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C339C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckForCriticalAceRemoval @ 0x14070FDD0 (SeCheckForCriticalAceRemoval.c)
 *     ExpGetProcessInformation @ 0x140742FB0 (ExpGetProcessInformation.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407C87A4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeLocateProcessImageName @ 0x1407D8A90 (SeLocateProcessImageName.c)
 *     SepQueryNameString @ 0x1407F51BC (SepQueryNameString.c)
 *     SepAuditAssignPrimaryToken @ 0x140840DA0 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140840FC4 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA214 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA7D0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1409CB114 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1409CB298 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409CB460 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB69C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB9D8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBC04 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC368 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCE40 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CD0EC (SepAdtStagingEvent.c)
 *     ExProcessCounterSetCallback @ 0x1409F6060 (ExProcessCounterSetCallback.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A1BCD4 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140742998 (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 2240) && (_QWORD)xmmword_140C38120 )
    return ((__int64 (*)(void))xmmword_140C38120)();
  if ( *(_QWORD *)(a1 + 1472) )
    return PsGetAllocatedFullProcessImageName();
  return result;
}
