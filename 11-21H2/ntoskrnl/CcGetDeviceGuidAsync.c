/*
 * XREFs of CcGetDeviceGuidAsync @ 0x14025E370
 * Callers:
 *     <none>
 * Callees:
 *     CcDecrementVolumeUseCountWithDelete @ 0x140276AAC (CcDecrementVolumeUseCountWithDelete.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     CcGetDeviceGuid @ 0x1407460A4 (CcGetDeviceGuid.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CcGetDeviceGuidAsync(_QWORD *P)
{
  __int64 v2; // rcx
  int DeviceGuid; // eax
  _QWORD *v4; // rdi
  void *v5; // r14
  int v6; // ebx
  unsigned __int64 OldIrql; // rbx
  __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  v2 = P[1];
  v15 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  DeviceGuid = CcGetDeviceGuid(v2, &v15);
  v4 = (_QWORD *)*P;
  v5 = (void *)P[1];
  v6 = DeviceGuid;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  if ( v6 >= 0 )
  {
    v8 = v4[28] - *(_QWORD *)&NullGuid.Data1;
    if ( !v8 )
      v8 = v4[29] - *(_QWORD *)NullGuid.Data4;
    if ( !v8 )
      *((_OWORD *)v4 + 14) = v15;
  }
  CcDecrementVolumeUseCountWithDelete(v4);
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
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  ExFreePoolWithTag(P, 0x65546343u);
}
