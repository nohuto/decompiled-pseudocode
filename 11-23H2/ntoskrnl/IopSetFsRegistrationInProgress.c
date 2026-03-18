/*
 * XREFs of IopSetFsRegistrationInProgress @ 0x1403C49A4
 * Callers:
 *     IoRegisterFileSystem @ 0x1408718B0 (IoRegisterFileSystem.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0760 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall IopSetFsRegistrationInProgress(char a1)
{
  KIRQL v2; // al

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  IopFsRegistrationInProgress = a1;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
}
