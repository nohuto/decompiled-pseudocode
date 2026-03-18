/*
 * XREFs of ?GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z @ 0x1C0067D64
 * Callers:
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1C0067928 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00044F0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     GreGetMonitorHash @ 0x1C0067ED0 (GreGetMonitorHash.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMonitorTopology::GetMonitorId(struct tagMONITOR *a1, struct CMonitorTopology::MonitorId *a2)
{
  struct CMonitorTopology::MonitorId *v2; // r14
  __int64 v3; // r13
  char v4; // r12
  char v5; // bl
  char v6; // r8
  void *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  int MonitorHash; // r15d
  int v11; // edx
  __int64 v12; // rcx
  PVOID v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // edx
  __int64 Pool2; // rdi
  __int64 v18; // r9
  PVOID BackTrace[20]; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v20; // [rsp+148h] [rbp+40h] BYREF

  *(_OWORD *)a2 = 0LL;
  v2 = a2;
  *((_QWORD *)a2 + 2) = 0LL;
  v3 = *((_QWORD *)a1 + 10);
  v4 = 0;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v6 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v6 = 0;
  }
  v7 = &WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids;
  if ( (_BYTE)a2 || v6 )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v6,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      27,
      10,
      (__int64)&WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids,
      v3);
  v20 = 1;
  MonitorHash = GreGetMonitorHash(v3, &v20, v2, v7);
  if ( MonitorHash == -1073741789 )
  {
    v12 = v20;
    if ( v20 <= 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v8, v9);
      v12 = v20;
    }
    v13 = gpLeakTrackingAllocator;
    v14 = 20 * v12;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x726D7355) == 0x726D7355 )
    {
      v15 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v15) != 1919775573 )
        {
          if ( ++v15 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_30;
        }
        if ( v14 < 0x1000 || (v14 & 0xFFF) != 0 )
        {
          v4 = 1;
          v14 += 16LL;
        }
        Pool2 = ExAllocatePool2(260LL, v14);
        if ( !Pool2 )
          goto LABEL_55;
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v4 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v13,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
LABEL_31:
            if ( Pool2 )
              goto LABEL_32;
LABEL_55:
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) == 0
              || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(v16) = 0;
            }
            if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_D(
                WPP_GLOBAL_Control->AttachedDevice,
                v16,
                v9,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                2,
                27,
                12,
                (__int64)&WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids,
                v20);
            }
            goto LABEL_13;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v13,
                                     Pool2,
                                     BackTrace) )
        {
LABEL_32:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) == 0
            || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v16) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v9) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v9) = 0;
          }
          if ( (_BYTE)v16 || (_BYTE)v9 )
            WPP_RECORDER_AND_TRACE_SF_qd(
              WPP_GLOBAL_Control->AttachedDevice,
              v16,
              v9,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              5,
              27,
              11,
              (__int64)&WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids,
              v3,
              v20);
          MonitorHash = GreGetMonitorHash(v3, &v20, Pool2, v18);
          if ( MonitorHash >= 0 )
          {
            *(_OWORD *)v2 = *(_OWORD *)Pool2;
            *((_DWORD *)v2 + 4) = *(_DWORD *)(Pool2 + 16);
            *((_BYTE *)v2 + 20) = 1;
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            (void *)Pool2);
          goto LABEL_10;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_55;
      }
    }
LABEL_30:
    Pool2 = ExAllocatePool2(260LL, v14);
    goto LABEL_31;
  }
LABEL_10:
  if ( MonitorHash >= 0 )
  {
    *((_BYTE *)v2 + 21) = 1;
    return;
  }
LABEL_13:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 13;
    LOBYTE(v11) = v5;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      27,
      13,
      (__int64)&WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids,
      MonitorHash,
      v20);
  }
}
