/*
 * XREFs of ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0025928
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000C240 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000D560 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C0027264 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C0009210 (WPP_RECORDER_SF_qDq.c)
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F220 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022764 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0024220 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0024960 (-ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00A0310 (-ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  unsigned int v7; // ebp
  struct _NDIS_FILTER_BLOCK *v8; // r15
  __int64 Pool2; // rax
  int v10; // r8d
  struct _WORK_QUEUE_ITEM *v11; // rdi
  KSPIN_LOCK *p_SpinLock; // rcx
  KIRQL v13; // al
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v15; // bl
  unsigned int v16; // eax
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  KSPIN_LOCK *p_Lock; // rcx
  char v20; // al
  int v21; // eax
  _DWORD v22[4]; // [rsp+40h] [rbp-38h] BYREF
  KIRQL NewIrql; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  NewIrql = 0;
  v7 = -1073741823;
  v8 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 80LL, 1769423950);
  v11 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    if ( a3 == 17 )
    {
      v3 = a1;
    }
    else
    {
      if ( a3 != 5 )
        goto LABEL_32;
      v8 = (struct _NDIS_FILTER_BLOCK *)a1;
    }
    *(_QWORD *)(Pool2 + 56) = a1;
    if ( v3 )
    {
      if ( a2 )
      {
        v20 = ndisReferenceMiniport(v3, 0x47u);
      }
      else
      {
        ndisReferenceMiniportNoCheck(v3, 0x47u);
        v20 = 1;
      }
    }
    else
    {
      if ( !v8 )
        goto LABEL_32;
      p_SpinLock = &v8->PnPRef.SpinLock;
      if ( !a2 )
      {
        v13 = KeAcquireSpinLockRaiseToDpc(p_SpinLock);
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v8->PnPRef.RefCountTracker;
        ++v8->PnPRef.ReferenceCount;
        v15 = v13;
        NdisReferenceWithTag(RefCountTracker, 0xCu);
        KeReleaseSpinLock(&v8->PnPRef.SpinLock, v15);
        goto LABEL_12;
      }
      v22[0] = 0;
      v20 = ndisReferenceRefEx(p_SpinLock, 0xCu, (enum _NDIS_REFERENCE_STATUS *)v22);
    }
    if ( v20 == 1 )
    {
      if ( !a2 )
        goto LABEL_12;
      if ( v3 )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
        v21 = ndisMQueueOidRequest(v3, a2);
        v3->MiniportThread = 0LL;
        p_Lock = &v3->Lock;
        v7 = v21;
      }
      else
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8->Miniport, &NewIrql);
        KeAcquireSpinLockAtDpcLevel(&v8->Lock);
        v8->LockThread = KeGetCurrentThread();
        v16 = ndisFQueueOidRequest(v8, a2);
        v8->LockThread = 0LL;
        v7 = v16;
        KeReleaseSpinLockFromDpcLevel(&v8->Lock);
        Miniport = v8->Miniport;
        Miniport->MiniportThread = 0LL;
        p_Lock = &Miniport->Lock;
      }
      KeReleaseSpinLock(p_Lock, NewIrql);
      if ( !v7 )
      {
LABEL_12:
        RtlGetCallersAddress((PVOID *)&v11[1].List.Flink, (PVOID *)&v11[1].List.Blink);
        v11->List.Flink = 0LL;
        v11->WorkerRoutine = ndisDoOidRequests;
        v11->Parameter = v11;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xBu,
            0x11u,
            (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
            (char)a2,
            a1);
        ExQueueWorkItem(v11, (WORK_QUEUE_TYPE)40);
        return 259;
      }
      goto LABEL_29;
    }
    if ( v20 )
    {
LABEL_29:
      if ( v3 )
        ndisDereferenceMiniport(v3, 0x47u);
      else
        ndisDereferenceRef(&v8->PnPRef.SpinLock, 0xCu);
    }
LABEL_32:
    ExFreePoolWithTag(v11, 0);
    return v7;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      v10,
      0x10u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      (char)a1,
      a3,
      a2);
  return (unsigned int)-1073741670;
}
