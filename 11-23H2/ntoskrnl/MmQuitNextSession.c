/*
 * XREFs of MmQuitNextSession @ 0x140884B50
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x1403B6968 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x1403D6480 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749730 (ObpProcessRemoveObjectQueue.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADB2EC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADB46C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
