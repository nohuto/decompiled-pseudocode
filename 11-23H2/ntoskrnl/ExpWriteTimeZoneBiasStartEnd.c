/*
 * XREFs of ExpWriteTimeZoneBiasStartEnd @ 0x14083F5CC
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x14083EE98 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 */

_QWORD *__fastcall ExpWriteTimeZoneBiasStartEnd(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // r8

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = PsGetCurrentServerSiloGlobals();
    v7 = result[165];
    v5 = (_QWORD *)(v7 + 608);
    v6 = (_QWORD *)(v7 + 616);
  }
  else
  {
    result = (_QWORD *)MmWriteableSharedUserData;
    v5 = (_QWORD *)(MmWriteableSharedUserData + 968);
    v6 = (_QWORD *)(MmWriteableSharedUserData + 976);
  }
  *v5 = a1;
  *v6 = a2;
  return result;
}
