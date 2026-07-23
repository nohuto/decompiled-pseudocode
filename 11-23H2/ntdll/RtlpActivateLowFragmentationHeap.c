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

__int64 __fastcall RtlpActivateLowFragmentationHeap(PRTL_CRITICAL_SECTION *HeapHandle)
{
  PRTL_CRITICAL_SECTION v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  signed __int32 v6; // r12d
  _RTL_CRITICAL_SECTION *LowFragHeap; // rdi
  __int64 v8; // rdi
  int v9; // eax
  signed __int32 v10; // r13d
  void *DeferredCriticalSectionEvent; // r15
  void *v12; // r12
  __int64 v14; // rdi
  signed __int32 v16; // r12d
  void *v17; // rsi
  char v18; // [rsp+20h] [rbp-58h]
  char v19; // [rsp+21h] [rbp-57h]
  int v20; // [rsp+24h] [rbp-54h]
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+18h] BYREF
  PRTL_CRITICAL_SECTION *v23; // [rsp+98h] [rbp+20h] BYREF

  v23 = HeapHandle;
  v19 = 0;
  v18 = 0;
  if ( ((_DWORD)HeapHandle[14] & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(HeapHandle[44]);
    v18 = 1;
    if ( *((_BYTE *)HeapHandle + 418) == 2 )
      v3 = HeapHandle[51];
    else
      v3 = 0LL;
    if ( v3 )
    {
      v20 = 0;
    }
    else if ( *((_WORD *)HeapHandle + 208) )
    {
      v20 = -1073741794;
    }
    else
    {
      *((_WORD *)HeapHandle + 208) = 1;
      v19 = 1;
      v20 = RtlpExtendFrontEndUsageArray(HeapHandle);
      if ( v20 >= 0 )
      {
        RtlpExtendListLookup(HeapHandle);
        HeapHandle[51] = 0LL;
        *((_BYTE *)HeapHandle + 418) = 0;
        v4 = (__int64)HeapHandle[44];
        v5 = *(_DWORD *)(v4 + 12) - 1;
        *(_DWORD *)(v4 + 12) = v5;
        if ( !v5 )
        {
          *(_QWORD *)(v4 + 16) = 0LL;
          v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), -1, -2);
          if ( v6 != -2 )
          {
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
              RtlpNotOwnerCriticalSection(v4);
            DeferredCriticalSectionEvent = *(void **)(v4 + 24);
            if ( !DeferredCriticalSectionEvent )
              DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v4);
            v21 = 0;
            while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), (v6 & 2 | 1) + v6, v6) )
            {
              RtlBackoff(&v21);
              _m_prefetchw((const void *)(v4 + 8));
              v6 = *(_DWORD *)(v4 + 8);
            }
            if ( (v6 & 2) != 0 )
              RtlpUnWaitCriticalSectionEx(v4, DeferredCriticalSectionEvent);
          }
        }
        LowFragHeap = (_RTL_CRITICAL_SECTION *)RtlpCreateLowFragHeap((__int64)HeapHandle);
        RtlEnterCriticalSection(HeapHandle[44]);
        if ( LowFragHeap )
        {
          HeapHandle[51] = LowFragHeap;
          *((_WORD *)HeapHandle + 209) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            HeapHandle[22] = (PRTL_CRITICAL_SECTION)((unsigned __int64)RtlpLargestLfhBlock >> 4);
        }
        else
        {
          v20 = -1073741801;
        }
        --*((_WORD *)HeapHandle + 208);
        v19 = 0;
        v18 = 0;
        v8 = (__int64)HeapHandle[44];
        v9 = *(_DWORD *)(v8 + 12) - 1;
        *(_DWORD *)(v8 + 12) = v9;
        if ( !v9 )
        {
          *(_QWORD *)(v8 + 16) = 0LL;
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), -1, -2);
          if ( v10 != -2 )
          {
            if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
              RtlpNotOwnerCriticalSection(v8);
            v12 = *(void **)(v8 + 24);
            if ( !v12 )
              v12 = (void *)RtlpCreateDeferredCriticalSectionEvent(v8);
            v22 = 0;
            while ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), (v10 & 2 | 1) + v10, v10) )
            {
              RtlBackoff(&v22);
              _m_prefetchw((const void *)(v8 + 8));
              v10 = *(_DWORD *)(v8 + 8);
            }
            if ( (v10 & 2) != 0 )
              RtlpUnWaitCriticalSectionEx(v8, v12);
          }
        }
      }
    }
  }
  else
  {
    v20 = -1073741811;
  }
  if ( v18 )
  {
    v14 = (__int64)HeapHandle[44];
    if ( (*(_DWORD *)(v14 + 12))-- == 1 )
    {
      *(_QWORD *)(v14 + 16) = 0LL;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), -1, -2);
      if ( v16 != -2 )
      {
        if ( (*(_BYTE *)(v14 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v14);
        v17 = *(void **)(v14 + 24);
        if ( !v17 )
          v17 = (void *)RtlpCreateDeferredCriticalSectionEvent(v14);
        LODWORD(v23) = 0;
        while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), (v16 & 2 | 1) + v16, v16) )
        {
          RtlBackoff((unsigned int *)&v23);
          _m_prefetchw((const void *)(v14 + 8));
          v16 = *(_DWORD *)(v14 + 8);
        }
        if ( (v16 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v14, v17);
      }
    }
  }
  if ( v19 )
    --*((_WORD *)HeapHandle + 208);
  return (unsigned int)v20;
}
