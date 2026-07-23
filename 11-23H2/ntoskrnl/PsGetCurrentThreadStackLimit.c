/*
 * XREFs of PsGetCurrentThreadStackLimit @ 0x1405A41B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackLimit()
{
  return KeGetCurrentThread()->StackLimit;
}
