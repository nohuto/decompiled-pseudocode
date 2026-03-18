/*
 * XREFs of PsGetCurrentThreadStackLimit @ 0x1405A3CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackLimit()
{
  return KeGetCurrentThread()->StackLimit;
}
