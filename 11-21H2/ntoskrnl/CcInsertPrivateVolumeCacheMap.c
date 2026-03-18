/*
 * XREFs of CcInsertPrivateVolumeCacheMap @ 0x14053CFF4
 * Callers:
 *     CcCreatePrivateVolumeCacheMap @ 0x14053BE0C (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcInsertPrivateVolumeCacheMap(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // r12
  char v7; // r15
  _QWORD *v8; // rax
  _QWORD *i; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int64 v20; // r14
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  const char *v25; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp+7h] BYREF
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+80h] [rbp+1Fh] BYREF

  v3 = *(const void **)(a3 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  memset(&v28, 0, sizeof(v28));
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInsertPrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p(vid:%2lx)\n",
    KeGetCurrentThread()[1].CycleTime,
    *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime,
    (const void *)a2,
    *(_DWORD *)(a2 + 204),
    v3,
    (const void *)a3,
    *(_DWORD *)(a3 + 24));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
  v8 = (_QWORD *)(a1 + 32);
  for ( i = *(_QWORD **)(a1 + 32); i != v8; i = (_QWORD *)*i )
  {
    if ( (const void *)*(i - 70) == v3 )
      goto LABEL_8;
  }
  v10 = *(_QWORD **)(a1 + 40);
  v11 = (_QWORD *)(a3 + 576);
  if ( (_QWORD *)*v10 != v8 )
    goto LABEL_27;
  *v11 = v8;
  v7 = 1;
  *(_QWORD *)(a3 + 584) = v10;
  *v10 = v11;
  *(_QWORD *)(a1 + 40) = v11;
  *(_BYTE *)(a3 + 1173) = 1;
  if ( ++*(_DWORD *)(a1 + 48) == 1 )
    KeResetEvent((PRKEVENT)(a1 + 56));
LABEL_8:
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
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( !v7 )
  {
    v25 = "NO";
    goto LABEL_26;
  }
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v28);
  v18 = *(_QWORD **)(a2 + 216);
  v19 = (_QWORD *)(a3 + 592);
  if ( *v18 != a2 + 208 )
LABEL_27:
    __fastfail(3u);
  *v19 = a2 + 208;
  *(_QWORD *)(a3 + 600) = v18;
  *v18 = v19;
  *(_QWORD *)(a2 + 216) = v19;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v28);
  v20 = v28.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && v28.OldIrql <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (v28.OldIrql + 1));
        v17 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)v22);
      }
    }
  }
  __writecr8(v20);
  v25 = "YES";
LABEL_26:
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcInsertPrivateVolumeCacheMap: VCM:%p(vid:%2lx), DO:%p, PVCM:%p(vid:%2lx), PVCMCount:%lu, Inserted:%s\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    (const void *)a2,
    *(_DWORD *)(a2 + 204),
    v3,
    (const void *)a3,
    *(_DWORD *)(a3 + 24),
    *(_DWORD *)(a1 + 48),
    v25);
  return v7;
}
