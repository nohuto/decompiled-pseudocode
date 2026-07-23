/*
 * XREFs of MiGetHugePageToZero @ 0x140350B60
 * Callers:
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlinkNodeLargePages @ 0x1402D76D0 (MiUnlinkNodeLargePages.c)
 *     ExAllocatePoolMm @ 0x1402E26E0 (ExAllocatePoolMm.c)
 *     MiGetUltraHugeAlreadyActive @ 0x1403C0224 (MiGetUltraHugeAlreadyActive.c)
 *     MiGetHugeRangeFromNode @ 0x1403C4A84 (MiGetHugeRangeFromNode.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5488 (MiInitializeNewUltraHugeContext.c)
 *     MiDecrementHugeContext @ 0x1403D5FF8 (MiDecrementHugeContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetHugePageToZero(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 OldIrql; // rbx
  __int64 result; // rax
  _QWORD *v10; // rcx
  PVOID PoolMm; // rax
  __int64 v12; // r14
  unsigned __int64 HugeRangeFromNode; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  int v16; // r15d
  unsigned __int64 v17; // r14
  int v18; // ecx
  _QWORD *i; // rax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a2 + 364) >> byte_140C65B8D;
  v4 = 0;
  v6 = 25408LL * v3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_BYTE *)(a2 + 70) = 0;
    v7 = *(_QWORD *)(a1 + 16);
    if ( !*(_QWORD *)(a2 + 344) )
    {
      v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 168LL) + 32LL);
      if ( (_QWORD *)*v10 == v10 && !*(_QWORD *)(v6 + v7 + 8) )
      {
        if ( !*(_QWORD *)(a1 + 16216) )
          return 0LL;
        v18 = 0;
        if ( !MmNumberOfChannels )
          return 0LL;
        for ( i = (_QWORD *)(v6 + v7 + 22896); !*i; ++i )
        {
          if ( ++v18 >= (unsigned int)MmNumberOfChannels )
            return 0LL;
        }
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + v7 + 23024), &LockHandle);
    if ( MiGetUltraHugeAlreadyActive(a2) )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v36 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v36;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = 1LL;
LABEL_6:
      __writecr8(OldIrql);
      return result;
    }
    PoolMm = ExAllocatePoolMm(64, 0x150uLL, 0x7548694Du, v3 | 0x80000000);
    v12 = (__int64)PoolMm;
    if ( !PoolMm )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v29 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
      result = 0LL;
      goto LABEL_6;
    }
    HugeRangeFromNode = MiGetHugeRangeFromNode(a1, v3, 0LL, PoolMm);
    if ( (HugeRangeFromNode & 0x3FFFFF) == 0 )
      break;
LABEL_17:
    *(_QWORD *)(v12 + 176) = HugeRangeFromNode;
    *(_DWORD *)(v12 + 320) = v3;
    v16 = MiInitializeNewUltraHugeContext(a2, v12);
    if ( v16 )
      MiDecrementHugeContext((PVOID)v12);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v17 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    __writecr8(v17);
    if ( v16 != 1 )
    {
      LOBYTE(v4) = v16 != 2;
      return v4;
    }
    v6 = 25408LL * v3;
  }
  v14 = MiUnlinkNodeLargePages(a1, 0, 0, 1LL, v3, 4, 1, 512, v12);
  if ( v14 )
  {
    HugeRangeFromNode = 0xAAAAAAAAAAAAAAABuLL * ((v14 + 0x220000000000LL) >> 4);
    goto LABEL_17;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v15 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v24 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v26);
    }
  }
  __writecr8(v15);
  ExFreePoolWithTag((PVOID)v12, 0);
  return 0LL;
}
