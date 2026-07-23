/*
 * XREFs of RtlDebugGetUserInfoHeap @ 0x180105124
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180075EA0 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlGetUserInfoHeap @ 0x180075EA0 (RtlGetUserInfoHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180086E64 (RtlpValidateHeapEntry.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __fastcall RtlDebugGetUserInfoHeap(_DWORD *HeapHandle, ULONG a2, char *a3, PVOID *a4, PULONG a5)
{
  char v9; // r14
  ULONG v11; // esi
  unsigned __int64 v12; // rdx
  _RTL_CRITICAL_SECTION *v13; // rdi
  int *p_LockCount; // rsi
  signed __int32 v16; // r14d
  HANDLE LockSemaphore; // r10
  int v18; // eax
  signed __int32 v19[8]; // [rsp+48h] [rbp-88h] BYREF
  PULONG UserFlags; // [rsp+68h] [rbp-68h]
  BOOLEAN UserInfoHeap; // [rsp+78h] [rbp-58h]
  char v22; // [rsp+79h] [rbp-57h]
  unsigned __int64 v23; // [rsp+88h] [rbp-48h]
  _DWORD *v24; // [rsp+D8h] [rbp+8h] BYREF
  ULONG v25; // [rsp+E0h] [rbp+10h]

  v25 = a2;
  v24 = HeapHandle;
  UserInfoHeap = 0;
  v9 = 0;
  v22 = 0;
  if ( (HeapHandle[29] & 0x1000000) != 0 )
  {
    UserFlags = a5;
    return ((__int64 (__fastcall *)(_DWORD *))qword_18017E8A8)(HeapHandle);
  }
  else
  {
    if ( RtlpCheckHeapSignature(HeapHandle, "RtlGetUserInfoHeap") )
    {
      v11 = HeapHandle[29] | 0x10000000 | a2;
      v25 = v11;
      if ( (v11 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v9 = 1;
        v22 = 1;
        v11 |= 1u;
        v25 = v11;
      }
      RtlpValidateHeap((_DWORD)HeapHandle);
      v12 = (unsigned __int64)(a3 - 16);
      _m_prefetchw(a3 - 16);
      if ( *(a3 - 1) == 5 )
        v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
      v23 = v12;
      if ( RtlpValidateHeapEntry((unsigned __int64)HeapHandle, v12, "RtlGetUserInfoHeap") )
        UserInfoHeap = RtlGetUserInfoHeap(HeapHandle, v11, a3, a4, a5);
    }
    else
    {
      UserInfoHeap = 0;
    }
    if ( v9 )
    {
      v13 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
      if ( v13->RecursionCount-- == 1 )
      {
        v13->OwningThread = 0LL;
        p_LockCount = &v13->LockCount;
        v16 = _InterlockedCompareExchange(&v13->LockCount, -1, -2);
        if ( v16 != -2 )
        {
          if ( (*(_BYTE *)p_LockCount & 1) != 0 )
            RtlpNotOwnerCriticalSection(v13);
          LockSemaphore = v13->LockSemaphore;
          if ( !LockSemaphore )
            LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v13);
          LODWORD(v24) = 0;
          while ( v16 != _InterlockedCompareExchange(p_LockCount, (v16 & 2 | 1) + v16, v16) )
          {
            RtlBackoff((unsigned int *)&v24);
            _m_prefetchw(p_LockCount);
            v16 = *p_LockCount;
          }
          if ( (v16 & 2) != 0 )
          {
            if ( LockSemaphore == (HANDLE)-1LL )
            {
              _InterlockedOr(v19, 0);
              RtlpWakeByAddress((unsigned __int64)&v13->LockCount, 0);
              v18 = 0;
            }
            else
            {
              v18 = ZwSetEvent(LockSemaphore, 0LL);
            }
            if ( v18 < 0 )
              RtlRaiseStatus(v18);
          }
        }
      }
    }
    return UserInfoHeap;
  }
}
