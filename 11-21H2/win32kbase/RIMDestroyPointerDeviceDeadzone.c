/*
 * XREFs of RIMDestroyPointerDeviceDeadzone @ 0x1C0188C50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01A293C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDestroyPointerDeviceDeadzone(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v4; // edi
  RIMDeadzone *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8

  v2 = a2;
  v4 = 0;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      42,
      (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    v4 = -1073741811;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gRimLog,
        3,
        1,
        43,
        (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids);
  }
  else if ( v2 < 5 && (v5 = *(RIMDeadzone **)(a1 + 8LL * v2 + 408)) != 0LL )
  {
    _mm_lfence();
    RIMDeadzone::Release(v5);
    a2 = *(_QWORD *)(a1 + 8LL * v2 + 408);
    if ( *(_DWORD *)(a2 + 4) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, v7);
      a2 = *(_QWORD *)(a1 + 8LL * v2 + 408);
    }
    if ( a2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)a2);
    *(_QWORD *)(a1 + 8LL * v2 + 408) = 0LL;
    --*(_DWORD *)(a1 + 448);
  }
  else
  {
    v4 = -1073741811;
  }
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      44,
      (__int64)&WPP_3a0f0d76a8e8385ab6cfb42384993437_Traceguids,
      v4);
  return v4;
}
