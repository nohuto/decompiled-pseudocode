/*
 * XREFs of rimObsPopInputMessage @ 0x1C01B4C8C
 * Callers:
 *     rimObsObserveNextInput @ 0x1C01B4A38 (rimObsObserveNextInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C01B3A78 (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x1C01B3E58 (rimObsCopyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsPopInputMessage(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  void **v5; // r12
  unsigned int v6; // r13d
  PDEVICE_OBJECT v8; // rcx
  char v9; // si
  char **v10; // rdi
  int v11; // r9d
  unsigned int v12; // edi
  char *v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  char **v16; // rcx
  unsigned int v17; // eax
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h]
  __int128 v21; // [rsp+70h] [rbp-10h]

  v5 = (void **)a3;
  v6 = a2;
  v8 = WPP_GLOBAL_Control;
  v9 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      15,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
      a1);
  v10 = (char **)(a1 + 144);
  if ( *(_DWORD *)(a1 + 160) == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2, a3);
  v11 = *(_DWORD *)(a1 + 164);
  if ( v11 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        23,
        18,
        (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
        v11);
      v11 = *(_DWORD *)(a1 + 164);
    }
    HIDWORD(v19) = v11;
    *(_QWORD *)&v19 = 1LL;
    DWORD2(v19) = 2;
    v20 = 0LL;
    v21 = 0LL;
    v17 = rimObsCopyMessage((__int64)&v19, v6, v5, a4);
    *(_DWORD *)(a1 + 164) = 0;
    v12 = v17;
  }
  else if ( *(_DWORD *)(a1 + 160) )
  {
    v13 = *v10;
    if ( *v10 == (char *)v10 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, a2, a3);
      v13 = *v10;
    }
    v14 = rimObsCopyMessage((__int64)(v13 + 16), v6, v5, a4);
    v12 = v14;
    if ( v14 == -1073741789 )
    {
      DWORD1(v19) = 0;
      DWORD2(v19) = 0;
      LODWORD(v19) = 1;
      v20 = 0LL;
      v21 = 0LL;
      HIDWORD(v19) = rimObsCalculateObserverMessageSize((unsigned int *)v13 + 4, a2, a3);
      v12 = rimObsCopyMessage((__int64)&v19, v6, v5, a4);
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          23,
          16,
          (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
          a4,
          HIDWORD(v19),
          v19,
          v20,
          v21);
      }
    }
    else if ( v14 >= 0 )
    {
      LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          23,
          17,
          (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
      }
      v15 = *(_QWORD *)v13;
      if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 || (v16 = (char **)*((_QWORD *)v13 + 1), *v16 != v13) )
        __fastfail(3u);
      *v16 = (char *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v13);
      --*(_DWORD *)(a1 + 160);
    }
  }
  else
  {
    v12 = -2147483622;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = v9;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      19,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
      v12);
  }
  return v12;
}
