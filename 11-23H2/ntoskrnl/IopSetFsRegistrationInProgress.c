/*
 * XREFs of IopSetFsRegistrationInProgress @ 0x1403C4B84
 * Callers:
 *     IoRegisterFileSystem @ 0x140871AF0 (IoRegisterFileSystem.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall IopSetFsRegistrationInProgress(char a1)
{
  KIRQL v2; // al

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  IopFsRegistrationInProgress = a1;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
}
