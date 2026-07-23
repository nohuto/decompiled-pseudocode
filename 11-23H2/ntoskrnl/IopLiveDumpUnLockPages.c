/*
 * XREFs of IopLiveDumpUnLockPages @ 0x14055C000
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x140A9C478 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025AA70 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}
