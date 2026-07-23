/*
 * XREFs of PpmPerfControlExecuteAction @ 0x14035665C
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x1403510F0 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfCommitPerformance @ 0x140356620 (PpmPerfCommitPerformance.c)
 *     PpmPerfReadFeedback @ 0x140356640 (PpmPerfReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  char v1; // bl

  v1 = 0;
  if ( !a1 )
    return 1;
  a1(PpmPerfControlActionCallback);
  return v1;
}
