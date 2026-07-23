/*
 * XREFs of KeInitializeSpinLock @ 0x14022EFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeSpinLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
