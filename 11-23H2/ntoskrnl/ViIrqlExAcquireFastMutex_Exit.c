/*
 * XREFs of ViIrqlExAcquireFastMutex_Exit @ 0x140AE8460
 * Callers:
 *     <none>
 * Callees:
 *     VfKeIrqlLogRaise @ 0x140AD5CD0 (VfKeIrqlLogRaise.c)
 */

char *ViIrqlExAcquireFastMutex_Exit()
{
  return VfKeIrqlLogRaise(KeGetCurrentIrql(), 1);
}
