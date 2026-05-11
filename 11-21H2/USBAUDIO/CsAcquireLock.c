/*
 * XREFs of CsAcquireLock @ 0x1C0002A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CsAcquireLock(PIO_CSQ Csq, PKIRQL Irql)
{
  *Irql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Csq[1].Type);
}
