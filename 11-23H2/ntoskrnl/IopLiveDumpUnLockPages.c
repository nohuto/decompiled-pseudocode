/*
 * XREFs of IopLiveDumpUnLockPages @ 0x14055B940
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x140A9C608 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A7E0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}
