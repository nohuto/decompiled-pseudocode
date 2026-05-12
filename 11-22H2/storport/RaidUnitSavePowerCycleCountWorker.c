/*
 * XREFs of RaidUnitSavePowerCycleCountWorker @ 0x1C0014920
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C0015EC4 (RaidUnitSavePowerCycleCount.c)
 */

void __fastcall RaidUnitSavePowerCycleCountWorker(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  RaidUnitSavePowerCycleCount(Context);
  Context[114] &= ~2u;
  RaUnitReleaseRemoveLock((__int64)Context);
  IoFreeWorkItem(IoWorkItem);
}
