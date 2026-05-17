/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x180053710
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x180053BA8 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800FFFC0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlGetSuiteMask @ 0x1800504F0 (RtlGetSuiteMask.c)
 *     RtlpCreateLowFragHeap @ 0x18005347C (RtlpCreateLowFragHeap.c)
 *     RtlpExtendListLookup @ 0x180053A48 (RtlpExtendListLookup.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180053B0C (RtlpExtendFrontEndUsageArray.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(__int64 a1)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rdi
  bool v6; // zf
  signed __int32 v7; // r12d
  __int64 LowFragHeap; // rdi
  __int64 v9; // rdi
  signed __int32 v10; // r13d
  __int64 DeferredCriticalSectionEvent; // r15
  __int64 v12; // r12
  __int64 v14; // rdi
  signed __int32 v15; // r12d
  __int64 v16; // rsi
  char v17; // [rsp+20h] [rbp-58h]
  char v18; // [rsp+21h] [rbp-57h]
  int v19; // [rsp+24h] [rbp-54h]
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  v22 = a1;
  v18 = 0;
  v17 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v17 = 1;
    if ( *(_BYTE *)(a1 + 418) == 2 )
      v3 = *(_QWORD *)(a1 + 408);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v19 = 0;
    }
    else if ( *(_WORD *)(a1 + 416) )
    {
      v19 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 416) = 1;
      v18 = 1;
      v4 = (unsigned __int64)RtlpLargestLfhBlock >> 4;
      LOWORD(v4) = ((unsigned __int64)RtlpLargestLfhBlock >> 4) + 2;
      v19 = RtlpExtendFrontEndUsageArray(a1, v4);
      if ( v19 >= 0 )
      {
        RtlpExtendListLookup(a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 408) = 0LL;
        *(_BYTE *)(a1 + 418) = 0;
        v5 = *(_QWORD *)(a1 + 352);
        v6 = (*(_DWORD *)(v5 + 12))-- == 1;
        if ( v6 )
        {
          *(_QWORD *)(v5 + 16) = 0LL;
          v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), -1, -2);
          if ( v7 != -2 )
          {
            if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
              RtlpNotOwnerCriticalSection(v5);
            DeferredCriticalSectionEvent = *(_QWORD *)(v5 + 24);
            if ( !DeferredCriticalSectionEvent )
              DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v5);
            v20 = 0;
            while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), (v7 & 2 | 1) + v7, v7) )
            {
              RtlBackoff(&v20);
              _m_prefetchw((const void *)(v5 + 8));
              v7 = *(_DWORD *)(v5 + 8);
            }
            if ( (v7 & 2) != 0 )
              RtlpUnWaitCriticalSectionEx(v5, DeferredCriticalSectionEvent);
          }
        }
        LowFragHeap = RtlpCreateLowFragHeap(a1);
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        if ( LowFragHeap )
        {
          *(_QWORD *)(a1 + 408) = LowFragHeap;
          *(_WORD *)(a1 + 418) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)RtlpLargestLfhBlock >> 4;
        }
        else
        {
          v19 = -1073741801;
        }
        --*(_WORD *)(a1 + 416);
        v18 = 0;
        v17 = 0;
        v9 = *(_QWORD *)(a1 + 352);
        v6 = (*(_DWORD *)(v9 + 12))-- == 1;
        if ( v6 )
        {
          *(_QWORD *)(v9 + 16) = 0LL;
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), -1, -2);
          if ( v10 != -2 )
          {
            if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
              RtlpNotOwnerCriticalSection(v9);
            v12 = *(_QWORD *)(v9 + 24);
            if ( !v12 )
              v12 = RtlpCreateDeferredCriticalSectionEvent(v9);
            v21 = 0;
            while ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), (v10 & 2 | 1) + v10, v10) )
            {
              RtlBackoff(&v21);
              _m_prefetchw((const void *)(v9 + 8));
              v10 = *(_DWORD *)(v9 + 8);
            }
            if ( (v10 & 2) != 0 )
              RtlpUnWaitCriticalSectionEx(v9, v12);
          }
        }
      }
    }
  }
  else
  {
    v19 = -1073741811;
  }
  if ( v17 )
  {
    v14 = *(_QWORD *)(a1 + 352);
    v6 = (*(_DWORD *)(v14 + 12))-- == 1;
    if ( v6 )
    {
      *(_QWORD *)(v14 + 16) = 0LL;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), -1, -2);
      if ( v15 != -2 )
      {
        if ( (*(_BYTE *)(v14 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v14);
        v16 = *(_QWORD *)(v14 + 24);
        if ( !v16 )
          v16 = RtlpCreateDeferredCriticalSectionEvent(v14);
        LODWORD(v22) = 0;
        while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), (v15 & 2 | 1) + v15, v15) )
        {
          RtlBackoff((unsigned int *)&v22);
          _m_prefetchw((const void *)(v14 + 8));
          v15 = *(_DWORD *)(v14 + 8);
        }
        if ( (v15 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v14, v16);
      }
    }
  }
  if ( v18 )
    --*(_WORD *)(a1 + 416);
  return (unsigned int)v19;
}
