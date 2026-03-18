/*
 * XREFs of MmQuitNextSession @ 0x140884910
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x1403B6788 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x1403D62A0 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749540 (ObpProcessRemoveObjectQueue.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADB2FC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADB47C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
