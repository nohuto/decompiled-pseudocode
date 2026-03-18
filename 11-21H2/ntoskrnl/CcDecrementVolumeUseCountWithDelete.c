/*
 * XREFs of CcDecrementVolumeUseCountWithDelete @ 0x140276AAC
 * Callers:
 *     CcScanLogHandleList @ 0x1402390A4 (CcScanLogHandleList.c)
 *     CcGetDeviceGuidAsync @ 0x14025E370 (CcGetDeviceGuidAsync.c)
 *     CcQueueAsyncGetDeviceGuid @ 0x14025E4A4 (CcQueueAsyncGetDeviceGuid.c)
 *     CcDeleteSharedCacheMap @ 0x140275338 (CcDeleteSharedCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x14053BFB8 (CcDeletePrivateVolumeCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

int __fastcall CcDecrementVolumeUseCountWithDelete(_DWORD *P, char a2, _BYTE *a3)
{
  int v5; // ebx
  int v6; // eax
  char *v7; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v9; // rdx
  char **v10; // rcx
  void *v11; // rcx
  int v12; // ebx
  unsigned int CurrentRunTime; // eax
  int CycleTime; // r9d
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  *a3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a2 & 1;
  if ( (a2 & 1) == 0 )
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v6 = P[1];
  if ( !v6 )
    KeBugCheckEx(0x34u, 0x62EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  LODWORD(v7) = v6 - 1;
  P[1] = (_DWORD)v7;
  if ( !(_DWORD)v7 )
  {
    v7 = (char *)(P + 4);
    *a3 = 1;
    v9 = *((_QWORD *)P + 2);
    v10 = (char **)*((_QWORD *)P + 3);
    if ( *(_DWORD **)(v9 + 8) != P + 4 || *v10 != v7 )
      __fastfail(3u);
    *v10 = (char *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    _InterlockedAdd64(&qword_140C498C8, 0xFFFFFFFFFFFFFFFFuLL);
    v11 = (void *)*((_QWORD *)P + 20);
    if ( v11 )
    {
      LODWORD(v7) = ObfDereferenceObject(v11);
      *((_QWORD *)P + 20) = 0LL;
    }
  }
  if ( !v5 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LODWORD(v7) = KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LODWORD(v7) = KeGetCurrentIrql();
        if ( (unsigned __int8)v7 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v7 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          LODWORD(v7) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = ((unsigned int)v7 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= (unsigned int)v7;
          if ( v17 )
            LODWORD(v7) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( *a3 )
    {
      v12 = P[51];
      ExFreePoolWithTag(P, 0x6D566343u);
      CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
      CycleTime = KeGetCurrentThread()[1].CycleTime;
      *a3 = 0;
      LODWORD(v7) = DbgPrintEx(
                      0x7Fu,
                      3u,
                      "[%04x:%04x]CcDecrementVolumeUseCountWithDelete: VCM:%p(vid:%2lx) Freed!\n",
                      CycleTime,
                      CurrentRunTime,
                      P,
                      v12);
    }
  }
  return (int)v7;
}
