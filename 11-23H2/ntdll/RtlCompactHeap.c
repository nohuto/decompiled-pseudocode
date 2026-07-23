/*
 * XREFs of RtlCompactHeap @ 0x1800FE720
 * Callers:
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlpHpHeapCompact @ 0x18005FB70 (RtlpHpHeapCompact.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpCoalesceHeap @ 0x1800FFB8C (RtlpCoalesceHeap.c)
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x1801228A8 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __cdecl RtlCompactHeap(PVOID HeapHandle, ULONG Flags)
{
  __int64 v2; // r8
  ULONG v5; // edx
  __int64 v6; // rax
  SIZE_T v7; // rax
  _RTL_CRITICAL_SECTION *v8; // rbx
  int *p_LockCount; // rsi
  signed __int32 v11; // r14d
  HANDLE LockSemaphore; // r10
  int v13; // eax
  signed __int32 v14[8]; // [rsp+38h] [rbp-98h] BYREF
  char v15; // [rsp+58h] [rbp-78h]
  SIZE_T v16; // [rsp+60h] [rbp-70h]
  __int64 v17; // [rsp+70h] [rbp-60h]
  struct _TEB *v18; // [rsp+78h] [rbp-58h]
  struct _TEB *v19; // [rsp+80h] [rbp-50h]
  PVOID v20; // [rsp+D8h] [rbp+8h] BYREF

  v20 = HeapHandle;
  v15 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapCompact((__int64)HeapHandle, Flags & 1, v2);
    return 16LL;
  }
  else
  {
    v5 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(HeapHandle);
    }
    else
    {
      v16 = 0LL;
      if ( (v5 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v15 = 1;
      }
      v6 = RtlpCoalesceHeap((int)HeapHandle);
      v17 = v6;
      if ( v6 )
      {
        v16 = 16LL * *(unsigned __int16 *)(v6 + 8);
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
          *(_DWORD *)(v6 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      if ( *((PVOID *)HeapHandle + 30) != (char *)HeapHandle + 240 )
      {
        v7 = v16;
        if ( *(_QWORD *)(*((_QWORD *)HeapHandle + 31) + 40LL) > v16 )
          v7 = *(_QWORD *)(*((_QWORD *)HeapHandle + 31) + 40LL);
        v16 = v7;
      }
      if ( !v16 )
      {
        v18 = NtCurrentTeb();
        v18->LastStatusValue = 0;
        v19 = NtCurrentTeb();
        v19->LastErrorValue = RtlNtStatusToDosError(0);
      }
      if ( v15 )
      {
        v8 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
        if ( v8->RecursionCount-- == 1 )
        {
          v8->OwningThread = 0LL;
          p_LockCount = &v8->LockCount;
          v11 = _InterlockedCompareExchange(&v8->LockCount, -1, -2);
          if ( v11 != -2 )
          {
            if ( (*(_BYTE *)p_LockCount & 1) != 0 )
              RtlpNotOwnerCriticalSection(v8);
            LockSemaphore = v8->LockSemaphore;
            if ( !LockSemaphore )
              LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v8);
            LODWORD(v20) = 0;
            while ( v11 != _InterlockedCompareExchange(p_LockCount, (v11 & 2 | 1) + v11, v11) )
            {
              RtlBackoff((unsigned int *)&v20);
              _m_prefetchw(p_LockCount);
              v11 = *p_LockCount;
            }
            if ( (v11 & 2) != 0 )
            {
              if ( LockSemaphore == (HANDLE)-1LL )
              {
                _InterlockedOr(v14, 0);
                RtlpWakeByAddress((unsigned __int64)&v8->LockCount, 0);
                v13 = 0;
              }
              else
              {
                v13 = ZwSetEvent(LockSemaphore, 0LL);
              }
              if ( v13 < 0 )
                RtlRaiseStatus(v13);
            }
          }
        }
      }
      return v16;
    }
  }
}
