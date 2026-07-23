/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140B60D40
 * Callers:
 *     SeRmInitPhase1 @ 0x140B60C6C (SeRmInitPhase1.c)
 * Callees:
 *     NtClose @ 0x1406E44F0 (NtClose.c)
 *     NtSetEvent @ 0x1407AD720 (NtSetEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x140841F54 (AdtpInitializeAuditingCommon.c)
 *     SepAdtInitializeCrashOnFail @ 0x140841F94 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140841FF4 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140842080 (SepAdtOpenEtwReadyEvent.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1408428B8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeBounds @ 0x140842918 (SepAdtInitializeBounds.c)
 */

int SepAdtInitializeAuditingOptions()
{
  int result; // eax
  NTSTATUS v1; // ebx
  HANDLE EventHandle; // [rsp+30h] [rbp+8h] BYREF

  EventHandle = 0LL;
  result = AdtpInitializeAuditingCommon();
  if ( result >= 0 )
  {
    result = SepAdtOpenEtwReadyEvent(&EventHandle);
    if ( result >= 0 )
    {
      v1 = NtSetEvent(EventHandle, 0LL);
      NtClose(EventHandle);
      if ( v1 >= 0 )
      {
        result = SepAdtOpenRegAndSetupNotification();
        v1 = result;
        if ( result < 0 )
          return result;
        SepAdtInitializeCrashOnFail();
        SepAdtInitializePrivilegeAuditing();
        SepAdtInitializeBounds();
      }
      return v1;
    }
  }
  return result;
}
