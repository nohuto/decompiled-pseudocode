/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C0194C38
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00B7910 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     rimDestroyDeadzone @ 0x1C018F0F4 (rimDestroyDeadzone.c)
 *     RIMAssignPreparsedData @ 0x1C018F944 (RIMAssignPreparsedData.c)
 *     RIMFreePointerDevice @ 0x1C0191E14 (RIMFreePointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  char *v9; // rdx

  v3 = *(_QWORD *)(a2 + 472);
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = RIMAssignPreparsedData(*(_QWORD *)(a2 + 456), a2, v3);
  if ( v6 < 0 )
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        (_DWORD)gRimLog,
        3,
        1,
        38,
        (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids,
        v6);
    }
  }
  if ( *(_DWORD *)(v3 + 24) == 5 )
  {
    v9 = *(char **)(a1 + 1080);
    if ( v9 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v9);
      *(_QWORD *)(a1 + 1080) = 0LL;
    }
    rimDestroyDeadzone();
  }
  RIMFreePointerDevice(a1, v3);
  *(_QWORD *)(a2 + 472) = 0LL;
}
