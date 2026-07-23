/*
 * XREFs of ViIrqlExTryToAcquireFastMutex_Exit @ 0x140AE8480
 * Callers:
 *     <none>
 * Callees:
 *     VfKeIrqlLogRaise @ 0x140AD5CD0 (VfKeIrqlLogRaise.c)
 */

char *__fastcall ViIrqlExTryToAcquireFastMutex_Exit(__int64 a1)
{
  char *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return VfKeIrqlLogRaise(KeGetCurrentIrql(), 1);
  return result;
}
