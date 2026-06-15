/*
 * XREFs of ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x140089000
 * Callers:
 *     <none>
 * Callees:
 *     ?DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ @ 0x140088268 (-DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140088EC8 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x140089610 (McTemplateU0pqx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140089C70 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Reset(CCrossProcessControl *this)
{
  int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 164LL);
    if ( CCrossProcessBaseEndpoint::IsValidFlags(*((CCrossProcessBaseEndpoint **)this + 1), v5, v3, v4) )
    {
      if ( (v5 & 1) != 0 )
      {
        v2 = -2005139434;
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 24LL), 0LL);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 16LL), 0LL);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 152LL), 0LL);
        *(_QWORD *)(*((_QWORD *)this + 1) + 184LL) = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 1) + 192LL) = 0LL;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 160LL), 1);
        CCrossProcessBaseEndpoint::DrainAndResetQueue(*((CCrossProcessBaseEndpoint **)this + 1));
        if ( (byte_1400C1841 & 4) != 0 )
          McTemplateU0pqx_EventWriteTransfer(v7, v6, this, 8LL);
      }
    }
    else
    {
      v2 = -2005139387;
    }
  }
  else
  {
    v2 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v2 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessControl::Reset", 0x5FCu, v2);
  return (unsigned int)v2;
}
