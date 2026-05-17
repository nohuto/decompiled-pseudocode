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
