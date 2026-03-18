/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x140290C18
 * Callers:
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiSessionInsertImage @ 0x14020AE64 (MiSessionInsertImage.c)
 *     RtlInsertInvertedFunctionTable @ 0x140290900 (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x1402909C8 (MiProcessLoaderEntry.c)
 *     MiUpdateDriverLoadInProgress @ 0x140290BA8 (MiUpdateDriverLoadInProgress.c)
 *     RtlRemoveInvertedFunctionTable @ 0x140369C60 (RtlRemoveInvertedFunctionTable.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     MiShowBadMapper @ 0x1406310BC (MiShowBadMapper.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListExclusive(unsigned __int8 *a1)
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
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v3 <= 0xFu )
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
  ExAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
  *a1 = CurrentIrql;
}
