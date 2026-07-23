/*
 * XREFs of RtlCompactHeap @ 0x1800FD670
 * Callers:
 *     RtlDebugCompactHeap @ 0x180104690 (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlpHpHeapCompact @ 0x180014D08 (RtlpHpHeapCompact.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpCoalesceHeap @ 0x1800FEA84 (RtlpCoalesceHeap.c)
 *     RtlDebugCompactHeap @ 0x180104690 (RtlDebugCompactHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __cdecl RtlCompactHeap(PVOID HeapHandle, ULONG Flags)
{
  ULONG v4; // edx
  __int64 v5; // rax
  SIZE_T v6; // rax
  _RTL_CRITICAL_SECTION *v7; // rbx
  int *p_LockCount; // rsi
  signed __int32 v10; // r14d
  HANDLE LockSemaphore; // r10
  int v12; // eax
  signed __int32 v13[8]; // [rsp+48h] [rbp-98h] BYREF
  char v14; // [rsp+68h] [rbp-78h]
  SIZE_T v15; // [rsp+70h] [rbp-70h]
  __int64 v16; // [rsp+80h] [rbp-60h]
  struct _TEB *v17; // [rsp+88h] [rbp-58h]
  struct _TEB *v18; // [rsp+90h] [rbp-50h]
  PVOID v19; // [rsp+E8h] [rbp+8h] BYREF

  v19 = HeapHandle;
  v14 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapCompact((__int64)HeapHandle, Flags & 1);
    return 16LL;
  }
  else
  {
    v4 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v4 & 0x61000000) != 0 && (v4 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(HeapHandle);
    }
    else
    {
      v15 = 0LL;
      if ( (v4 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v14 = 1;
      }
      v5 = RtlpCoalesceHeap((int)HeapHandle);
      v16 = v5;
      if ( v5 )
      {
        v15 = 16LL * *(unsigned __int16 *)(v5 + 8);
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *(_BYTE *)(v5 + 11) = *(_BYTE *)(v5 + 8) ^ *(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10);
          *(_DWORD *)(v5 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      if ( *((PVOID *)HeapHandle + 30) != (char *)HeapHandle + 240 )
      {
        v6 = v15;
        if ( *(_QWORD *)(*((_QWORD *)HeapHandle + 31) + 40LL) > v15 )
          v6 = *(_QWORD *)(*((_QWORD *)HeapHandle + 31) + 40LL);
        v15 = v6;
      }
      if ( !v15 )
      {
        v17 = NtCurrentTeb();
        v17->LastStatusValue = 0;
        v18 = NtCurrentTeb();
        v18->LastErrorValue = RtlNtStatusToDosError(0);
      }
      if ( v14 )
      {
        v7 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
        if ( v7->RecursionCount-- == 1 )
        {
          v7->OwningThread = 0LL;
          p_LockCount = &v7->LockCount;
          v10 = _InterlockedCompareExchange(&v7->LockCount, -1, -2);
          if ( v10 != -2 )
          {
            if ( (*(_BYTE *)p_LockCount & 1) != 0 )
              RtlpNotOwnerCriticalSection(v7);
            LockSemaphore = v7->LockSemaphore;
            if ( !LockSemaphore )
              LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v7);
            LODWORD(v19) = 0;
            while ( v10 != _InterlockedCompareExchange(p_LockCount, (v10 & 2 | 1) + v10, v10) )
            {
              RtlBackoff((unsigned int *)&v19);
              _m_prefetchw(p_LockCount);
              v10 = *p_LockCount;
            }
            if ( (v10 & 2) != 0 )
            {
              if ( LockSemaphore == (HANDLE)-1LL )
              {
                _InterlockedOr(v13, 0);
                RtlpWakeByAddress((unsigned __int64)&v7->LockCount, 0);
                v12 = 0;
              }
              else
              {
                v12 = ZwSetEvent(LockSemaphore, 0LL);
              }
              if ( v12 < 0 )
                RtlRaiseStatus(v12);
            }
          }
        }
      }
      return v15;
    }
  }
}
