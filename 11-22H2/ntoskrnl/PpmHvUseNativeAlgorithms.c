/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1403819B0
 * Callers:
 *     PpmUpdateIdleStates @ 0x140822320 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x140822434 (PpmIdleRegisterDefaultStates.c)
 *     PoInitializePrcb @ 0x140A8D210 (PoInitializePrcb.c)
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
