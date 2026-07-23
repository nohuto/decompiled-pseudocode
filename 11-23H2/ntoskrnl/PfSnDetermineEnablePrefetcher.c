/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x140866130
 * Callers:
 *     PfpParametersWatcher @ 0x140980380 (PfpParametersWatcher.c)
 *     PfSnBeginBootPhase @ 0x140A87910 (PfSnBeginBootPhase.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_140C64DF0 = 0LL;
}
