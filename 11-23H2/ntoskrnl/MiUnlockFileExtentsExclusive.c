/*
 * XREFs of MiUnlockFileExtentsExclusive @ 0x140A341A4
 * Callers:
 *     MiInsertCopyExtents @ 0x14063DE1C (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14063E3CC (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x140A33E10 (MiDeleteFileExtentList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 */

char MiUnlockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx
  $C71981A45BEB2B45F82C232A7085991E *v1; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C658A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C658A8);
  LOBYTE(v1) = KeAbPostRelease((ULONG_PTR)&qword_140C658A8);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v1 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v1->ApcState.ApcListHead[0].Flink != v1 )
      LOBYTE(v1) = KiCheckForKernelApcDelivery();
  }
  return (char)v1;
}
