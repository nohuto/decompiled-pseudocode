/*
 * XREFs of PoHandleIrp @ 0x14028DA0C
 * Callers:
 *     IopPoHandleIrp @ 0x14028D9BC (IopPoHandleIrp.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     PoDeviceReleaseIrp @ 0x14028DBAC (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x14028DC48 (PoDeviceAcquireIrp.c)
 *     PopDispatchQuerySetIrp @ 0x14028DD04 (PopDispatchQuerySetIrp.c)
 *     PopEnableIrpWatchdog @ 0x14028EF48 (PopEnableIrpWatchdog.c)
 *     IofCompleteRequest @ 0x1402C9C10 (IofCompleteRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1405929E8 (PopDiagTraceDIrpAfterSx.c)
 */

char __fastcall PoHandleIrp(PIRP Irp, __int64 a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _DWORD *v3; // r12
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  PDEVICE_OBJECT DeviceObject; // r15
  ULONG *p_Flags; // rdi
  ULONG Flags; // eax
  char v11; // si
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (_DWORD *)a2;
  v5 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v6 = *(_QWORD *)(v5 + 24);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  DeviceObject = CurrentStackLocation->DeviceObject;
  if ( !*(_QWORD *)(v5 + 40) )
  {
    if ( *(_BYTE *)(v5 + 184) == 2 && !*(_DWORD *)(v5 + 188) && *(_DWORD *)(v5 + 192) == 1 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      PopIrpLockThread = (__int64)KeGetCurrentThread();
      _InterlockedAnd((volatile signed __int32 *)(v7 + 296), 0xFFFF7FFF);
      v15 = *(_QWORD *)(v7 + 264);
      if ( v15 )
        PopEnableIrpWatchdog(v15, v14);
      PopIrpLockThread = 0LL;
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
          a2 = -1LL << (LockHandle.OldIrql + 1);
          v20 = ~(unsigned __int16)a2;
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
    }
    if ( *(_BYTE *)(v5 + 184) == 2 && *(_DWORD *)(v5 + 188) == 1 )
    {
      _m_prefetchw((const void *)(v7 + 296));
      if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 296), 0) & 0x8000) != 0 )
        PopDiagTraceDIrpAfterSx(Irp);
    }
LABEL_16:
    p_Flags = &DeviceObject->Flags;
    v11 = 1;
    if ( (DeviceObject->Flags & 0x8000) == 0 )
      goto LABEL_17;
    goto LABEL_8;
  }
  LOBYTE(a2) = *(_BYTE *)(v5 + 184);
  PoDeviceReleaseIrp(Irp, a2);
  p_Flags = &DeviceObject->Flags;
  Flags = DeviceObject->Flags;
  if ( (Flags & 0x8000) != 0 || (Flags & 0x2000) != 0 && KeGetCurrentIrql() == 2 )
    goto LABEL_16;
  v11 = 0;
LABEL_8:
  LOBYTE(a2) = CurrentStackLocation->MinorFunction;
  PoDeviceAcquireIrp(Irp, a2, DeviceObject);
  if ( !v11 )
    return v11;
  if ( (*p_Flags & 0x8000) != 0 )
  {
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    *v3 = 0;
    return v11;
  }
LABEL_17:
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  PopDispatchQuerySetIrp(Irp);
  PopIrpLockThread = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v13 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v21 = (v25 & v24[5]) == 0;
      v24[5] &= v25;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(v23);
    }
  }
  __writecr8(v13);
  *v3 = 259;
  return v11;
}
