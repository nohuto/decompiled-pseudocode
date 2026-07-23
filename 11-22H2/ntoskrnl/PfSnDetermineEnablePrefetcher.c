/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x1408663C0
 * Callers:
 *     PfpParametersWatcher @ 0x140980230 (PfpParametersWatcher.c)
 *     PfSnBeginBootPhase @ 0x140A87910 (PfSnBeginBootPhase.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_140C64EF0 = 0LL;
}
