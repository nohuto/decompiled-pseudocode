/*
 * XREFs of DbgkpResumeProcess @ 0x1409393A8
 * Callers:
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 * Callees:
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 */

void __fastcall DbgkpResumeProcess(ULONG_PTR a1)
{
  PsThawMultiProcess(a1, 0LL, 1u);
  KeLeaveCriticalRegion();
}
