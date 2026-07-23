/*
 * XREFs of RtlSetLastWin32Error @ 0x1800539B0
 * Callers:
 *     EtwpSetProviderTraits @ 0x18002FD98 (EtwpSetProviderTraits.c)
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
 *     TppSetTimer @ 0x180030BC8 (TppSetTimer.c)
 *     EtwEventRegister @ 0x180031B90 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x1800327E0 (EtwNotificationRegister.c)
 *     EvtIntReportEventWorker @ 0x180053330 (EvtIntReportEventWorker.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800537F0 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwEventActivityIdControl @ 0x18005C440 (EtwEventActivityIdControl.c)
 *     EtwRegisterTraceGuidsW @ 0x180060A40 (EtwRegisterTraceGuidsW.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x180067AF0 (RtlQueryUnbiasedInterruptTime.c)
 *     EtwUnregisterTraceGuids @ 0x18007D120 (EtwUnregisterTraceGuids.c)
 *     EtwGetTraceLoggerHandle @ 0x1800816C0 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180081700 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180081740 (EtwGetTraceEnableFlags.c)
 *     EtwpTrackProviderBinary @ 0x18008490C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18008E2E0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180123C10 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x180123D00 (EtwCreateTraceInstanceId.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 * Callees:
 *     EtwEventWrite @ 0x180030310 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
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
