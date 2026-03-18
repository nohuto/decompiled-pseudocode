/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140B60D40
 * Callers:
 *     SeRmInitPhase1 @ 0x140B60C6C (SeRmInitPhase1.c)
 * Callees:
 *     NtClose @ 0x1406E44C0 (NtClose.c)
 *     NtSetEvent @ 0x1407AD530 (NtSetEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x140841C54 (AdtpInitializeAuditingCommon.c)
 *     SepAdtInitializeCrashOnFail @ 0x140841C94 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140841CF4 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140841D80 (SepAdtOpenEtwReadyEvent.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1408425B8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeBounds @ 0x140842618 (SepAdtInitializeBounds.c)
 */

int SepAdtInitializeAuditingOptions()
{
  int result; // eax
  int v1; // ebx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = AdtpInitializeAuditingCommon();
  if ( result >= 0 )
  {
    result = SepAdtOpenEtwReadyEvent((unsigned __int64)&Handle);
    if ( result >= 0 )
    {
      v1 = NtSetEvent(Handle, 0LL);
      NtClose(Handle);
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
