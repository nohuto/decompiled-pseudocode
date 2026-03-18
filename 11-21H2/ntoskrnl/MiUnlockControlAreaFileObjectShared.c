/*
 * XREFs of MiUnlockControlAreaFileObjectShared @ 0x14027E7A4
 * Callers:
 *     MiTrimSection @ 0x14027E174 (MiTrimSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

$CEA84C04E3712D858E5667A507841A2A *__fastcall MiUnlockControlAreaFileObjectShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v2; // rdi
  $CEA84C04E3712D858E5667A507841A2A *result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = a1 + 104;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = ($CEA84C04E3712D858E5667A507841A2A *)KeAbPostRelease(v2);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)result->ApcState.ApcListHead[0].Flink != result )
      return ($CEA84C04E3712D858E5667A507841A2A *)KiCheckForKernelApcDelivery();
  }
  return result;
}
