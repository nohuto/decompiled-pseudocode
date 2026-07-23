/*
 * XREFs of RtlpUnlockHeapManagerForCloning @ 0x180101168
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x1800FEBF0 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800FF830 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpCSparseBitmapUnlock @ 0x18004ACA4 (RtlpCSparseBitmapUnlock.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpHpUnlockHeapForCloning @ 0x1801233D4 (RtlpHpUnlockHeapForCloning.c)
 */

void __fastcall RtlpUnlockHeapManagerForCloning(unsigned int a1, unsigned int a2)
{
  struct _PEB *v2; // r13
  unsigned int i; // ebp
  void **ProcessHeaps; // rax
  void *v7; // rbx
  _RTL_SRWLOCK *v8; // rcx
  __int64 v9; // rdx
  _RTL_CRITICAL_SECTION *v10; // rbx
  int *p_LockCount; // rdi
  signed __int32 v13; // r14d
  HANDLE LockSemaphore; // r10
  int v15; // eax
  signed __int32 LockCount; // ebx
  void *DeferredCriticalSectionEvent; // r10
  int v18; // eax
  signed __int32 v19[8]; // [rsp+0h] [rbp-68h] BYREF
  int v20; // [rsp+20h] [rbp-48h] BYREF
  char v21; // [rsp+24h] [rbp-44h]
  PVOID *v22; // [rsp+28h] [rbp-40h]
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+18h] BYREF

  v2 = NtCurrentPeb();
  for ( i = 0; i < a2; ++i )
  {
    ProcessHeaps = v2->ProcessHeaps;
    v7 = ProcessHeaps[i];
    if ( *((_DWORD *)v7 + 4) == -571548178 )
    {
      if ( (*((_BYTE *)v7 + 20) & 1) == 0 )
        RtlpHpUnlockHeapForCloning(ProcessHeaps[i], a1);
    }
    else if ( (*((_BYTE *)v7 + 112) & 1) == 0 )
    {
      if ( *((_BYTE *)v7 + 418) == 2 )
      {
        v8 = (_RTL_SRWLOCK *)*((_QWORD *)v7 + 51);
        if ( v8 )
        {
          if ( a1 )
            v8->Value = 1LL;
          RtlReleaseSRWLockExclusive(v8);
        }
      }
      if ( a1 )
      {
        v9 = *((_QWORD *)v7 + 44);
        *((_WORD *)v7 + 208) = 0;
        *(_QWORD *)(v9 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
        *(_DWORD *)(v9 + 8) = -2;
        *(_DWORD *)(v9 + 12) = 1;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
      v10 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)v7 + 44);
      if ( v10->RecursionCount-- == 1 )
      {
        v10->OwningThread = 0LL;
        p_LockCount = &v10->LockCount;
        v13 = _InterlockedCompareExchange(&v10->LockCount, -1, -2);
        if ( v13 != -2 )
        {
          if ( (*(_BYTE *)p_LockCount & 1) != 0 )
            RtlpNotOwnerCriticalSection(v10);
          LockSemaphore = v10->LockSemaphore;
          if ( !LockSemaphore )
            LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v10);
          v23 = 0;
          while ( v13 != _InterlockedCompareExchange(p_LockCount, (v13 & 2 | 1) + v13, v13) )
          {
            RtlBackoff(&v23);
            _m_prefetchw(p_LockCount);
            v13 = *p_LockCount;
          }
          if ( (v13 & 2) != 0 )
          {
            if ( LockSemaphore == (HANDLE)-1LL )
            {
              _InterlockedOr(v19, 0);
              RtlpWakeByAddress((unsigned __int64)&v10->LockCount, 0);
            }
            else
            {
              v15 = ZwSetEvent(LockSemaphore, 0LL);
              if ( v15 < 0 )
                RtlRaiseStatus(v15);
            }
          }
        }
      }
    }
  }
  if ( a1 )
  {
    RtlpProcessHeapsListLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
    RtlpProcessHeapsListLock.LockCount = -2;
    RtlpProcessHeapsListLock.RecursionCount = 1;
    RtlpProcessHeapsListLock.LockSemaphore = 0LL;
    qword_180188AB0 = -1LL;
    qword_180188AA8 = 1LL;
  }
  v20 = 1;
  v22 = BaseAddress;
  v21 = -1;
  RtlpCSparseBitmapUnlock((__int64)&v20);
  if ( !--RtlpProcessHeapsListLock.RecursionCount )
  {
    RtlpProcessHeapsListLock.OwningThread = 0LL;
    LockCount = _InterlockedCompareExchange(&RtlpProcessHeapsListLock.LockCount, -1, -2);
    if ( LockCount != -2 )
    {
      if ( (RtlpProcessHeapsListLock.LockCount & 1) != 0 )
        RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
      DeferredCriticalSectionEvent = RtlpProcessHeapsListLock.LockSemaphore;
      if ( !RtlpProcessHeapsListLock.LockSemaphore )
        DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent((__int64)&RtlpProcessHeapsListLock);
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
        if ( DeferredCriticalSectionEvent == (void *)-1LL )
        {
          _InterlockedOr(v19, 0);
          RtlpWakeByAddress((unsigned __int64)&RtlpProcessHeapsListLock.LockCount, 0);
        }
        else
        {
          v18 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
          if ( v18 < 0 )
            RtlRaiseStatus(v18);
        }
      }
    }
  }
}
