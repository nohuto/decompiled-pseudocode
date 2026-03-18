/*
 * XREFs of PidNodeCompare @ 0x1409ECDB0
 * Callers:
 *     EtwpDemuxPrivateTraceHandle @ 0x1409EC4D0 (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EC5E4 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1409EC85C (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PidNodeCompare(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx

  v2 = *a1;
  v3 = *(_DWORD *)(a2 + 24);
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
