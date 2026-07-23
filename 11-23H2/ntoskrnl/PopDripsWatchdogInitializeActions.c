/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x140B968BC
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x1407E6004 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x140869EE4 (PopIsDirectedDripsEnabled.c)
 */

__int64 PopDripsWatchdogInitializeActions()
{
  int v0; // edx
  int v1; // eax

  if ( PopIsDirectedDripsEnabled() )
  {
    v1 = PopCapturePlatformRole();
    if ( v1 != 2 && v1 != 8 )
      v0 |= 1u;
  }
  dword_140C398EC = v0;
  return 0LL;
}
