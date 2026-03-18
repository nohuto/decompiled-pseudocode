/*
 * XREFs of rimScheduleUserModeRimPnpRegistration @ 0x1C00C0DF8
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00B5A44 (UserActivateMITInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void rimScheduleUserModeRimPnpRegistration()
{
  bool v0; // dl
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _LIST_ENTRY *i; // rbx
  bool v5; // dl

  v0 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      62,
      (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !BYTE1(i[4].Flink) && !LOBYTE(i[4].Flink) && LOBYTE(i[23].Blink) )
    {
      if ( LODWORD(i[67].Flink) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
      if ( (HIDWORD(i[4].Flink) & 0x20) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
      ZwSetEvent(i[20].Blink, 0LL);
    }
  }
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      63,
      (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids);
}
