/*
 * XREFs of NdisDprReleaseSpinLock @ 0x1C00C3230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisDprReleaseSpinLock(KSPIN_LOCK *a1)
{
  KeReleaseSpinLockFromDpcLevel(a1);
}
