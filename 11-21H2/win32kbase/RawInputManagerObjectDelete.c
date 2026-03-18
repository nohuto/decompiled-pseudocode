/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C004926C
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C004913C (RIMObjectManagerCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00438D8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0043DEC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     rimRemoveFromObTrackList @ 0x1C00442DC (rimRemoveFromObTrackList.c)
 *     RIMDeleteAllAsyncPnpWorkNotificationItems @ 0x1C00490B4 (RIMDeleteAllAsyncPnpWorkNotificationItems.c)
 *     rimFreeAllUserMem @ 0x1C00490E4 (rimFreeAllUserMem.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00B7910 (RIMFreeSpecificDevWorker.c)
 *     rimFreePointerRawDataListWorker @ 0x1C01A6F7C (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C01B49C4 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C01B559C (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1C01B5628 (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 ObjectType; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r8
  __int64 v5; // rcx
  char v6; // bl
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  void *v14; // rdx
  _QWORD *v15; // r14
  _QWORD *v16; // r15
  void *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  void *v24; // rdx
  void *v25; // rdx
  struct _KTHREAD **v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  _QWORD *v30; // rbx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  int v33; // eax
  void *v34; // rbx
  void *v35; // rdx
  _QWORD *v36; // rcx
  void **v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // edx
  void *v41; // rcx
  char v42; // [rsp+70h] [rbp+8h] BYREF
  char v43; // [rsp+78h] [rbp+10h] BYREF

  v1 = *a1;
  ObjectType = ObGetObjectType(*a1);
  v5 = ExRawInputManagerObjectType;
  if ( ObjectType != ExRawInputManagerObjectType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(ExRawInputManagerObjectType, v3, v4);
  v6 = 1;
  if ( *(_BYTE *)(v1 + 8) == 1 )
  {
    v7 = *(_DWORD *)(v1 + 4);
    if ( v7 == 2 )
    {
      rimRemoveFromObTrackList(v1);
      if ( !*(_BYTE *)(v1 + 9) )
      {
        v26 = *(struct _KTHREAD ***)(v1 + 424);
        if ( !v26 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v43, v26 + 13);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v42, v26 + 99);
        RIMFreeSpecificDevWorker(v26, v1 + 88, v27);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v42);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v43);
        ObfDereferenceObject(v26);
      }
    }
    else if ( v7 == 1 )
    {
      if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3, v4);
      v12 = *(unsigned int *)(v1 + 488);
      v13 = *(unsigned int *)(v1 + 464) + (v12 << 16);
      if ( v13 )
      {
        v28 = *(_DWORD *)(v1 + 488) ? **(_QWORD **)(v1 + 480) : *(_QWORD *)(v1 + 448) - 8LL;
        DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 40LL, v1, v13, v28, 0LL, 0LL, 0);
        if ( *(_DWORD *)(v1 + 464) )
        {
          v30 = *(_QWORD **)(v1 + 448);
          if ( v30 == (_QWORD *)(v1 + 448) )
            goto LABEL_54;
          do
          {
            v31 = (_QWORD *)*v30;
            v4 = v30 - 1;
            v29 = v30;
            v30 = v31;
            if ( (_QWORD *)v31[1] != v29 || (v32 = (_QWORD *)v29[1], (_QWORD *)*v32 != v29) )
LABEL_60:
              __fastfail(3u);
            *v32 = v31;
            v31[1] = v32;
            if ( v4 )
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                v4);
            v33 = *(_DWORD *)(v1 + 464);
            if ( !v33 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v29, v4);
              v33 = *(_DWORD *)(v1 + 464);
            }
            v12 = (unsigned int)(v33 - 1);
            *(_DWORD *)(v1 + 464) = v12;
          }
          while ( v30 != (_QWORD *)(v1 + 448) );
          if ( v33 != 1 )
LABEL_54:
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v29, v4);
        }
      }
      v14 = *(void **)(v1 + 480);
      if ( v14 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v14);
        *(_QWORD *)(v1 + 480) = 0LL;
      }
      v15 = (_QWORD *)(v1 + 760);
      *(_QWORD *)(v1 + 488) = 0LL;
      v16 = *(_QWORD **)(v1 + 760);
      while ( v16 != v15 )
      {
        v34 = v16;
        v16 = (_QWORD *)*v16;
        v35 = (void *)*((_QWORD *)v34 + 9);
        if ( v35 )
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v35);
        rimFreePointerRawDataListWorker(*((void **)v34 + 7));
        v36 = *(_QWORD **)v34;
        if ( *(void **)(*(_QWORD *)v34 + 8LL) != v34 )
          goto LABEL_60;
        v37 = (void **)*((_QWORD *)v34 + 1);
        if ( *v37 != v34 )
          goto LABEL_60;
        *v37 = v36;
        v36[1] = v37;
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v34);
      }
      if ( *(_QWORD *)(v1 + 424) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v14, v4);
      if ( (_QWORD *)*v15 != v15 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v14, v4);
      if ( *(_QWORD *)(v1 + 776) != v1 + 776 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v14, v4);
      if ( *(_QWORD *)(v1 + 416) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v14, v4);
      v17 = *(void **)(v1 + 368);
      if ( v17 != (void *)-1LL )
      {
        ZwClose(v17);
        *(_QWORD *)(v1 + 368) = -1LL;
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v42,
          (struct _KTHREAD **)(v1 + 352));
        RIMDeleteAllAsyncPnpWorkNotificationItems(v1);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v42);
      }
      RIMLockExclusive(v1 + 792);
      rimFreeAllUserMem(v1, v18, v19, v20);
      *(_QWORD *)(v1 + 800) = 0LL;
      ExReleasePushLockExclusiveEx(v1 + 792, 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_QWORD *)(v1 + 1096) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
      if ( *(_DWORD *)(v1 + 1104) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
      v24 = *(void **)(v1 + 1096);
      if ( v24 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v24);
      *(_QWORD *)(v1 + 1096) = 0LL;
      if ( !*(_QWORD *)(v1 + 1128) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v24, v23);
      if ( *(_DWORD *)(v1 + 1136) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v24, v23);
      v25 = *(void **)(v1 + 1128);
      if ( v25 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v25);
      *(_QWORD *)(v1 + 1128) = 0LL;
    }
    else
    {
      if ( v7 != 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3, v4);
      rimRemoveFromObTrackList(v1);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v40 = 10;
        LOBYTE(v40) = v6;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v40,
          v39,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          23,
          10,
          (__int64)&WPP_d336c9d274b034b3da432c72e08aeff3_Traceguids,
          v1);
      }
      v41 = *(void **)(v1 + 80);
      if ( v41 != (void *)-1LL )
      {
        ZwClose(v41);
        *(_QWORD *)(v1 + 80) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1, v38, v39);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
