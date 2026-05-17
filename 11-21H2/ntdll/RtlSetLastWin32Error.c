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

__int64 __fastcall RtlSetLastWin32Error(unsigned int a1)
{
  __int64 result; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1;
  result = (__int64)NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && a1 == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( *(_DWORD *)(result + 104) != a1 )
  {
    *(_DWORD *)(result + 104) = a1;
    result = v3;
    if ( v3 )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( v3 != 997 )
        {
          v2[0] = &v3;
          v2[1] = 4LL;
          return EtwEventWrite(g_hUserDiagnosticProvider, (int)&SetLastWin32ErrorEvent, 1, (__int64)v2);
        }
      }
    }
  }
  return result;
}
