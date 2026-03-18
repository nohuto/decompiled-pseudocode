/*
 * XREFs of HalpDmaReferenceDomainObject @ 0x1403B2A28
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x1403B2614 (HalpAllocateCommonBufferDmaThin.c)
 *     HalJoinDmaDomain @ 0x1403CD4E0 (HalJoinDmaDomain.c)
 *     HalpDmaAllocateDomain @ 0x1403CD570 (HalpDmaAllocateDomain.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x140511BD0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalCreateCommonBufferFromMdl @ 0x140514560 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140514A70 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaIsAutomaticDomain @ 0x140515358 (HalpDmaIsAutomaticDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x1405158A0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x1405160A0 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405164D0 (HalpAllocateCommonBufferDmarThin.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpDmaReferenceDomainObject(__int64 a1)
{
  char v2; // bl
  KIRQL v3; // al
  __int64 *v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v4 = (__int64 *)HalpDmaDomainList;
  v5 = v3;
  while ( v4 != &HalpDmaDomainList )
  {
    if ( (__int64 *)a1 == v4 )
    {
      ++*(_DWORD *)(a1 + 112);
      v2 = 1;
      break;
    }
    v4 = (__int64 *)*v4;
  }
  KxReleaseSpinLock(&HalpDmaDomainListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v2 == 0 ? 0xC000000D : 0;
}
