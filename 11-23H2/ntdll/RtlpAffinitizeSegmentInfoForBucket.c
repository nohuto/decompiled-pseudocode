/*
 * XREFs of RtlpAffinitizeSegmentInfoForBucket @ 0x180073660
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D560 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180119F20 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x180029FB0 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18007386C (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 */

__int64 __fastcall RtlpAffinitizeSegmentInfoForBucket(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  int v4; // edi
  __int64 v5; // r15
  __int64 v6; // rsi
  int v7; // edi
  __int64 v8; // rax
  _WORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  signed __int32 v14; // ebp
  void *DeferredCriticalSectionEvent; // rsi
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 672) & 1) != 0 )
    return (unsigned int)-1073741823;
  v4 = RtlpAffinityState[0];
  if ( LODWORD(RtlpAffinityState[0]) <= 1 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 24) + 352LL));
    if ( *(_QWORD *)(a1 + 8 * v3 + 2224) )
    {
      v7 = -1073741302;
    }
    else
    {
      v5 = (unsigned int)(v4 - 1);
      v6 = v5;
      v7 = RtlpExtendLowFragHeapSegment(a1, 192 * v5, &v18);
      if ( v7 >= 0 )
      {
        v8 = v18;
        if ( (_DWORD)v5 )
        {
          v9 = (_WORD *)(v18 + 172);
          v10 = (_QWORD *)v18;
          v11 = a1 + 3312;
          do
          {
            *v10 = v11;
            v11 += 48LL;
            *v9 = v3;
            v10 += 24;
            v9 += 96;
            --v6;
          }
          while ( v6 );
        }
        *(_QWORD *)(a1 + 8 * v3 + 2224) = v8;
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 352LL);
    if ( (*(_DWORD *)(v12 + 12))-- == 1 )
    {
      *(_QWORD *)(v12 + 16) = 0LL;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), -1, -2);
      if ( v14 != -2 )
      {
        if ( (*(_BYTE *)(v12 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v12);
        DeferredCriticalSectionEvent = *(void **)(v12 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v12);
        v17 = 0;
        while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), (v14 & 2 | 1) + v14, v14) )
        {
          RtlBackoff(&v17);
          _m_prefetchw((const void *)(v12 + 8));
          v14 = *(_DWORD *)(v12 + 8);
        }
        if ( (v14 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v12, DeferredCriticalSectionEvent);
      }
    }
  }
  return (unsigned int)v7;
}
