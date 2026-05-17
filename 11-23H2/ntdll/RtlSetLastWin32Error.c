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
 *     EtwpUseDescriptorType @ 0x1801250C0 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x1801251B0 (EtwCreateTraceInstanceId.c)
 *     TppRaiseInvalidParameter @ 0x180127278 (TppRaiseInvalidParameter.c)
 * Callees:
 *     EtwEventWrite @ 0x180030140 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
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
