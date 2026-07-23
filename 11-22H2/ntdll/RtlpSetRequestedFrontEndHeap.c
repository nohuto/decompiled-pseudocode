/*
 * XREFs of RtlpSetRequestedFrontEndHeap @ 0x18007CC74
 * Callers:
 *     RtlSetHeapInformation @ 0x18007CB90 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpSetRequestedFrontEndHeap(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  _BYTE *v6; // r14
  signed __int32 v7; // r15d
  void *DeferredCriticalSectionEvent; // r10
  int v9; // eax
  __int64 v10; // rbx
  _BYTE *v12; // rsi
  signed __int32 v13; // r14d
  signed __int32 LockCount; // ebx
  void *LockSemaphore; // r10
  int v17; // eax
  void *v18; // r10
  int v19; // eax
  signed __int32 v20[8]; // [rsp+38h] [rbp-58h] BYREF
  char v21; // [rsp+58h] [rbp-38h]
  unsigned int v22; // [rsp+98h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+10h]
  __int64 v24; // [rsp+A8h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+20h] BYREF

  v2 = 0;
  v21 = 0;
  v24 = a1;
  v23 = 0;
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  v3 = 28LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v3 = 208LL;
  if ( *(_WORD *)(v3 + a1) == 0xFFFF )
  {
    v23 = -1073741811;
  }
  else
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v2 = 1;
    v21 = 1;
    if ( !*(_BYTE *)(a1 + 419) )
    {
      *(_BYTE *)(a1 + 419) = 2;
      v4 = *(_QWORD *)(a1 + 352);
      v5 = *(_DWORD *)(v4 + 12) - 1;
      *(_DWORD *)(v4 + 12) = v5;
      if ( !v5 )
      {
        *(_QWORD *)(v4 + 16) = 0LL;
        v6 = (_BYTE *)(v4 + 8);
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), -1, -2);
        if ( v7 != -2 )
        {
          if ( (*v6 & 1) != 0 )
            RtlpNotOwnerCriticalSection(v4);
          DeferredCriticalSectionEvent = *(void **)(v4 + 24);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v4);
          v22 = 0;
          while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)v6, (v7 & 2 | 1) + v7, v7) )
          {
            RtlBackoff(&v22);
            _m_prefetchw(v6);
            v7 = *(_DWORD *)v6;
          }
          if ( (v7 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (void *)-1LL )
            {
              _InterlockedOr(v20, 0);
              RtlpWakeByAddress(v4 + 8, 0);
              v9 = 0;
            }
            else
            {
              v9 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
            }
            if ( v9 < 0 )
              RtlRaiseStatus(v9);
          }
        }
      }
      v2 = 0;
      v21 = 0;
    }
  }
  if ( v2 )
  {
    v10 = *(_QWORD *)(a1 + 352);
    if ( (*(_DWORD *)(v10 + 12))-- == 1 )
    {
      *(_QWORD *)(v10 + 16) = 0LL;
      v12 = (_BYTE *)(v10 + 8);
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), -1, -2);
      if ( v13 != -2 )
      {
        if ( (*v12 & 1) != 0 )
          RtlpNotOwnerCriticalSection(v10);
        v18 = *(void **)(v10 + 24);
        if ( !v18 )
          v18 = (void *)RtlpCreateDeferredCriticalSectionEvent(v10);
        LODWORD(v24) = 0;
        while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v12, (v13 & 2 | 1) + v13, v13) )
        {
          RtlBackoff((unsigned int *)&v24);
          _m_prefetchw(v12);
          v13 = *(_DWORD *)v12;
        }
        if ( (v13 & 2) != 0 )
        {
          if ( v18 == (void *)-1LL )
          {
            _InterlockedOr(v20, 0);
            RtlpWakeByAddress(v10 + 8, 0);
            v19 = 0;
          }
          else
          {
            v19 = ZwSetEvent(v18, 0LL);
          }
          if ( v19 < 0 )
            RtlRaiseStatus(v19);
        }
      }
    }
  }
  if ( !--RtlpProcessHeapsListLock.RecursionCount )
  {
    RtlpProcessHeapsListLock.OwningThread = 0LL;
    LockCount = _InterlockedCompareExchange(&RtlpProcessHeapsListLock.LockCount, -1, -2);
    if ( LockCount != -2 )
    {
      if ( (RtlpProcessHeapsListLock.LockCount & 1) != 0 )
        RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
      LockSemaphore = RtlpProcessHeapsListLock.LockSemaphore;
      if ( !RtlpProcessHeapsListLock.LockSemaphore )
        LockSemaphore = (void *)RtlpCreateDeferredCriticalSectionEvent(&RtlpProcessHeapsListLock);
      v25 = 0;
      while ( LockCount != _InterlockedCompareExchange(
                             &RtlpProcessHeapsListLock.LockCount,
                             (LockCount & 2 | 1) + LockCount,
                             LockCount) )
      {
        RtlBackoff(&v25);
        _m_prefetchw(&RtlpProcessHeapsListLock.LockCount);
        LockCount = RtlpProcessHeapsListLock.LockCount;
      }
      if ( (LockCount & 2) != 0 )
      {
        if ( LockSemaphore == (void *)-1LL )
        {
          _InterlockedOr(v20, 0);
          RtlpWakeByAddress((unsigned __int64)&RtlpProcessHeapsListLock.LockCount, 0);
          v17 = 0;
        }
        else
        {
          v17 = ZwSetEvent(LockSemaphore, 0LL);
        }
        if ( v17 < 0 )
          RtlRaiseStatus(v17);
      }
    }
  }
  return v23;
}
