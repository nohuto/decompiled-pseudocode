/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x14022A110
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x140359548 (ExpReleaseFastMutexContended.c)
 */

$CEA84C04E3712D858E5667A507841A2A *__fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(
        ULONG_PTR BugCheckParameter2)
{
  unsigned __int32 v2; // eax
  $CEA84C04E3712D858E5667A507841A2A *result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, 1, 0);
  if ( v2 )
    ExpReleaseFastMutexContended(BugCheckParameter2, v2);
  result = ($CEA84C04E3712D858E5667A507841A2A *)KeAbPostRelease(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->KernelApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)result->ApcState.ApcListHead[0].Flink != result
      && !CurrentThread->SpecialApcDisable )
    {
      return ($CEA84C04E3712D858E5667A507841A2A *)KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
