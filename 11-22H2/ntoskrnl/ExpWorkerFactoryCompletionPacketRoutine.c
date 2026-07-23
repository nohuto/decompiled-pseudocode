/*
 * XREFs of ExpWorkerFactoryCompletionPacketRoutine @ 0x140319B60
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     IoSetIoCompletionEx3 @ 0x14031A830 (IoSetIoCompletionEx3.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     IoFreeMiniCompletionPacket @ 0x14076CD50 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // dl
  signed __int64 *v4; // rdx
  int v5; // esi
  bool v6; // zf
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // r10
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  signed __int32 v16[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int64 *v18; // [rsp+58h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp-18h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v19 = 0LL;
  v17 = 0LL;
  v18 = (volatile signed __int64 *)a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v10) = 4;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  LOBYTE(v19) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v17, a2);
  }
  else
  {
    v4 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&v17);
    if ( v4 )
      KxWaitForLockOwnerShip((signed __int64)&v17, v4);
  }
  v5 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v5 = 2;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a2 + 33) )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_8;
    v5 = 1;
  }
  else
  {
    v6 = (*(_DWORD *)(a2 + 24))-- == 1;
    if ( v6 )
    {
LABEL_8:
      *(_BYTE *)(a2 + 32) = 0;
      goto LABEL_9;
    }
    v5 = 1;
  }
LABEL_9:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v17, retaddr);
    goto LABEL_12;
  }
  _m_prefetchw(&v17);
  v7 = v17;
  if ( !v17 )
  {
    if ( (__int64 *)_InterlockedCompareExchange64(v18, 0LL, (signed __int64)&v17) == &v17 )
      goto LABEL_12;
    v7 = KxWaitForLockChainValid(&v17);
  }
  v17 = 0LL;
  v11 = (unsigned __int8)v18;
  if ( ((v11 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v7 + 8), (__int64)v18)) & 4) != 0 )
  {
    _InterlockedOr(v16, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v7 + 8) >> 5) & 0x7F], 0LL));
  }
LABEL_12:
  v8 = (unsigned __int8)v19;
  if ( (_DWORD)KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v12 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v12 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
      v6 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      IoSetIoCompletionEx3(*(_QWORD *)(a2 + 8), 0, 0, 0, 0LL, 0, *(_QWORD *)(a2 + 16), 0, 0);
    }
    else
    {
      IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
      ExFreePoolWithTag((PVOID)a2, 0);
    }
  }
}
