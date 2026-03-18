/*
 * XREFs of rimDoScheduledUserModeRimPnpRegistration @ 0x1C00D0660
 * Callers:
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0044B20 (RIMDiscoverDevicesOfInputType.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimDoScheduledUserModeRimPnpRegistration(unsigned int *Object, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v4; // rcx
  int v5; // edx
  int v6; // ebx
  int v7; // r8d

  v4 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      64,
      (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids);
  if ( Object[272] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
  if ( (Object[21] & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, a3);
  v6 = RIMDiscoverDevicesOfInputType(Object);
  if ( v6 < 0 )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v7,
        (_DWORD)gRimLog,
        4,
        1,
        65,
        (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids);
    }
  }
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v7,
      (_DWORD)gRimLog,
      4,
      1,
      66,
      (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids);
  }
  return (unsigned int)v6;
}
