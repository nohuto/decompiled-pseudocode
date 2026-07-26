/*
 * XREFs of ?ndisMWanSend@@YAHPEAX00@Z @ 0x1C00C90D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z @ 0x1C006D00C (-ndisMQueueWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall ndisMWanSend(_QWORD *a1, _LIST_ENTRY *a2, _LIST_ENTRY *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  char v4; // r14
  int Flags; // eax
  _LIST_ENTRY *Blink; // rcx
  KSPIN_LOCK *v10; // rcx
  unsigned int v11; // r15d
  void **v12; // rdx
  void **p_MiniportThread; // rsi
  KSPIN_LOCK *p_Lock; // rbp
  _NDIS_MINIPORT_STATS *BottomIfStats; // rdx
  __int64 Number; // rax
  _NDIS_MINIPORT_STATS *v17; // r8
  _NDIS_MINIPORT_STATS *v18; // rdx
  KIRQL NewIrql; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
  v4 = 0;
  NewIrql = 0;
  Flags = v3->Flags;
  if ( Flags < 0 )
    return 3221225473LL;
  if ( (Flags & 0x40000) == 0 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
    if ( !v3->LockAcquired )
    {
      v3->LockAcquired = 1;
      v4 = 1;
      v3->LockThread = KeGetCurrentThread();
    }
  }
  if ( _bittest((const signed __int32 *)&v3->Flags, 0x12u) )
  {
    p_Lock = &v3->Lock;
    p_MiniportThread = &v3->MiniportThread;
    goto LABEL_13;
  }
  if ( v4 )
  {
    p_MiniportThread = &v3->MiniportThread;
    v3->MiniportThread = 0LL;
    p_Lock = &v3->Lock;
    KeReleaseSpinLockFromDpcLevel(&v3->Lock);
LABEL_13:
    v11 = ((__int64 (__fastcall *)(void *, _LIST_ENTRY *, _LIST_ENTRY *))v3->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler)(
            v3->MiniportAdapterContext,
            a2,
            a3);
    if ( !_bittest((const signed __int32 *)&v3->Flags, 0x12u) )
    {
      KeAcquireSpinLockAtDpcLevel(p_Lock);
      *p_MiniportThread = KeGetCurrentThread();
    }
    v10 = p_Lock;
    v12 = p_MiniportThread;
    if ( !v11 )
    {
      BottomIfStats = v3->BottomIfStats;
      if ( BottomIfStats )
      {
        Number = KeGetPcr()->Prcb.Number;
        ++BottomIfStats[Number].ifHCOutUcastPkts;
      }
      v17 = v3->BottomIfStats;
      v10 = p_Lock;
      v12 = p_MiniportThread;
      if ( v17 )
      {
        v10 = p_Lock;
        v18 = &v17[KeGetPcr()->Prcb.Number];
        v18->ifHCOutUcastOctets += LODWORD(a3[1].Blink);
        v18->ifHCOutOctets += LODWORD(a3[1].Blink);
        v12 = p_MiniportThread;
      }
    }
    goto LABEL_20;
  }
  a3->Blink = a3;
  a3->Flink = a3;
  Blink = v3->PacketList.Blink;
  if ( Blink->Flink != &v3->PacketList )
    __fastfail(3u);
  a3->Blink = Blink;
  a3->Flink = &v3->PacketList;
  Blink->Flink = a3;
  v3->PacketList.Blink = a3;
  a3[5].Flink = a2;
  ndisMQueueWorkItem(v3, NdisWorkItemSend, 0LL);
  v10 = &v3->Lock;
  v11 = 259;
  v12 = &v3->MiniportThread;
LABEL_20:
  if ( !_bittest((const signed __int32 *)&v3->Flags, 0x12u) )
  {
    if ( v4 )
    {
      v3->LockThread = 0LL;
      v3->LockAcquired = 0;
    }
    *v12 = 0LL;
    KeReleaseSpinLock(v10, NewIrql);
  }
  return v11;
}
