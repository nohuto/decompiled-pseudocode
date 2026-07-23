/*
 * XREFs of RtlSetLastWin32Error @ 0x1800067C0
 * Callers:
 *     EvtIntReportEventWorker @ 0x180005D70 (EvtIntReportEventWorker.c)
 *     EtwUnregisterTraceGuids @ 0x180006590 (EtwUnregisterTraceGuids.c)
 *     EtwNotificationUnregister @ 0x1800065F0 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800067A0 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwRegisterTraceGuidsW @ 0x180015410 (EtwRegisterTraceGuidsW.c)
 *     EtwpSetProviderTraits @ 0x180015628 (EtwpSetProviderTraits.c)
 *     EtwEventRegister @ 0x180015AA0 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
 *     TppSetTimer @ 0x18001E794 (TppSetTimer.c)
 *     EtwEventActivityIdControl @ 0x18005E5A0 (EtwEventActivityIdControl.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x18005F9F0 (RtlQueryUnbiasedInterruptTime.c)
 *     EtwGetTraceLoggerHandle @ 0x180087AB0 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180087AF0 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180087B30 (EtwGetTraceEnableFlags.c)
 *     EtwpTrackProviderBinary @ 0x18008894C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x180093420 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180121F48 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x180122030 (EtwCreateTraceInstanceId.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 * Callees:
 *     EtwEventWrite @ 0x1800061F0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
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
