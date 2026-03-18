/*
 * XREFs of IoGetInitialStack @ 0x1409473E0
 * Callers:
 *     DifIoGetInitialStackWrapper @ 0x1405DFD00 (DifIoGetInitialStackWrapper.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
