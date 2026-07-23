/*
 * XREFs of RtlDebugSetUserFlagsHeap @ 0x180105DC8
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x1800FDEF0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180086E64 (RtlpValidateHeapEntry.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlSetUserFlagsHeap @ 0x1800FDEF0 (RtlSetUserFlagsHeap.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __fastcall RtlDebugSetUserFlagsHeap(_DWORD *HeapHandle, ULONG a2, char *a3, ULONG a4, signed __int32 a5)
{
  char v9; // r14
  ULONG UserFlagsSet; // r12d
  ULONG v12; // esi
  unsigned __int64 v13; // rdx
  _RTL_CRITICAL_SECTION *v14; // rdi
  int *p_LockCount; // rsi
  signed __int32 v17; // r14d
  HANDLE LockSemaphore; // r10
  int v19; // eax
  signed __int32 v20[12]; // [rsp+20h] [rbp-88h] BYREF
  BOOLEAN v21; // [rsp+50h] [rbp-58h]
  char v22; // [rsp+51h] [rbp-57h]
  unsigned __int64 v23; // [rsp+60h] [rbp-48h]
  _DWORD *v24; // [rsp+B0h] [rbp+8h] BYREF
  ULONG v25; // [rsp+B8h] [rbp+10h]

  v25 = a2;
  v24 = HeapHandle;
  v21 = 0;
  v9 = 0;
  v22 = 0;
  if ( (HeapHandle[29] & 0x1000000) != 0 )
  {
    v20[8] = a5;
    return ((__int64 (__fastcall *)(_DWORD *))qword_18017E8B0)(HeapHandle);
  }
  else
  {
    UserFlagsSet = a5;
    if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    {
      return 0;
    }
    else
    {
      if ( RtlpCheckHeapSignature(HeapHandle, "RtlSetUserFlagsHeap") )
      {
        v12 = HeapHandle[29] | 0x10000000 | a2;
        v25 = v12;
        if ( (v12 & 1) == 0 )
        {
          RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
          v9 = 1;
          v22 = 1;
          v12 |= 1u;
          v25 = v12;
        }
        RtlpValidateHeap((_DWORD)HeapHandle);
        v13 = (unsigned __int64)(a3 - 16);
        _m_prefetchw(a3 - 16);
        if ( *(a3 - 1) == 5 )
          v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
        v23 = v13;
        if ( RtlpValidateHeapEntry((unsigned __int64)HeapHandle, v13, "RtlSetUserFlagsHeap") )
        {
          v21 = RtlSetUserFlagsHeap(HeapHandle, v12, a3, a4, UserFlagsSet);
          RtlpValidateHeap((_DWORD)HeapHandle);
        }
      }
      else
      {
        v21 = 0;
      }
      if ( v9 )
      {
        v14 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
        if ( v14->RecursionCount-- == 1 )
        {
          v14->OwningThread = 0LL;
          p_LockCount = &v14->LockCount;
          v17 = _InterlockedCompareExchange(&v14->LockCount, -1, -2);
          if ( v17 != -2 )
          {
            if ( (*(_BYTE *)p_LockCount & 1) != 0 )
              RtlpNotOwnerCriticalSection(v14);
            LockSemaphore = v14->LockSemaphore;
            if ( !LockSemaphore )
              LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v14);
            LODWORD(v24) = 0;
            while ( v17 != _InterlockedCompareExchange(p_LockCount, (v17 & 2 | 1) + v17, v17) )
            {
              RtlBackoff((unsigned int *)&v24);
              _m_prefetchw(p_LockCount);
              v17 = *p_LockCount;
            }
            if ( (v17 & 2) != 0 )
            {
              if ( LockSemaphore == (HANDLE)-1LL )
              {
                _InterlockedOr(v20, 0);
                RtlpWakeByAddress((unsigned __int64)&v14->LockCount, 0);
                v19 = 0;
              }
              else
              {
                v19 = ZwSetEvent(LockSemaphore, 0LL);
              }
              if ( v19 < 0 )
                RtlRaiseStatus(v19);
            }
          }
        }
      }
      return v21;
    }
  }
}
