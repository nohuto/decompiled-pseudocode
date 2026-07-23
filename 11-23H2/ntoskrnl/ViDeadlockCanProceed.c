/*
 * XREFs of ViDeadlockCanProceed @ 0x140AC078A
 * Callers:
 *     VfDeadlockDeleteMemoryRange @ 0x140AC06DC (VfDeadlockDeleteMemoryRange.c)
 *     VfDeadlockAcquireResource @ 0x140AD6DCC (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140AD7758 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD7EEC (VfDeadlockReleaseResource.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022ECE0 (KeAreInterruptsEnabled.c)
 *     ViDeadlockCheckStackLimits @ 0x140AD8CFC (ViDeadlockCheckStackLimits.c)
 */

_BOOL8 __fastcall ViDeadlockCanProceed(LONG *a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( ViDeadlockDetectionEnabled )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 4 && KeGetCurrentIrql() <= 2u && KeAreInterruptsEnabled() )
    {
      if ( ViDeadlockGlobals )
      {
        ViDeadlockCheckStackLimits();
        if ( a1 != &ViDeadlockDatabaseLock && (struct _KTHREAD *)ViDeadlockDatabaseOwner != KeGetCurrentThread() )
          return 1;
      }
    }
  }
  return result;
}
