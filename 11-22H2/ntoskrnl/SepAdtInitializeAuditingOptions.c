/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140B648B0
 * Callers:
 *     SeRmInitPhase1 @ 0x140B647DC (SeRmInitPhase1.c)
 * Callees:
 *     NtClose @ 0x1406E4570 (NtClose.c)
 *     NtSetEvent @ 0x1407ADAE0 (NtSetEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x1408439E4 (AdtpInitializeAuditingCommon.c)
 *     SepAdtInitializeCrashOnFail @ 0x140843A24 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140843A84 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140843B10 (SepAdtOpenEtwReadyEvent.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140844348 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeBounds @ 0x1408443A8 (SepAdtInitializeBounds.c)
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
