/*
 * XREFs of ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1C0067928
 * Callers:
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C0067830 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqddddddddd @ 0x1C0067C00 (WPP_RECORDER_AND_TRACE_SF_dqddddddddd.c)
 *     ?GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z @ 0x1C0067D64 (-GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z.c)
 *     HdevFromMonitor @ 0x1C0067F70 (HdevFromMonitor.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CMonitorTopology *__fastcall CMonitorTopology::CreateTopologySnapshot(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  PVOID v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 Pool2; // rbx
  int v7; // r8d
  int v8; // ecx
  unsigned int v9; // kr00_4
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r14
  int v13; // r13d
  __int64 v14; // rdx
  PDEVICE_OBJECT v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // edx
  int v20; // r9d
  __int64 v22; // rax
  char v23; // bp
  int v24; // edx
  int v25; // [rsp+20h] [rbp-138h]
  int v26; // [rsp+28h] [rbp-130h]
  int v27; // [rsp+30h] [rbp-128h]
  int v28; // [rsp+38h] [rbp-120h]
  char v29; // [rsp+40h] [rbp-118h]
  PVOID BackTrace[20]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = 1;
  if ( (unsigned int)(**(_DWORD **)gpDispInfo - 1) > 0xFFFD )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(*(_QWORD *)gpDispInfo, a2, a3);
  v4 = gpLeakTrackingAllocator;
  v5 = (unsigned int)(72 * **(_DWORD **)gpDispInfo + 16);
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x726D7355) != 0x726D7355
    || (v22 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_4:
    Pool2 = ExAllocatePool2(260LL, v5);
    goto LABEL_5;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v22) != 1919775573 )
  {
    if ( ++v22 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_4;
  }
  v23 = 0;
  if ( v5 < 0x1000 || ((72 * **(_WORD **)gpDispInfo + 16) & 0xFFF) != 0 )
  {
    v23 = 1;
    v5 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v5);
  if ( !Pool2 )
    goto LABEL_48;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v23 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v4,
                            Pool2,
                            BackTrace) )
    {
LABEL_6:
      v8 = dword_1C028F2A0;
      v9 = dword_1C028F2A0;
      *(_DWORD *)Pool2 = 1;
      v10 = v9 / 0x64;
      v11 = v8 + 100 * (gSessionId - v9 / 0x64);
      *(_DWORD *)(Pool2 + 4) = v11;
      dword_1C028F2A0 = v8 + 1;
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = v11;
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          27,
          16,
          (__int64)&WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids,
          v29);
      }
      v12 = Pool2 + 16;
      v13 = 0;
      v14 = **(unsigned int **)gpDispInfo;
      *(_DWORD *)(Pool2 + 8) = v14;
      v15 = (PDEVICE_OBJECT)*(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)gpDispInfo + 13) + 40LL) + 62LL);
      *(_DWORD *)(Pool2 + 12) = (_DWORD)v15;
      v16 = *((_QWORD *)gpDispInfo + 13);
      if ( v16 )
      {
        do
        {
          v15 = *(PDEVICE_OBJECT *)(v16 + 40);
          if ( ((__int64)v15->AttachedDevice & 1) != 0 )
          {
            *(_OWORD *)(v12 + 8) = *(_OWORD *)((char *)&v15->AttachedDevice + 4);
            *(_OWORD *)(v12 + 24) = *(_OWORD *)(*(_QWORD *)(v16 + 40) + 44LL);
            *(_WORD *)(v12 + 40) = *(_WORD *)(*(_QWORD *)(v16 + 40) + 60LL);
            v17 = *(_QWORD *)(v16 + 40);
            v18 = *(unsigned int *)(Pool2 + 12);
            if ( (_DWORD)v18 != *(unsigned __int16 *)(v17 + 62) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v18, v11);
              v17 = *(_QWORD *)(v16 + 40);
              v18 = *(unsigned int *)(Pool2 + 12);
            }
            if ( (unsigned int)v18 > *(unsigned __int16 *)(v17 + 60) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v18, v11);
            if ( (unsigned int)HdevFromMonitor(v16) != -1 )
              *(_QWORD *)v12 = *(_QWORD *)v16;
            CMonitorTopology::GetMonitorId((struct tagMONITOR *)v16, (struct CMonitorTopology::MonitorId *)(v12 + 44));
            v15 = WPP_GLOBAL_Control;
            LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_dqddddddddd(
                WPP_GLOBAL_Control->AttachedDevice,
                v19,
                v11,
                v20,
                v25,
                v26,
                v27,
                v28,
                v13,
                *(_QWORD *)v12,
                *(_DWORD *)(v12 + 8),
                *(_DWORD *)(v12 + 12),
                *(_DWORD *)(v12 + 16),
                *(_DWORD *)(v12 + 20),
                *(_DWORD *)(v12 + 24),
                *(_DWORD *)(v12 + 28),
                *(_DWORD *)(v12 + 32),
                *(_DWORD *)(v12 + 36),
                *(_WORD *)(v12 + 40));
            ++v13;
          }
          v16 = *(_QWORD *)(v16 + 56);
          v12 += 72LL;
        }
        while ( v16 );
        v14 = *(unsigned int *)(Pool2 + 8);
      }
      if ( (_DWORD)v14 != v13 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v11);
        v14 = *(unsigned int *)(Pool2 + 8);
      }
      if ( !(_DWORD)v14 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v11);
      return (struct CMonitorTopology *)Pool2;
    }
    goto LABEL_47;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v4,
                           Pool2,
                           BackTrace) )
  {
LABEL_47:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_48;
  }
  Pool2 += 16LL;
LABEL_5:
  if ( Pool2 )
    goto LABEL_6;
LABEL_48:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v3 = 0;
  }
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = 15;
    LOBYTE(v24) = v3;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v24,
      v7,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      27,
      15,
      (__int64)&WPP_7ce4f07ab0303d88d561900b9efa555c_Traceguids,
      **(_DWORD **)gpDispInfo);
  }
  return 0LL;
}
