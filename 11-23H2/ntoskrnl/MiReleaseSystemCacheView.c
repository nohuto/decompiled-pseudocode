/*
 * XREFs of MiReleaseSystemCacheView @ 0x1402A03D0
 * Callers:
 *     MiWorkingSetManager @ 0x14021D5F0 (MiWorkingSetManager.c)
 *     MiObtainSystemCacheView @ 0x1402A0120 (MiObtainSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x140A30B70 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402611B0 (KxWaitForLockOwnerShip.c)
 *     MiGetSystemCacheReverseMap @ 0x1402626A0 (MiGetSystemCacheReverseMap.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x1402A05A0 (MiRebalanceSystemCacheFreedViews.c)
 *     MiGetSystemCacheRegionsToFree @ 0x1402A0D38 (MiGetSystemCacheRegionsToFree.c)
 *     MiFreeSystemCacheView @ 0x1402A0E0C (MiFreeSystemCacheView.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403D4238 (MiReturnSystemCacheRegionsToKva.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046058E (KiAcquireQueuedSpinLockInstrumented.c)
 */

_QWORD *__fastcall MiReleaseSystemCacheView(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rbx
  __int64 SystemCacheReverseMap; // rdi
  unsigned __int8 CurrentIrql; // dl
  signed __int64 *v6; // rdx
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // r10
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h]

  result = 0LL;
  v19 = 0LL;
  v3 = a1;
  v18 = 0LL;
  if ( a2 )
  {
    SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2);
    v3 = *(_QWORD *)(qword_140C673C8 + 8LL * ((*(_DWORD *)(SystemCacheReverseMap + 32) >> 6) & 0x3FF));
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 17052) )
      return result;
    SystemCacheReverseMap = 0LL;
  }
  v17[1] = v17;
  *((_QWORD *)&v18 + 1) = qword_140C670B0;
  v17[0] = v17;
  *(_QWORD *)&v18 = 0LL;
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
    KiAcquireQueuedSpinLockInstrumented(&v18, qword_140C670B0);
  }
  else
  {
    v6 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)qword_140C670B0, (__int64)&v18);
    if ( v6 )
      KxWaitForLockOwnerShip((signed __int64)&v18, v6);
  }
  _InterlockedOr(v16, 0);
  v7 = KiTbFlushTimeStamp;
  MiRebalanceSystemCacheFreedViews(v3, (unsigned int)KiTbFlushTimeStamp, 0LL);
  if ( SystemCacheReverseMap )
    MiFreeSystemCacheView(v3, v7, SystemCacheReverseMap);
  else
    MiGetSystemCacheRegionsToFree(v3, v17);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v18);
  v8 = (unsigned __int8)v19;
  if ( (_DWORD)KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  result = v17;
  if ( (_QWORD *)v17[0] != v17 )
    return (_QWORD *)MiReturnSystemCacheRegionsToKva(v3, v17);
  return result;
}
