/*
 * XREFs of DbgkpResumeProcess @ 0x1409395A8
 * Callers:
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 * Callees:
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 */

void __fastcall DbgkpResumeProcess(ULONG_PTR a1)
{
  PsThawMultiProcess(a1, 0LL, 1u);
  KeLeaveCriticalRegion();
}
