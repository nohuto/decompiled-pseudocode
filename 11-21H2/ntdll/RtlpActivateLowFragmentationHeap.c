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

__int64 __fastcall RtlpActivateLowFragmentationHeap(PRTL_CRITICAL_SECTION *HeapHandle)
{
  PRTL_CRITICAL_SECTION v3; // rax
  PRTL_CRITICAL_SECTION v4; // rdi
  bool v5; // zf
  signed __int32 LockCount; // r12d
  _RTL_CRITICAL_SECTION *LowFragHeap; // rdi
  PRTL_CRITICAL_SECTION v8; // rdi
  signed __int32 v9; // r13d
  __int64 LockSemaphore; // r15
  __int64 DeferredCriticalSectionEvent; // r12
  PRTL_CRITICAL_SECTION v13; // rdi
  signed __int32 v14; // r12d
  __int64 v15; // rsi
  char v16; // [rsp+20h] [rbp-58h]
  char v17; // [rsp+21h] [rbp-57h]
  int v18; // [rsp+24h] [rbp-54h]
  unsigned int v19; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+18h] BYREF
  PRTL_CRITICAL_SECTION *v21; // [rsp+98h] [rbp+20h] BYREF

  v21 = HeapHandle;
  v17 = 0;
  v16 = 0;
  if ( ((_DWORD)HeapHandle[14] & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(HeapHandle[44]);
    v16 = 1;
    if ( *((_BYTE *)HeapHandle + 418) == 2 )
      v3 = HeapHandle[51];
    else
      v3 = 0LL;
    if ( v3 )
    {
      v18 = 0;
    }
    else if ( *((_WORD *)HeapHandle + 208) )
    {
      v18 = -1073741794;
    }
    else
    {
      *((_WORD *)HeapHandle + 208) = 1;
      v17 = 1;
      v18 = RtlpExtendFrontEndUsageArray(HeapHandle);
      if ( v18 >= 0 )
      {
        RtlpExtendListLookup(HeapHandle);
        HeapHandle[51] = 0LL;
        *((_BYTE *)HeapHandle + 418) = 0;
        v4 = HeapHandle[44];
        v5 = v4->RecursionCount-- == 1;
        if ( v5 )
        {
          v4->OwningThread = 0LL;
          LockCount = _InterlockedCompareExchange(&v4->LockCount, -1, -2);
          if ( LockCount != -2 )
          {
            if ( (v4->LockCount & 1) != 0 )
              RtlpNotOwnerCriticalSection(v4);
            LockSemaphore = (__int64)v4->LockSemaphore;
            if ( !LockSemaphore )
              LockSemaphore = RtlpCreateDeferredCriticalSectionEvent(v4);
            v19 = 0;
            while ( LockCount != _InterlockedCompareExchange(&v4->LockCount, (LockCount & 2 | 1) + LockCount, LockCount) )
            {
              RtlBackoff(&v19);
              _m_prefetchw(&v4->LockCount);
              LockCount = v4->LockCount;
            }
            if ( (LockCount & 2) != 0 )
              RtlpUnWaitCriticalSectionEx(v4, LockSemaphore);
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
          v18 = -1073741801;
        }
        --*((_WORD *)HeapHandle + 208);
        v17 = 0;
        v16 = 0;
        v8 = HeapHandle[44];
        v5 = v8->RecursionCount-- == 1;
        if ( v5 )
        {
          v8->OwningThread = 0LL;
          v9 = _InterlockedCompareExchange(&v8->LockCount, -1, -2);
          if ( v9 != -2 )
          {
            if ( (v8->LockCount & 1) != 0 )
              RtlpNotOwnerCriticalSection(v8);
            DeferredCriticalSectionEvent = (__int64)v8->LockSemaphore;
            if ( !DeferredCriticalSectionEvent )
              DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v8);
            v20 = 0;
            while ( v9 != _InterlockedCompareExchange(&v8->LockCount, (v9 & 2 | 1) + v9, v9) )
            {
              RtlBackoff(&v20);
              _m_prefetchw(&v8->LockCount);
              v9 = v8->LockCount;
            }
            if ( (v9 & 2) != 0 )
              RtlpUnWaitCriticalSectionEx(v8, DeferredCriticalSectionEvent);
          }
        }
      }
    }
  }
  else
  {
    v18 = -1073741811;
  }
  if ( v16 )
  {
    v13 = HeapHandle[44];
    v5 = v13->RecursionCount-- == 1;
    if ( v5 )
    {
      v13->OwningThread = 0LL;
      v14 = _InterlockedCompareExchange(&v13->LockCount, -1, -2);
      if ( v14 != -2 )
      {
        if ( (v13->LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v13);
        v15 = (__int64)v13->LockSemaphore;
        if ( !v15 )
          v15 = RtlpCreateDeferredCriticalSectionEvent(v13);
        LODWORD(v21) = 0;
        while ( v14 != _InterlockedCompareExchange(&v13->LockCount, (v14 & 2 | 1) + v14, v14) )
        {
          RtlBackoff((unsigned int *)&v21);
          _m_prefetchw(&v13->LockCount);
          v14 = v13->LockCount;
        }
        if ( (v14 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v13, v15);
      }
    }
  }
  if ( v17 )
    --*((_WORD *)HeapHandle + 208);
  return (unsigned int)v18;
}
