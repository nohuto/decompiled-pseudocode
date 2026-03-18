/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x140ACBEC4
 * Callers:
 *     ViTargetAddToCounter @ 0x140ACB9C4 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140ACBAF0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140ACBC0C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140ACBDB0 (ViTargetTrackContiguousMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 ViTargetUpdateTreeAllowed()
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
    return ViTargetInitialized != 0;
  return result;
}
