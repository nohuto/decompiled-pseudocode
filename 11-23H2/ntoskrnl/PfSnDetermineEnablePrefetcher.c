/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x140865EF0
 * Callers:
 *     PfpParametersWatcher @ 0x140980180 (PfpParametersWatcher.c)
 *     PfSnBeginBootPhase @ 0x140A87910 (PfSnBeginBootPhase.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( (_DWORD)InitSafeBootMode )
    qword_140C64DF0 = 0LL;
}
