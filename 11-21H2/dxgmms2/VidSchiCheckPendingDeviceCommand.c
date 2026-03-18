/*
 * XREFs of VidSchiCheckPendingDeviceCommand @ 0x1C00097D0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007C30 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B960 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000FA04 (VidSchiProcessDpcSystemRequest.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C000FE70 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00116E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C0019138 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EAF0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1C001F44E (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0040338 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C00403E8 (-VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z.c)
 * Callees:
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0001950 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0001CE8 (VidSchiCheckConditionDeviceCommand.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0017E80 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C002D814 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C003679C (McTemplateK0pp_EtwWriteTransfer.c)
 */

void __fastcall VidSchiCheckPendingDeviceCommand(_QWORD *a1)
{
  __int64 v1; // rbx
  VIDMM_GLOBAL *v3; // rbp
  __int64 v4; // rcx
  _QWORD **v5; // rbx
  _QWORD *v6; // r9
  char *v7; // rsi
  char *v8; // r14
  __int64 v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // edx
  __int64 v12; // r10
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r9
  char *v16; // r15
  __int64 v17; // rax
  char *v18; // rdx
  char *v19; // r13
  char **v20; // rcx
  __int64 *v21; // r15
  _QWORD *v22; // rax
  void **v23; // rcx
  bool v24; // zf
  _QWORD *v25; // r9
  char *v26; // rcx
  char *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 *v30; // r13
  __int64 **v31; // rcx
  struct VIDMM_ALLOC *v32; // r9
  _QWORD *v33; // rsi
  _QWORD *v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // r15
  __int64 v38; // r10
  unsigned int v39; // r11d
  _QWORD *v40; // r10
  _QWORD *v41; // rcx
  __int64 v42; // rax
  __int64 **v43; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  char *v45; // [rsp+80h] [rbp+8h]

  v1 = a1[4];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 656LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1760), &LockHandle);
  v5 = (_QWORD **)(v1 + 1792);
  v6 = *v5;
  if ( *v5 != v5 )
  {
    do
    {
      v33 = (_QWORD *)*v6;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v4, (__int64)(v6 - 25)) )
      {
        v35 = *v34;
        if ( *(_QWORD **)(*v34 + 8LL) != v34 )
          goto LABEL_34;
        v36 = (_QWORD *)v34[1];
        if ( (_QWORD *)*v36 != v34 )
          goto LABEL_34;
        *v36 = v35;
        *(_QWORD *)(v35 + 8) = v36;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v34 - 24), (struct VIDMM_ALLOC *)(v34 - 25));
      }
      v6 = v33;
    }
    while ( v33 != v5 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v7 = (char *)a1[201];
  while ( v7 != (char *)(a1 + 201) )
  {
    v8 = v7;
    v7 = *(char **)v7;
    v9 = *((_QWORD *)v8 + 2);
    if ( v9 > a1[200] )
    {
      v10 = *((_DWORD *)v8 + 16);
      v11 = 0;
      if ( v10 )
      {
        v12 = *((_QWORD *)v8 + 3);
        do
        {
          v13 = *(_QWORD *)(v12 + 16LL * v11);
          if ( v13 )
          {
            if ( *(_QWORD *)(v13 + 160) < *(_QWORD *)(v12 + 16LL * v11 + 8) )
              return;
          }
        }
        while ( ++v11 < v10 );
      }
      v14 = *((_DWORD *)v8 + 32);
      v15 = 0LL;
      if ( v14 )
      {
        v37 = *((_QWORD *)v8 + 9);
        while ( 1 )
        {
          v38 = *(_QWORD *)(v37 + 24 * v15);
          if ( v38 )
            break;
LABEL_46:
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= v14 )
            goto LABEL_11;
        }
        v39 = 0;
        v40 = (_QWORD *)(v38 + 64);
        v41 = (_QWORD *)(v37 + 8 * (3 * v15 + 1));
        while ( *v40 >= *v41 )
        {
          ++v39;
          v40 += 3;
          ++v41;
          if ( v39 >= 2 )
            goto LABEL_46;
        }
        return;
      }
LABEL_11:
      a1[200] = v9;
    }
    v16 = (char *)*((_QWORD *)v8 + 19);
    if ( v16 != v8 + 152 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)v16;
        v18 = v16 - 216;
        v19 = v16;
        v45 = v16 - 216;
        v16 = (char *)v17;
        if ( *(char **)(v17 + 8) != v19 )
          break;
        v20 = (char **)*((_QWORD *)v19 + 1);
        if ( *v20 != v19 )
          break;
        *v20 = (char *)v17;
        *(_QWORD *)(v17 + 8) = v20;
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v18);
        *(_QWORD *)v19 = 0LL;
        *((_QWORD *)v45 + 28) = 0LL;
        if ( v16 == v8 + 152 )
          goto LABEL_16;
      }
LABEL_34:
      __fastfail(3u);
    }
LABEL_16:
    memset(&LockHandle, 0, sizeof(LockHandle));
    v21 = (__int64 *)*((_QWORD *)v8 + 17);
    while ( v21 != (__int64 *)(v8 + 136) )
    {
      v28 = *v21;
      v29 = (__int64)(v21 - 25);
      v30 = v21;
      v21 = (__int64 *)v28;
      if ( *(__int64 **)(v28 + 8) != v30 )
        goto LABEL_34;
      v31 = (__int64 **)v30[1];
      if ( *v31 != v30 )
        goto LABEL_34;
      *v31 = (__int64 *)v28;
      *(_QWORD *)(v28 + 8) = v31;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v31, v29) )
      {
        VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v3, v32);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1[4] + 1760LL), &LockHandle);
        v42 = a1[4] + 1792LL;
        v43 = *(__int64 ***)(a1[4] + 1800LL);
        if ( *v43 != (__int64 *)v42 )
          goto LABEL_34;
        v30[1] = (__int64)v43;
        *v30 = v42;
        *v43 = v30;
        *(_QWORD *)(v42 + 8) = v30;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
    v22 = *(_QWORD **)v8;
    if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
      goto LABEL_34;
    v23 = (void **)*((_QWORD *)v8 + 1);
    if ( *v23 != v8 )
      goto LABEL_34;
    v24 = bTracingEnabled == 0;
    *v23 = v22;
    v22[1] = v23;
    if ( !v24 )
    {
      v25 = (_QWORD *)a1[1];
      if ( !v25 )
        v25 = a1;
      if ( (byte_1C006E941 & 1) != 0 )
        McTemplateK0pp_EtwWriteTransfer(*((_QWORD *)v8 + 2), &EventRetireSyncPoint, v9, v25, *((_QWORD *)v8 + 2));
    }
    v26 = (char *)*((_QWORD *)v8 + 9);
    if ( v26 != v8 + 80 && v26 )
      ExFreePoolWithTag(v26, 0);
    *((_QWORD *)v8 + 9) = 0LL;
    *((_DWORD *)v8 + 32) = 0;
    v27 = (char *)*((_QWORD *)v8 + 3);
    if ( v27 != v8 + 32 )
    {
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
    }
    *((_QWORD *)v8 + 3) = 0LL;
    *((_DWORD *)v8 + 16) = 0;
    ExFreePoolWithTag(v8, 0);
  }
}
