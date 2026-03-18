/*
 * XREFs of IopLiveDumpLockPages @ 0x14093CC0C
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x140A660C0 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}
