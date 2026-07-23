/*
 * XREFs of MiObtainSystemCacheView @ 0x14029FD70
 * Callers:
 *     MmMapViewInSystemCache @ 0x14029F510 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x140845490 (MmReserveViewInSystemCache.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     MiReleaseSystemCacheView @ 0x1402A0020 (MiReleaseSystemCacheView.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x1402A01F0 (MiRebalanceSystemCacheFreedViews.c)
 *     MiGetSystemCacheRegionsToFree @ 0x1402A0988 (MiGetSystemCacheRegionsToFree.c)
 *     MiConsumeSystemCachePde @ 0x1403530AC (MiConsumeSystemCachePde.c)
 *     MiExpandSystemCache @ 0x140355238 (MiExpandSystemCache.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x140360C00 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiLateInitializeSystemCache @ 0x1403AD7E8 (MiLateInitializeSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403D39F8 (MiReturnSystemCacheRegionsToKva.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     CcUnmapInactiveViews @ 0x140538328 (CcUnmapInactiveViews.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReadyReservedView @ 0x14062EF00 (MiReadyReservedView.c)
 */

__int64 __fastcall MiObtainSystemCacheView(__int64 a1)
{
  __int64 **v1; // rsi
  __int64 v2; // r15
  int v4; // edi
  unsigned __int8 CurrentIrql; // dl
  signed __int64 *v6; // rdx
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // cl
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD v31[2]; // [rsp+20h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  __int128 v33; // [rsp+48h] [rbp-28h]
  __int128 v34; // [rsp+58h] [rbp-18h]
  unsigned __int64 v35; // [rsp+68h] [rbp-8h]
  __int64 v36; // [rsp+A0h] [rbp+30h] BYREF

  v1 = (__int64 **)(a1 + 1976);
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = 0LL;
  v31[1] = v31;
  v4 = 0;
  v31[0] = v31;
  LockHandle.LockQueue.Lock = qword_140C671B0;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v13) = 4;
    else
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, qword_140C671B0);
  }
  else
  {
    v6 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)qword_140C671B0, (__int64)&LockHandle);
    if ( v6 )
      KxWaitForLockOwnerShip((signed __int64)&LockHandle, v6);
  }
  if ( !*(_BYTE *)(a1 + 17052) )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( !(unsigned int)MiLateInitializeSystemCache(a1) )
      return 0LL;
    KeAcquireInStackQueuedSpinLock(qword_140C671B0, &LockHandle);
  }
  _InterlockedOr(v30, 0);
  MiRebalanceSystemCacheFreedViews(a1, (unsigned int)KiTbFlushTimeStamp, 0LL);
  if ( v1[2] )
  {
    v7 = *v1;
    v8 = (__int64 *)**v1;
    if ( (__int64 **)(*v1)[1] != v1 || (__int64 *)v8[1] != v7 )
      __fastfail(3u);
    *v1 = v8;
    v8[1] = (__int64)v1;
    v35 = v7[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
    v33 = 0LL;
    v34 = 0LL;
    v7[4] = v35;
    v1[2] = (__int64 *)((char *)v1[2] - 1);
LABEL_10:
    MiGetSystemCacheRegionsToFree(a1, v31);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v10 = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v28 & v27[5]) == 0;
        v9 = (unsigned int)v28 & v27[5];
        v27[5] = v9;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    __writecr8(v10);
    if ( !v7 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v7 = (__int64 *)MiConsumeSystemCachePde(a1);
  if ( v7 )
    goto LABEL_10;
  v7 = (__int64 *)MiConsumeSystemCacheTbFlushNeededView(a1, 1024LL);
  if ( v7 )
    goto LABEL_10;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v14 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v20 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  __writecr8(v14);
  v7 = (__int64 *)MiExpandSystemCache(a1);
  if ( !v7 )
  {
    KeAcquireInStackQueuedSpinLock(qword_140C671B0, &LockHandle);
    v4 = 1;
    v7 = (__int64 *)MiConsumeSystemCacheTbFlushNeededView(a1, 1LL);
    goto LABEL_10;
  }
LABEL_12:
  v2 = v7[2];
LABEL_13:
  if ( v4 )
  {
    v29 = *(_QWORD *)(a1 + 200);
    v36 = 0LL;
    if ( (unsigned int)CcUnmapInactiveViews(v29, v9, 0LL, &v36) )
    {
      if ( v2 )
        MiReleaseSystemCacheView(0LL, v2);
      v2 = v36;
      MiReadyReservedView(v36);
    }
  }
  if ( (_QWORD *)v31[0] != v31 )
    MiReturnSystemCacheRegionsToKva(a1, v31);
  return v2;
}
