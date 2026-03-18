/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1C01B3FC8
 * Callers:
 *     rimObsDeliverToExclusiveObservers @ 0x1C000415C (rimObsDeliverToExclusiveObservers.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1C00077DC (rimObsDeliverToNonExclusiveObservers.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0167FBC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C01B3AAC (rimObsCheckForExistingDeviceHandle.c)
 *     rimObsCopyMessage @ 0x1C01B3E58 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1C01B5084 (rimObsPushInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  char v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rdx
  PDEVICE_OBJECT v8; // rcx
  HANDLE v9; // r8
  int v10; // ebx
  PVOID v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  __int64 Pool2; // rbx
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  PDEVICE_OBJECT v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rsi
  int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  void **v26; // rdi
  int v27; // edx
  int v28; // r8d
  unsigned int v29; // r9d
  __int64 v30; // rdx
  __int64 v31; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h]
  __int128 v41; // [rsp+90h] [rbp-70h]
  __int128 v42; // [rsp+A0h] [rbp-60h]
  PVOID BackTrace[26]; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+190h] [rbp+90h] BYREF
  __int64 v45; // [rsp+198h] [rbp+98h] BYREF
  __int64 v46; // [rsp+1A0h] [rbp+A0h] BYREF

  v2 = a2;
  v4 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      20,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
      a1,
      v2);
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
  {
    v45 = v2;
    v46 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C028EE70,
      byte_1C025FD41,
      v5,
      v6,
      (__int64)&v46,
      (__int64)&v45);
  }
  RIMLockExclusive(v2 + 176);
  Handle = rimObsCheckForExistingDeviceHandle(v2, *(PVOID *)(a1 + 32));
  v9 = Handle;
  if ( Handle != (HANDLE)-1LL )
  {
LABEL_62:
    HIDWORD(v32) = 0;
    HIDWORD(v34) = 0;
    HIDWORD(v36) = 0;
    if ( *(_DWORD *)(v2 + 104) < 0x30u )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
      v9 = Handle;
    }
    v10 = *(_DWORD *)(a1 + 256);
    if ( v10 < 0 )
    {
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v7,
          (_DWORD)v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          23,
          26,
          (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
          v10);
      }
      goto LABEL_47;
    }
    if ( *(_QWORD *)(a1 + 264) > 0xFFFFFFCFuLL )
    {
      v10 = -1073741675;
      v19 = WPP_GLOBAL_Control;
      LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 25;
        goto LABEL_82;
      }
      goto LABEL_47;
    }
    v21 = *(_QWORD *)(a1 + 264);
    LODWORD(v32) = 0;
    v22 = v21 + 48;
    v37 = 0LL;
    v23 = *(_QWORD *)(a1 + 264);
    LODWORD(v24) = *(unsigned __int8 *)(a1 + 48);
    LODWORD(v34) = v10;
    v35 = v23;
    LODWORD(v36) = v24;
    v33 = v9;
    if ( (_DWORD)v24 )
    {
      v24 = (unsigned int)(v24 - 1);
      if ( (_DWORD)v24 )
      {
        if ( (_DWORD)v24 == 1 )
          v37 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
        else
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v24, v9);
LABEL_91:
        if ( *(_DWORD *)(v2 + 88) == 1 )
        {
          LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v24,
              (_DWORD)v9,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              23,
              27,
              (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
          }
          v26 = *(void ***)(v2 + 96);
          v10 = rimObsCopyMessage((__int64)&v32, *(unsigned int *)(v2 + 72), v26, *(_DWORD *)(v2 + 104));
          if ( v10 == -1073741789 )
          {
            LOBYTE(v27) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
            if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v31) = v22;
              LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_dd(
                WPP_GLOBAL_Control->AttachedDevice,
                v27,
                v28,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                3,
                23,
                28,
                (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
                *(_DWORD *)(v2 + 104),
                v31,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37);
            }
            v29 = *(_DWORD *)(v2 + 104);
            v30 = *(unsigned int *)(v2 + 72);
            v39 = 0;
            v38 = 1LL;
            v40 = v22;
            v41 = 0LL;
            v42 = 0LL;
            rimObsCopyMessage((__int64)&v38, v30, v26, v29);
            v10 = rimObsPushInputMessage(v2, &v32);
          }
          else
          {
            LOBYTE(v27) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v27,
                v28,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                23,
                29,
                (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
            }
          }
          LOBYTE(v27) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v27,
              v28,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              23,
              30,
              (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
          }
          *(_DWORD *)(v2 + 88) = 0;
          ZwSetEvent(*(HANDLE *)(v2 + 80), 0LL);
        }
        else
        {
          LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v24,
              (_DWORD)v9,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              23,
              31,
              (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
          }
          v10 = rimObsPushInputMessage(v2, &v32);
          if ( v10 == -1073741756 )
            v10 = 0;
        }
        goto LABEL_47;
      }
      v25 = a1 + 496;
    }
    else
    {
      v25 = a1 + 468;
    }
    v37 = v25;
    goto LABEL_91;
  }
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v7,
      (_DWORD)v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      21,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
  }
  v10 = ObOpenObjectByPointer(*(PVOID *)(a1 + 32), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &Handle);
  if ( v10 >= 0 )
  {
    v11 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65684F52) == 0x65684F52
      && (v12 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1701334866 )
      {
        if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_26;
      }
      Pool2 = ExAllocatePool2(260LL, 40LL);
      if ( !Pool2 )
        goto LABEL_28;
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v11,
               Pool2,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
LABEL_35:
          *(_QWORD *)(Pool2 + 16) = Handle;
          v8 = WPP_GLOBAL_Control;
          LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v13,
              v15,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              23,
              23,
              (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
              (char)Handle);
          }
          v7 = *(__int64 **)(v2 + 136);
          if ( *v7 != v2 + 128 )
            __fastfail(3u);
          *(_QWORD *)Pool2 = v2 + 128;
          *(_QWORD *)(Pool2 + 8) = v7;
          *v7 = Pool2;
          v9 = Handle;
          *(_QWORD *)(v2 + 136) = Pool2;
          goto LABEL_62;
        }
        goto LABEL_41;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v11,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_41:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_28;
      }
      Pool2 += 16LL;
    }
    else
    {
LABEL_26:
      Pool2 = ExAllocatePool2(260LL, 24LL);
    }
    if ( Pool2 )
      goto LABEL_35;
LABEL_28:
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        23,
        22,
        (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
    }
    v10 = -1073741670;
    ObCloseHandle(Handle, *(_BYTE *)(v2 + 72));
    goto LABEL_47;
  }
  v19 = WPP_GLOBAL_Control;
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = 24;
LABEL_82:
    WPP_RECORDER_AND_TRACE_SF_(
      v19->AttachedDevice,
      (_DWORD)v7,
      (_DWORD)v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      23,
      v20,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
  }
LABEL_47:
  *(_QWORD *)(v2 + 184) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 176, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = v4;
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      v17,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      32,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
