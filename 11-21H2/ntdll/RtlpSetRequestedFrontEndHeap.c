/*
 * XREFs of RtlpSetRequestedFrontEndHeap @ 0x180080FDC
 * Callers:
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 */

__int64 __fastcall RtlpSetRequestedFrontEndHeap(__int64 a1)
{
  char v2; // di
  __int64 v3; // rax
  __int64 v4; // rdi
  bool v5; // zf
  _BYTE *v6; // r14
  signed __int32 v7; // r15d
  void *DeferredCriticalSectionEvent; // r10
  int v9; // eax
  __int64 v10; // rdi
  _BYTE *v11; // rsi
  signed __int32 v12; // r14d
  signed __int32 LockCount; // edi
  void *LockSemaphore; // r10
  int v16; // eax
  void *v17; // r10
  int v18; // eax
  signed __int32 v19[4]; // [rsp+48h] [rbp-58h] BYREF
  char v20; // [rsp+68h] [rbp-38h]
  unsigned int v21; // [rsp+A8h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+10h]
  __int64 v23; // [rsp+B8h] [rbp+18h] BYREF
  unsigned int v24; // [rsp+C0h] [rbp+20h] BYREF

  v2 = 0;
  v20 = 0;
  v23 = a1;
  v22 = 0;
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  v3 = 28LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v3 = 208LL;
  if ( *(_WORD *)(v3 + a1) == 0xFFFF )
  {
    v22 = -1073741811;
  }
  else
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v2 = 1;
    v20 = 1;
    if ( !*(_BYTE *)(a1 + 419) )
    {
      *(_BYTE *)(a1 + 419) = 2;
      v4 = *(_QWORD *)(a1 + 352);
      v5 = (*(_DWORD *)(v4 + 12))-- == 1;
      if ( v5 )
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
          v21 = 0;
          while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)v6, (v7 & 2 | 1) + v7, v7) )
          {
            RtlBackoff(&v21);
            _m_prefetchw(v6);
            v7 = *(_DWORD *)v6;
          }
          if ( (v7 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (void *)-1LL )
            {
              _InterlockedOr(v19, 0);
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
      v20 = 0;
    }
  }
  if ( v2 )
  {
    v10 = *(_QWORD *)(a1 + 352);
    v5 = (*(_DWORD *)(v10 + 12))-- == 1;
    if ( v5 )
    {
      *(_QWORD *)(v10 + 16) = 0LL;
      v11 = (_BYTE *)(v10 + 8);
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), -1, -2);
      if ( v12 != -2 )
      {
        if ( (*v11 & 1) != 0 )
          RtlpNotOwnerCriticalSection(v10);
        v17 = *(void **)(v10 + 24);
        if ( !v17 )
          v17 = (void *)RtlpCreateDeferredCriticalSectionEvent(v10);
        LODWORD(v23) = 0;
        while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)v11, (v12 & 2 | 1) + v12, v12) )
        {
          RtlBackoff((unsigned int *)&v23);
          _m_prefetchw(v11);
          v12 = *(_DWORD *)v11;
        }
        if ( (v12 & 2) != 0 )
        {
          if ( v17 == (void *)-1LL )
          {
            _InterlockedOr(v19, 0);
            RtlpWakeByAddress(v10 + 8, 0);
            v18 = 0;
          }
          else
          {
            v18 = ZwSetEvent(v17, 0LL);
          }
          if ( v18 < 0 )
            RtlRaiseStatus(v18);
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
      v24 = 0;
      while ( LockCount != _InterlockedCompareExchange(
                             &RtlpProcessHeapsListLock.LockCount,
                             (LockCount & 2 | 1) + LockCount,
                             LockCount) )
      {
        RtlBackoff(&v24);
        _m_prefetchw(&RtlpProcessHeapsListLock.LockCount);
        LockCount = RtlpProcessHeapsListLock.LockCount;
      }
      if ( (LockCount & 2) != 0 )
      {
        if ( LockSemaphore == (void *)-1LL )
        {
          _InterlockedOr(v19, 0);
          RtlpWakeByAddress((unsigned __int64)&RtlpProcessHeapsListLock.LockCount, 0);
          v16 = 0;
        }
        else
        {
          v16 = ZwSetEvent(LockSemaphore, 0LL);
        }
        if ( v16 < 0 )
          RtlRaiseStatus(v16);
      }
    }
  }
  return v22;
}
