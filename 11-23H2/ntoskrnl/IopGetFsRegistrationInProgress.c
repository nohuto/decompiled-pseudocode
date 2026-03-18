/*
 * XREFs of IopGetFsRegistrationInProgress @ 0x1405576A8
 * Callers:
 *     IoEnumerateRegisteredFiltersList @ 0x1407DBBD0 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1408568E0 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0760 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 */

char IopGetFsRegistrationInProgress()
{
  KIRQL v0; // al
  char v1; // bl

  v0 = KeAcquireQueuedSpinLock(0xAuLL);
  v1 = IopFsRegistrationInProgress;
  KeReleaseQueuedSpinLock(0xAuLL, v0);
  return v1;
}
