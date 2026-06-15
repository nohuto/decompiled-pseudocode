/*
 * XREFs of ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x140089380
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14006E4F8 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140088EC8 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x140089610 (McTemplateU0pqx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140089C70 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Stop(CCrossProcessControl *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ebx
  unsigned int v5; // ebx
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 164LL);
    if ( CCrossProcessBaseEndpoint::IsValidFlags(*((CCrossProcessBaseEndpoint **)this + 1), v5, v2, v3) )
    {
      if ( (v5 & 1) != 0 )
      {
        v4 = 0;
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 164LL), 0xFFFFFFFC);
        AERTUnlockZoneHeap(
          *(void **)(*((_QWORD *)this + 1) + 144LL),
          _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 160LL), 1),
          v6);
        if ( (byte_1400C1841 & 4) != 0 )
          McTemplateU0pqx_EventWriteTransfer(v8, v7, this, 7LL);
      }
      else
      {
        v4 = -2005139433;
      }
    }
    else
    {
      v4 = -2005139387;
    }
  }
  else
  {
    v4 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v4 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessControl::Stop", 0x66Fu, v4);
  return (unsigned int)v4;
}
