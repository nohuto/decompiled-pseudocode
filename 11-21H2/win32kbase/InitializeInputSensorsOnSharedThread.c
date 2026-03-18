/*
 * XREFs of InitializeInputSensorsOnSharedThread @ 0x1C01E7CD4
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x1C01EB9F0 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C0054C14 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C01E7350 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitializeInputSensorsOnSharedThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  int *v4; // rdi
  int v5; // esi
  char v6; // bl
  int v7; // eax
  __int64 v8; // rbp
  CMouseSensor **i; // rdi
  int v10; // r8d
  int v11; // r9d
  int v12; // edx

  v3 = 0LL;
  v4 = (int *)&unk_1C0288010;
  v5 = -1073741823;
  v6 = 1;
  while ( 1 )
  {
    v7 = *v4;
    if ( *v4 != 1 )
    {
      if ( v7 == 2 )
        break;
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      v7 = *v4;
    }
    if ( v7 == 2 )
      break;
LABEL_7:
    v3 = (unsigned int)(v3 + 1);
    v4 += 12;
    if ( (unsigned int)v3 >= 3 )
      goto LABEL_17;
  }
  v5 = anonymous_namespace_::InitializeInputSensorPass1Worker(v3, gpIOCPDispatcher);
  if ( v5 >= 0 )
    goto LABEL_7;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_sd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      14,
      2,
      3,
      14,
      (__int64)&WPP_437c9df7cf1c3a305e8fa8e06029d591_Traceguids,
      (__int64)s_rgSensorMap[6 * v3 + 5],
      v5);
  }
LABEL_17:
  v8 = 0LL;
  for ( i = &qword_1C0288018; ; i += 6 )
  {
    if ( *((_DWORD *)i - 2) == 2 )
    {
      v5 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)*i + 16LL))(*i);
      if ( v5 < 0 )
        break;
    }
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= 3 )
      return (unsigned int)v5;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 15;
    LOBYTE(v12) = v6;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_sd(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v10,
      v11,
      2,
      3,
      15,
      (__int64)&WPP_437c9df7cf1c3a305e8fa8e06029d591_Traceguids,
      (__int64)s_rgSensorMap[6 * v8 + 5],
      v5);
  }
  return (unsigned int)v5;
}
