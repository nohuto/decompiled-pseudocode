/*
 * XREFs of MiReadyToZeroNextLargePage @ 0x1402C4BF0
 * Callers:
 *     MiZeroLargePages @ 0x1402C41D0 (MiZeroLargePages.c)
 * Callees:
 *     MiReferencePageRuns @ 0x14023FF18 (MiReferencePageRuns.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReadyToZeroNextLargePage(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  bool v4; // zf
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int8 v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r11
  _DWORD *v19; // r9
  int v20; // eax
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  unsigned __int8 v30; // al
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int8 v33; // al
  _DWORD *v34; // r8
  int v35; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-59h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-41h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int8 v39; // [rsp+100h] [rbp+67h]

  v2 = *(_QWORD *)(a1 + 232);
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a2 = 0;
  v4 = *(_DWORD *)(v2 + 136) == 0;
  v6 = *(_QWORD *)(v2 + 72);
  Object[0] = (PVOID)(v6 + 104);
  if ( v4 )
  {
    if ( !*(_BYTE *)(a1 + 300) )
    {
      *(_BYTE *)(a1 + 300) = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      v4 = (*(_DWORD *)(v2 + 152))-- == 1;
      if ( v4 )
        *(_DWORD *)(v2 + 136) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v4 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v4 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
  }
  else
  {
    v7 = *(_QWORD *)(v2 + 144) + 40LL * *(unsigned int *)(a1 + 264);
    Object[1] = (PVOID)(v7 + 16);
    if ( (*(_BYTE *)(v7 + 4) & 2) != 0 )
    {
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
        if ( (*(_BYTE *)(v7 + 4) & 4) != 0 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v11 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v30 = KeGetCurrentIrql();
              if ( v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
              {
                v27 = KeGetCurrentPrcb();
                v31 = v27->SchedulerAssist;
                v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v4 = (v32 & v31[5]) == 0;
                v31[5] &= v32;
                if ( v4 )
                  goto LABEL_56;
              }
            }
          }
          goto LABEL_17;
        }
        if ( (*(_BYTE *)(v7 + 4) & 2) == 0 )
          break;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v9 = LockHandle.OldIrql;
        v39 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v17 = KeGetCurrentIrql();
            if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
            {
              v18 = KeGetCurrentPrcb();
              v19 = v18->SchedulerAssist;
              v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v4 = (v20 & v19[5]) == 0;
              v19[5] &= v20;
              if ( v4 )
              {
                KiRemoveSystemWorkPriorityKick(v18);
                v9 = v39;
              }
            }
          }
        }
        __writecr8(v9);
        *a2 = 1;
        if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
          goto LABEL_37;
        if ( (*(_BYTE *)(v7 + 4) & 2) == 0 )
          goto LABEL_3;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v11 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && LockHandle.OldIrql <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v4 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v4 )
LABEL_56:
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
      }
LABEL_17:
      __writecr8(v11);
    }
LABEL_3:
    if ( *((_DWORD *)Object[0] + 1) )
    {
LABEL_37:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
      *(_BYTE *)(v7 + 4) |= 0x10u;
      KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 0xCu);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v21 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v4 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v4 )
LABEL_63:
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
      }
LABEL_64:
      __writecr8(v21);
      return 0LL;
    }
    while ( *(_DWORD *)(v6 + 16100) || dword_140C53440 )
    {
      if ( !KeWaitForSingleObject(Object[0], WrFreePage, 0, 0, (PLARGE_INTEGER)&MiFiveSeconds) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
        *(_BYTE *)(v7 + 4) |= 0x10u;
        KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 0xCu);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v21 = LockHandle.OldIrql;
        if ( !KiIrqlFlags )
          goto LABEL_64;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_64;
        v33 = KeGetCurrentIrql();
        if ( v33 > 0xFu )
          goto LABEL_64;
        if ( LockHandle.OldIrql > 0xFu )
          goto LABEL_64;
        if ( v33 < 2u )
          goto LABEL_64;
        v23 = KeGetCurrentPrcb();
        v34 = v23->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( !v4 )
          goto LABEL_64;
        goto LABEL_63;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 240) )
    return 1LL;
  v10 = MiReferencePageRuns(*(_QWORD *)(v2 + 72), 0);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 240) = v10;
    return 1LL;
  }
  return 0LL;
}
