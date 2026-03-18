/*
 * XREFs of ViIrqlExAcquireFastMutex_Exit @ 0x140AE8470
 * Callers:
 *     <none>
 * Callees:
 *     VfKeIrqlLogRaise @ 0x140AD5CE0 (VfKeIrqlLogRaise.c)
 */

char *ViIrqlExAcquireFastMutex_Exit()
{
  return VfKeIrqlLogRaise(KeGetCurrentIrql(), 1);
}
