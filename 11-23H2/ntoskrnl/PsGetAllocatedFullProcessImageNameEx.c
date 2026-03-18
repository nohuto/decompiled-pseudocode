/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x140742774
 * Callers:
 *     SepAdtTokenRightAdjusted @ 0x1406BB15C (SepAdtTokenRightAdjusted.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C336C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckForCriticalAceRemoval @ 0x14070FBC0 (SeCheckForCriticalAceRemoval.c)
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407C84D4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeLocateProcessImageName @ 0x1407D87C0 (SeLocateProcessImageName.c)
 *     SepQueryNameString @ 0x1407F4EEC (SepQueryNameString.c)
 *     SepAuditAssignPrimaryToken @ 0x140840AA0 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140840CC4 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA014 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA5D0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1409CAF14 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1409CB098 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409CB260 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB49C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB7D8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBA04 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC168 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCC40 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CCEEC (SepAdtStagingEvent.c)
 *     ExProcessCounterSetCallback @ 0x1409F5DD0 (ExProcessCounterSetCallback.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A1BA24 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1407427A8 (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 2240) && (_QWORD)xmmword_140C38180 )
    return ((__int64 (*)(void))xmmword_140C38180)();
  if ( *(_QWORD *)(a1 + 1472) )
    return PsGetAllocatedFullProcessImageName();
  return result;
}
