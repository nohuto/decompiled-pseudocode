/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x140A8B564
 * Callers:
 *     ViTargetAddToCounter @ 0x140A8B064 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140A8B190 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140A8B450 (ViTargetTrackContiguousMemory.c)
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
