/*
 * XREFs of ExpWriteTimeZoneBias @ 0x1408365B8
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140864D14 (ExInitializeUtcTimeZoneBias.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ExpWriteTimeZoneBias(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
    v2 = (_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 592LL);
  else
    v2 = (_DWORD *)0xFFFFF78000000020LL;
  v2[2] = a1[1];
  *v2 = *a1;
  result = (unsigned int)a1[1];
  v2[1] = result;
  return result;
}
