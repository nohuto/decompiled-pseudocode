/*
 * XREFs of ExpWriteTimeZoneBias @ 0x14083F28C
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x140821BA8 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x14083EB98 (ExpRefreshTimeZoneInformation.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 __fastcall ExpWriteTimeZoneBias(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
    v2 = (_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 592LL);
  else
    v2 = (_DWORD *)(MmWriteableSharedUserData + 32);
  v2[2] = a1[1];
  *v2 = *a1;
  result = (unsigned int)a1[1];
  v2[1] = result;
  return result;
}
