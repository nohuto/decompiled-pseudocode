/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x140381500
 * Callers:
 *     PpmUpdateIdleStates @ 0x1408200A0 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x140822478 (PpmIdleRegisterDefaultStates.c)
 *     PoInitializePrcb @ 0x140A8C9B0 (PoInitializePrcb.c)
 * Callees:
 *     <none>
 */

bool PpmHvUseNativeAlgorithms()
{
  char v0; // dl

  v0 = 0;
  if ( !HvlHypervisorConnected )
    return 1;
  if ( (HvlpFlags & 2) != 0 )
    return (HvlEnlightenments & 0x400) == 0;
  return v0;
}
