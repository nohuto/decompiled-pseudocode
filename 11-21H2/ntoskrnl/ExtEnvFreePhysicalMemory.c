/*
 * XREFs of ExtEnvFreePhysicalMemory @ 0x1405226CC
 * Callers:
 *     IvtAllocateContextTable @ 0x14052D9E0 (IvtAllocateContextTable.c)
 *     IvtFreeScalableModePasidTables @ 0x14052E768 (IvtFreeScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x140530DE0 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x140532200 (HsaFreeRemappingTableEntry.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpMmIsInsideHalVa @ 0x140509594 (HalpMmIsInsideHalVa.c)
 */

void __fastcall ExtEnvFreePhysicalMemory(__int64 a1, void *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  KIRQL v7; // al
  __int64 *v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rcx
  __int64 *v16; // rax
  bool v17; // [rsp+58h] [rbp+20h] BYREF

  if ( a4 <= 1 )
  {
    v5 = a3;
    v17 = 0;
    if ( (int)HalpMmIsInsideHalVa((unsigned __int64)a2, &v17) >= 0 && !v17 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&ExtEnvAllocationLock);
      v8 = (__int64 *)ExtEnvAllocationList;
      v9 = v7;
      while ( v8 != &ExtEnvAllocationList )
      {
        if ( (void *)v8[2] == a2 && v8[4] == v5 && *((_DWORD *)v8 + 12) == a4 )
        {
          MmFreeContiguousMemory(a2);
          v15 = *v8;
          v16 = (__int64 *)v8[1];
          if ( *(__int64 **)(*v8 + 8) != v8 || (__int64 *)*v16 != v8 )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          HalpMmAllocCtxFree(v15, (__int64)v8);
          break;
        }
        v8 = (__int64 *)*v8;
      }
      KxReleaseSpinLock(&ExtEnvAllocationLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v14 = (v13 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
  }
}
