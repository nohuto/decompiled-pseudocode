/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x1405A3CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *PsGetCurrentThreadStackBase()
{
  return KeGetCurrentThread()->StackBase;
}
