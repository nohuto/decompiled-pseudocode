/*
 * XREFs of SepAuditFailed @ 0x1409D1E40
 * Callers:
 *     SepRmCallLsa @ 0x14031CB70 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x14031CDB8 (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x14038866C (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x1405B9C4C (SepAuditFailedRaisedIrql.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0560 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C10A0 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C339C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406C3500 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1406C3580 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1407BC4F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1407C3B80 (NtCloseObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1407C8520 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407C87A4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1407DF750 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1407F16D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x14082BA80 (SepRmCommandServerThread.c)
 *     SepAuditAssignPrimaryToken @ 0x140840DA0 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140840FC4 (SeAuditProcessCreation.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1408445C0 (NtPrivilegeObjectAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA214 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA7D0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1409CB114 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1409CB298 (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB69C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB9D8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBC04 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1409CC13C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC368 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCE40 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CD0EC (SepAdtStagingEvent.c)
 *     NtDeleteObjectAuditAlarm @ 0x1409CE0C0 (NtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CE360 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14041BCF0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x14041CEF0 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409CBF44 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAuditFailed(signed int a1)
{
  ULONG_PTR v1; // rbx
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp+10h] BYREF

  DestinationString = 0LL;
  v1 = a1;
  if ( SepCrashOnAuditFail )
  {
    if ( SepAdtRegNotifyHandle )
    {
      SepAdtLogAuditFailureEvent(a1, 1);
      RtlInitUnicodeString(&DestinationString, L"CrashOnAuditFail");
      LODWORD(BugCheckParameter4) = 2;
      do
      {
        do
          v2 = ZwSetValueKey(SepAdtRegNotifyHandle, &DestinationString, 0, 4u, &BugCheckParameter4, 4u);
        while ( v2 == -1073741670 );
      }
      while ( v2 == -1073741801 );
      if ( v2 >= 0 )
      {
        do
        {
          do
            v3 = ZwFlushKey(SepAdtRegNotifyHandle);
          while ( v3 == -1073741670 );
        }
        while ( v3 == -1073741801 );
      }
      KeBugCheckEx(0xC0000244, v1, 0LL, 0LL, 0LL);
    }
    SepCrashOnAuditFail = 0;
  }
}
