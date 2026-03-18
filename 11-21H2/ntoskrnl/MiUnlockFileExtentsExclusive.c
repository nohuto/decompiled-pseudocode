/*
 * XREFs of MiUnlockFileExtentsExclusive @ 0x140970990
 * Callers:
 *     MiInsertCopyExtents @ 0x14059F6F4 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14059FC8C (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x140970668 (MiDeleteFileExtentList.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char MiUnlockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx
  $CEA84C04E3712D858E5667A507841A2A *v1; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F468, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F468);
  LOBYTE(v1) = KeAbPostRelease((ULONG_PTR)&qword_140C4F468);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v1 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v1->ApcState.ApcListHead[0].Flink != v1 )
      LOBYTE(v1) = KiCheckForKernelApcDelivery();
  }
  return (char)v1;
}
