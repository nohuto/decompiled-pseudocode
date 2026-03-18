/*
 * XREFs of rimQueueCompleteFrame @ 0x1C01A9AEC
 * Callers:
 *     rimProcessCompleteFrame @ 0x1C01A9900 (rimProcessCompleteFrame.c)
 * Callees:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C004DFA0 (RawInputManagerDeviceObjectReference.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C01A8DE0 (-QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01A8EC4 (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x1C01A9144 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimQueueCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  _QWORD *v13; // rdx
  _QWORD *v14; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)((isChildPartition() ? 0x48 : 0) + a3 + 56) = PerformanceCounter;
  if ( (int)RawInputManagerDeviceObjectReference(*(void **)(a2 + 32)) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    if ( a3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)a3);
  }
  else
  {
    InputTraceLogging::RIM::QueueFrame((const struct RIMDEV *)a2, (const struct RIMCOMPLETEFRAME *)a3);
    InputTraceLogging::TelemetryDebug::RIM::QueueFrame((const struct TELEMETRY_POINTER_FRAME_TIMES *)(a3 + 48));
    v12 = *(_QWORD *)(a2 + 192) + 1LL;
    *(_QWORD *)(a2 + 192) = v12;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (LOBYTE(v10) = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qi(WPP_GLOBAL_Control->AttachedDevice, v10, v11, v12);
    }
    v13 = *(_QWORD **)(a1 + 784);
    v14 = (_QWORD *)(a3 + 8);
    if ( *v13 != a1 + 776 )
      __fastfail(3u);
    *v14 = a1 + 776;
    *(_QWORD *)(a3 + 16) = v13;
    *v13 = v14;
    *(_QWORD *)(a1 + 784) = v14;
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a2 + 32);
  }
}
