/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x140B53104
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x1406E66AC (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x140766F60 (PopIsDirectedDripsEnabled.c)
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
  dword_140C2080C = v0;
  return 0LL;
}
