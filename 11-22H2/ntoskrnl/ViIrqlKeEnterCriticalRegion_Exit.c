/*
 * XREFs of ViIrqlKeEnterCriticalRegion_Exit @ 0x140AE9530
 * Callers:
 *     <none>
 * Callees:
 *     ViIrqlLogCRStackTrace @ 0x140AE9594 (ViIrqlLogCRStackTrace.c)
 */

__int64 ViIrqlKeEnterCriticalRegion_Exit()
{
  return ViIrqlLogCRStackTrace();
}
