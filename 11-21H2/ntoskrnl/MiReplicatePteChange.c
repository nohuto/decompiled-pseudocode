/*
 * XREFs of MiReplicatePteChange @ 0x14036CB28
 * Callers:
 *     MiZeroAndFlushPtes @ 0x1402157EC (MiZeroAndFlushPtes.c)
 *     MiDecommitLargePoolVa @ 0x140228464 (MiDecommitLargePoolVa.c)
 *     MiDeleteSystemPageTable @ 0x140228CD0 (MiDeleteSystemPageTable.c)
 *     MiCreateSystemPageTable @ 0x14027CE40 (MiCreateSystemPageTable.c)
 *     MiDeleteVaTail @ 0x14032F0E0 (MiDeleteVaTail.c)
 *     MiReplicatePfnDatabaseMappings @ 0x1405839A4 (MiReplicatePfnDatabaseMappings.c)
 *     MiInitializeShadowPageTable @ 0x14082A974 (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReplicatePteChangeToProcess @ 0x14036C9FC (MiReplicatePteChangeToProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReplicatePteChange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rdx
  _KPROCESS *Process; // r15
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v7; // rdi
  __int64 *v8; // rsi
  __int64 *i; // rbx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v12; // rcx
  int v13; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a1;
  v4 = 3LL;
  do
  {
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v4;
  }
  while ( v4 );
  Process = KeGetCurrentThread()->ApcState.Process;
  LeafVa = MiGetLeafVa(a1);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v7 = Process[1].Affinity.StaticBitmap[25];
    v8 = (__int64 *)(v7 + 16);
  }
  else
  {
    v7 = 0LL;
    v8 = &qword_140C50658;
  }
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( v7 && (*(_BYTE *)(v7 + 377) & 6) == 2 )
    MiReplicatePteChangeToProcess(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * Process[1].IdealProcessor[25]) + 176LL) + 104LL),
      v3,
      a2);
  for ( i = (__int64 *)*v8; i != v8; i = (__int64 *)*i )
  {
    v12 = (__int64)i + (v7 != 0 ? -1184LL : -1984LL);
    v13 = *(_DWORD *)(v12 + 1124);
    if ( (v13 & 0x800000) == 0 )
    {
      if ( (v13 & 0xC00) != 0 && (v13 & 0x80u) == 0 )
      {
        if ( (_KPROCESS *)v12 != Process )
          MiReplicatePteChangeToProcess(v12, v3, a2);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)(v12 + 1124), 0x800000u);
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
