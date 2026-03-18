/*
 * XREFs of PpmPerfControlExecuteAction @ 0x1403564BC
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x140350F50 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfCommitPerformance @ 0x140356480 (PpmPerfCommitPerformance.c)
 *     PpmPerfReadFeedback @ 0x1403564A0 (PpmPerfReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
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
