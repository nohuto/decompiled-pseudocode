/*
 * XREFs of HalpExtEnvMarkHiberRegions @ 0x14051FC78
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A95B10 (HaliLocateHiberRanges.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PoSetHiberRange @ 0x14058ED90 (PoSetHiberRange.c)
 */

__int64 __fastcall HalpExtEnvMarkHiberRegions(PVOID MemoryMap)
{
  unsigned __int64 v2; // rdi
  __int64 j; // rbx
  __int64 *i; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&ExtEnvAllocationLock);
  if ( MemoryMap )
  {
    for ( i = (__int64 *)ExtEnvLockList; i != &ExtEnvLockList; i = (__int64 *)*i )
      PoSetHiberRange(MemoryMap, 2u, i + 2, 8uLL, 0x496C6148u);
  }
  else
  {
    for ( j = ExtEnvAllocationList; (__int64 *)j != &ExtEnvAllocationList; j = *(_QWORD *)j )
      PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(j + 16), *(_QWORD *)(j + 40), 0x496C6148u);
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&ExtEnvAllocationLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
