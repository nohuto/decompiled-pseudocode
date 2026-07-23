/*
 * XREFs of IoGetInitialStack @ 0x1409475E0
 * Callers:
 *     DifIoGetInitialStackWrapper @ 0x1405E0270 (DifIoGetInitialStackWrapper.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
