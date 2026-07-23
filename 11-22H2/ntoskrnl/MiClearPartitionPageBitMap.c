/*
 * XREFs of MiClearPartitionPageBitMap @ 0x140659030
 * Callers:
 *     MiInsertPartitionPages @ 0x14065A4F0 (MiInsertPartitionPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14061C01C (MiUnlockDynamicMemoryExclusive.c)
 *     MiActOnPartitionNodePages @ 0x1406580F0 (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionPageNodes @ 0x140659464 (MiDeletePartitionPageNodes.c)
 *     MiMakePartitionMemoryBlock @ 0x140A45100 (MiMakePartitionMemoryBlock.c)
 */

char __fastcall MiClearPartitionPageBitMap(__int64 a1, _QWORD **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v7; // rsi
  __int64 v8; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v10; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  int SessionId; // eax
  KIRQL v16; // al
  _QWORD *v17; // rcx
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // r10
  _QWORD *v22; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v24; // r9
  int v25; // eax
  _DWORD *v26; // r8
  bool v27; // zf
  __int16 *v29[10]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp+8h]

  memset(v29, 0, 0x48uLL);
  v29[4] = 0LL;
  v5 = a1 + 216;
  v29[0] = (__int16 *)a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = KeGetCurrentThread();
  v8 = 0LL;
  _disable();
  AbEntrySummary = v7->AbEntrySummary;
  if ( v7->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v4, (__int64)v7)) != 0 )
  {
    _BitScanForward(&v10, AbEntrySummary);
    v30 = v10;
    v7->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v13 = *SchedulerAssist;
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v8 = (__int64)(&v7[1].Process + 12 * v30);
    if ( (unsigned __int64)(v5 - qword_140C65AE8) >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    *(_DWORD *)(v8 + 8) = SessionId;
    *(_QWORD *)v8 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v8, v5);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
  v17 = *a2;
  v18 = 0LL;
  v19 = v16;
  while ( v17 )
  {
    v18 = v17;
    v17 = (_QWORD *)*v17;
  }
  while ( v18 )
  {
    v20 = (_QWORD *)v18[1];
    v21 = (__int64)v18;
    v22 = v18;
    if ( v20 )
    {
      do
      {
        v18 = v20;
        v20 = (_QWORD *)*v20;
      }
      while ( v20 );
    }
    else
    {
      while ( 1 )
      {
        v18 = (_QWORD *)(v18[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v18 || (_QWORD *)*v18 == v22 )
          break;
        v22 = v18;
      }
    }
    MiActOnPartitionNodePages(v21, 9u, 0, v29);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 224));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v19 <= 0xFu
      && CurrentIrql >= 2u )
    {
      v24 = KeGetCurrentPrcb();
      v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
      v26 = v24->SchedulerAssist;
      v27 = (v25 & v26[5]) == 0;
      v26[5] &= v25;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick((__int64)v24);
    }
  }
  __writecr8(v19);
  MiDeletePartitionPageNodes(&v29[4]);
  if ( (unsigned __int16 *)a1 != MiSystemPartition )
    MiMakePartitionMemoryBlock(a1);
  return MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
}
