/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x18004997C
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x18004A524 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801010A0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x180029FB0 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpCreateLowFragHeap @ 0x180049364 (RtlpCreateLowFragHeap.c)
 *     RtlGetSuiteMask @ 0x18004A400 (RtlGetSuiteMask.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18004A488 (RtlpExtendFrontEndUsageArray.c)
 *     RtlpExtendListLookup @ 0x18004A628 (RtlpExtendListLookup.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(__int64 a1)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rdi
  int v6; // eax
  signed __int32 v7; // r12d
  __int64 LowFragHeap; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // eax
  signed __int32 v12; // r13d
  __int64 DeferredCriticalSectionEvent; // r15
  __int64 v14; // r12
  __int64 v16; // rdi
  signed __int32 v18; // r12d
  __int64 v19; // rsi
  char v20; // [rsp+20h] [rbp-58h]
  char v21; // [rsp+21h] [rbp-57h]
  int v22; // [rsp+24h] [rbp-54h]
  unsigned int v23; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+90h] [rbp+18h] BYREF
  __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  v25 = a1;
  v21 = 0;
  v20 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v20 = 1;
    if ( *(_BYTE *)(a1 + 418) == 2 )
      v3 = *(_QWORD *)(a1 + 408);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v22 = 0;
    }
    else if ( *(_WORD *)(a1 + 416) )
    {
      v22 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 416) = 1;
      v21 = 1;
      v4 = (unsigned __int64)RtlpLargestLfhBlock >> 4;
      LOWORD(v4) = ((unsigned __int64)RtlpLargestLfhBlock >> 4) + 2;
      v22 = RtlpExtendFrontEndUsageArray(a1, v4);
      if ( v22 >= 0 )
      {
        RtlpExtendListLookup(a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 408) = 0LL;
        *(_BYTE *)(a1 + 418) = 0;
        v5 = *(_QWORD *)(a1 + 352);
        v6 = *(_DWORD *)(v5 + 12) - 1;
        *(_DWORD *)(v5 + 12) = v6;
        if ( !v6 )
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
            v23 = 0;
            while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), (v7 & 2 | 1) + v7, v7) )
            {
              RtlBackoff(&v23);
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
          if ( (RtlGetSuiteMask(v9) & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)RtlpLargestLfhBlock >> 4;
        }
        else
        {
          v22 = -1073741801;
        }
        --*(_WORD *)(a1 + 416);
        v21 = 0;
        v20 = 0;
        v10 = *(_QWORD *)(a1 + 352);
        v11 = *(_DWORD *)(v10 + 12) - 1;
        *(_DWORD *)(v10 + 12) = v11;
        if ( !v11 )
        {
          *(_QWORD *)(v10 + 16) = 0LL;
          v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), -1, -2);
          if ( v12 != -2 )
          {
            if ( (*(_BYTE *)(v10 + 8) & 1) != 0 )
              RtlpNotOwnerCriticalSection(v10);
            v14 = *(_QWORD *)(v10 + 24);
            if ( !v14 )
              v14 = RtlpCreateDeferredCriticalSectionEvent(v10);
            v24 = 0;
            while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), (v12 & 2 | 1) + v12, v12) )
            {
              RtlBackoff(&v24);
              _m_prefetchw((const void *)(v10 + 8));
              v12 = *(_DWORD *)(v10 + 8);
            }
            if ( (v12 & 2) != 0 )
              RtlpUnWaitCriticalSectionEx(v10, v14);
          }
        }
      }
    }
  }
  else
  {
    v22 = -1073741811;
  }
  if ( v20 )
  {
    v16 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v16 + 12))-- == 1 )
    {
      *(_QWORD *)(v16 + 16) = 0LL;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), -1, -2);
      if ( v18 != -2 )
      {
        if ( (*(_BYTE *)(v16 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v16);
        v19 = *(_QWORD *)(v16 + 24);
        if ( !v19 )
          v19 = RtlpCreateDeferredCriticalSectionEvent(v16);
        LODWORD(v25) = 0;
        while ( v18 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), (v18 & 2 | 1) + v18, v18) )
        {
          RtlBackoff((unsigned int *)&v25);
          _m_prefetchw((const void *)(v16 + 8));
          v18 = *(_DWORD *)(v16 + 8);
        }
        if ( (v18 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v16, v19);
      }
    }
  }
  if ( v21 )
    --*(_WORD *)(a1 + 416);
  return (unsigned int)v22;
}
