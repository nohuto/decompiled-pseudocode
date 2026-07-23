/*
 * XREFs of MmLockLoadedModuleListShared @ 0x140339C30
 * Callers:
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     MiAddWorkingSetEntries @ 0x14026BFB0 (MiAddWorkingSetEntries.c)
 *     RtlpxLookupFunctionTable @ 0x1402A3F10 (RtlpxLookupFunctionTable.c)
 *     MiIsDriverPage @ 0x140339B50 (MiIsDriverPage.c)
 *     RtlPcToFileName @ 0x1403AA570 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x14063440C (MiIsAddressInDriverView.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListShared(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v3; // dl
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    v3 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v3 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v3 == 15 )
          LODWORD(v5) = 0x8000;
        else
          v5 = (-1LL << (v3 + 1)) & 0xFFFC;
        SchedulerAssist[5] |= v5;
      }
    }
  }
  ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
  *a1 = CurrentIrql;
}
