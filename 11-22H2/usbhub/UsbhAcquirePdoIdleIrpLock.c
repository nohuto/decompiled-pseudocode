/*
 * XREFs of UsbhAcquirePdoIdleIrpLock @ 0x1C0022800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbhAcquirePdoIdleIrpLock(PIO_CSQ Csq, PKIRQL Irql)
{
  *Irql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Csq[1].Type);
}
