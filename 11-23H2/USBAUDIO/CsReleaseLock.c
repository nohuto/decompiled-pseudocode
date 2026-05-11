/*
 * XREFs of CsReleaseLock @ 0x1C000A320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsReleaseLock(PIO_CSQ Csq, KIRQL Irql)
{
  KeReleaseSpinLock((PKSPIN_LOCK)&Csq[1].Type, Irql);
}
