/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x1800FF15C
 * Callers:
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x18010BDD0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpEnumProcessHeaps @ 0x180077A4C (RtlpEnumProcessHeaps.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801010A0 (RtlpSetHeapDebuggingInformation.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(_DWORD *HeapHandle, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  signed __int32 LockCount; // edi
  void *LockSemaphore; // r10
  int v8; // eax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( HeapHandle )
  {
    if ( (HeapHandle[29] & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
      v4 = 7LL;
      if ( HeapHandle[4] != -571548178 )
        v4 = 52LL;
      if ( LOWORD(HeapHandle[v4]) == 0xFFFF )
        v5 = -1073741811;
      else
        v5 = RtlpSetHeapDebuggingInformation(HeapHandle);
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
            LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)&RtlpProcessHeapsListLock);
          v10 = 0;
          while ( LockCount != _InterlockedCompareExchange(
                                 &RtlpProcessHeapsListLock.LockCount,
                                 (LockCount & 2 | 1) + LockCount,
                                 LockCount) )
          {
            RtlBackoff(&v10);
            _m_prefetchw(&RtlpProcessHeapsListLock.LockCount);
            LockCount = RtlpProcessHeapsListLock.LockCount;
          }
          if ( (LockCount & 2) != 0 )
          {
            if ( LockSemaphore == (void *)-1LL )
            {
              _InterlockedOr(v9, 0);
              RtlpWakeByAddress((unsigned __int64)&RtlpProcessHeapsListLock.LockCount, 0);
            }
            else
            {
              v8 = ZwSetEvent(LockSemaphore, 0LL);
              if ( v8 < 0 )
                RtlRaiseStatus(v8);
            }
          }
        }
      }
      return v5;
    }
  }
  else
  {
    dword_18018614C = *(_DWORD *)(a2 + 12);
    xmmword_180186160 = *(_OWORD *)(a2 + 32);
    *((_QWORD *)&xmmword_180186150 + 1) = *(_QWORD *)(a2 + 24);
    LODWORD(xmmword_180186150) = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
