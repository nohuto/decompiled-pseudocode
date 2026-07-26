/*
 * XREFs of ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0009598
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000CA50 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000DB60 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C00B06AC (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0008C44 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B180 (WPP_RECORDER_SF_qDq.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022EB8 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0025DB0 (-ndisFQueueOidRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009A318 (-ndisMQueueOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  unsigned int v7; // ebp
  struct _NDIS_FILTER_BLOCK *v8; // r15
  __int64 Pool2; // rax
  int v10; // edx
  int v11; // r8d
  struct _WORK_QUEUE_ITEM *v12; // rdi
  KSPIN_LOCK *p_SpinLock; // rcx
  KIRQL v14; // al
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v16; // bl
  int v17; // edx
  unsigned int v18; // eax
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  KSPIN_LOCK *p_Lock; // rcx
  unsigned __int8 v22; // al
  unsigned int v23; // eax
  _DWORD v24[4]; // [rsp+40h] [rbp-38h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+78h] [rbp+0h]
  KIRQL NewIrql; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  NewIrql = 0;
  v7 = -1073741823;
  v8 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 80LL, 1769423950LL);
  v12 = (struct _WORK_QUEUE_ITEM *)Pool2;
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
        v22 = ndisReferenceMiniport(v3, MPREF_OID_QUEUED);
      }
      else
      {
        ndisReferenceMiniportNoCheck(v3, MPREF_OID_QUEUED);
        v22 = 1;
      }
    }
    else
    {
      if ( !v8 )
        goto LABEL_32;
      p_SpinLock = &v8->PnPRef.SpinLock;
      if ( !a2 )
      {
        v14 = KeAcquireSpinLockRaiseToDpc(p_SpinLock);
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v8->PnPRef.RefCountTracker;
        ++v8->PnPRef.ReferenceCount;
        v16 = v14;
        NdisReferenceWithTag(RefCountTracker);
        KeReleaseSpinLock(&v8->PnPRef.SpinLock, v16);
        goto LABEL_12;
      }
      v24[0] = 0;
      v22 = ndisReferenceRefEx(p_SpinLock, 0xCu, (enum _NDIS_REFERENCE_STATUS *)v24);
    }
    if ( v22 == 1 )
    {
      if ( !a2 )
        goto LABEL_12;
      if ( v3 )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
        v23 = ndisMQueueOidRequest(v3, a2);
        v3->MiniportThread = 0LL;
        p_Lock = &v3->Lock;
        v7 = v23;
      }
      else
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v8->Miniport, &NewIrql);
        KeAcquireSpinLockAtDpcLevel(&v8->Lock);
        v8->LockThread = KeGetCurrentThread();
        v18 = ndisFQueueOidRequest(v8, a2);
        v8->LockThread = 0LL;
        v7 = v18;
        KeReleaseSpinLockFromDpcLevel(&v8->Lock);
        Miniport = v8->Miniport;
        Miniport->MiniportThread = 0LL;
        p_Lock = &Miniport->Lock;
      }
      KeReleaseSpinLock(p_Lock, NewIrql);
      if ( !v7 )
      {
LABEL_12:
        v12[1].List.Blink = 0LL;
        v12->List.Flink = 0LL;
        v12[1].List.Flink = retaddr;
        v12->WorkerRoutine = ndisDoOidRequests;
        v12->Parameter = v12;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            11,
            17,
            (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
            (char)a2,
            (char)a1);
        }
        ExQueueWorkItem(v12, (WORK_QUEUE_TYPE)40);
        return 259;
      }
      goto LABEL_29;
    }
    if ( v22 )
    {
LABEL_29:
      if ( v3 )
        ndisDereferenceMiniport(v3, 0x47u);
      else
        ndisDereferenceRef(&v8->PnPRef.SpinLock, 0xCu);
    }
LABEL_32:
    ExFreePoolWithTag(v12, 0);
    return v7;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      v11,
      16,
      (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
      (char)a1,
      a3,
      (char)a2);
  }
  return (unsigned int)-1073741670;
}
