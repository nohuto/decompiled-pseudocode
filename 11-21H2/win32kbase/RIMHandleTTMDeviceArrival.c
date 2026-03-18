/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1C01B7F9C
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00A20A0 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C004DFA0 (RawInputManagerDeviceObjectReference.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqqdS @ 0x1C01B8330 (WPP_RECORDER_AND_TRACE_SF_dqqdS.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdSD @ 0x1C01B851C (WPP_RECORDER_AND_TRACE_SF_qdSD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // edx
  unsigned int v6; // edi
  int v7; // r8d
  __int64 v8; // rcx
  int v9; // edx
  int v10; // r8d

  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_BYTE *)(a1 + 48) == 3 || (*(_DWORD *)(a1 + 200) & 0x40) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v4 = RawInputManagerDeviceObjectReference(*(void **)(a1 + 32));
    if ( v4 >= 0 )
    {
      *(_DWORD *)(a1 + 1312) = 0;
      v6 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dqqdS(WPP_GLOBAL_Control->AttachedDevice, v5, v7, (_DWORD)WPP_GLOBAL_Control);
      }
      v4 = TtmNotifyDeviceArrival(2LL, a1, &gTTMDevCallbacks, v6);
      if ( v4 < 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2, a3);
        LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdSD(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v10,
            *(unsigned __int8 *)(a1 + 48),
            a1 + 208);
        }
        if ( v4 != -1073741768 )
          *(_DWORD *)(a1 + 1312) = 1;
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      12,
      (__int64)&WPP_e19c1f9dc6ba3a4e002eb4dd1e679f56_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
