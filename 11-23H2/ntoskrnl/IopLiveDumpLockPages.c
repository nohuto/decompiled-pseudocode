/*
 * XREFs of IopLiveDumpLockPages @ 0x14094EC50
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x140A9AD20 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025AA70 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}
