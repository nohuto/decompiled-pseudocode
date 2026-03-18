/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x140B978BC
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x1407E62B4 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x14086A174 (PopIsDirectedDripsEnabled.c)
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
  dword_140C3996C = v0;
  return 0LL;
}
