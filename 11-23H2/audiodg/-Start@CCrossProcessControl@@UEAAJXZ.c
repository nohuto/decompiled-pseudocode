/*
 * XREFs of ?Start@CCrossProcessControl@@UEAAJXZ @ 0x140096140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x14007AC44 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140095DD0 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x1400963A0 (McTemplateU0pqx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096940 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Start(CCrossProcessControl *this)
{
  int v2; // ebx
  int v3; // edx
  int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx

  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 72LL))(*((_QWORD *)this + 1));
    if ( v2 >= 0 )
    {
      AERTLockZoneHeap(*(void **)(*((_QWORD *)this + 1) + 144LL), v3, v4);
      v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 72LL) + 164LL);
      if ( CCrossProcessBaseEndpoint::IsValidFlags(*((CCrossProcessBaseEndpoint **)this + 1), v5) )
      {
        if ( (v5 & 1) != 0 )
        {
          v2 = -2005139434;
        }
        else
        {
          v2 = 0;
          v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 72LL);
          _InterlockedOr((volatile signed __int32 *)(v6 + 164), 1u);
          v7 = (unsigned int)_InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 160LL), 1);
          if ( (byte_1400CF981 & 4) != 0 )
            McTemplateU0pqx_EventWriteTransfer(v6, v7, this, 6LL);
        }
      }
      else
      {
        v2 = -2005139387;
      }
    }
  }
  else
  {
    v2 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v2 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessControl::Start", 0x63Au, v2);
  return (unsigned int)v2;
}
