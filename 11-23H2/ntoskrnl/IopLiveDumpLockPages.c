/*
 * XREFs of IopLiveDumpLockPages @ 0x14094EA50
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x140A9AEB0 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A7E0 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}
