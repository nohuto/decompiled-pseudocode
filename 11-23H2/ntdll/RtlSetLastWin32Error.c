/*
 * XREFs of RtlSetLastWin32Error @ 0x180053850
 * Callers:
 *     EtwpSetProviderTraits @ 0x18002FBC8 (EtwpSetProviderTraits.c)
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 *     TppSetTimer @ 0x1800309F8 (TppSetTimer.c)
 *     EtwEventRegister @ 0x180031A30 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x180032680 (EtwNotificationRegister.c)
 *     EvtIntReportEventWorker @ 0x1800531D0 (EvtIntReportEventWorker.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180053690 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwRegisterTraceGuidsW @ 0x18005DBB0 (EtwRegisterTraceGuidsW.c)
 *     EtwEventActivityIdControl @ 0x180061C10 (EtwEventActivityIdControl.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x180067AD0 (RtlQueryUnbiasedInterruptTime.c)
 *     EtwUnregisterTraceGuids @ 0x18007D790 (EtwUnregisterTraceGuids.c)
 *     EtwGetTraceLoggerHandle @ 0x180081D30 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180081D70 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180081DB0 (EtwGetTraceEnableFlags.c)
 *     EtwpTrackProviderBinary @ 0x18008510C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18008EAE0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180125090 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x180125180 (EtwCreateTraceInstanceId.c)
 *     TppRaiseInvalidParameter @ 0x180127248 (TppRaiseInvalidParameter.c)
 * Callees:
 *     EtwEventWrite @ 0x180030140 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

void __cdecl RtlSetLastWin32Error(LONG Win32Error)
{
  struct _TEB *v1; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF
  LONG v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = Win32Error;
  v1 = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && Win32Error == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( v1->LastErrorValue != Win32Error )
  {
    v1->LastErrorValue = Win32Error;
    if ( v3 )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( v3 != 997 )
        {
          UserData.Ptr = (unsigned __int64)&v3;
          *(_QWORD *)&UserData.Size = 4LL;
          EtwEventWrite(g_hUserDiagnosticProvider, &SetLastWin32ErrorEvent, 1u, &UserData);
        }
      }
    }
  }
}
