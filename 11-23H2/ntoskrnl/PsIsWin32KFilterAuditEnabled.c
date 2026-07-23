/*
 * XREFs of PsIsWin32KFilterAuditEnabled @ 0x140367F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterAuditEnabled()
{
  return ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 0x8000) != 0;
}
