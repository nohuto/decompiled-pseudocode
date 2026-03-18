/*
 * XREFs of ExpWriteTimeZoneBiasStartEnd @ 0x14083656C
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *__fastcall ExpWriteTimeZoneBiasStartEnd(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // r8
  __int64 v6; // r8

  if ( PsIsCurrentThreadInServerSilo() )
  {
    v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 165);
    result = (_QWORD *)(v6 + 608);
    v5 = (_QWORD *)(v6 + 616);
  }
  else
  {
    result = (_QWORD *)0xFFFFF780000003C8LL;
    v5 = (_QWORD *)0xFFFFF780000003D0LL;
  }
  *result = a1;
  *v5 = a2;
  return result;
}
