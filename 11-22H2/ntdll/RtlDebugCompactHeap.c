/*
 * XREFs of RtlDebugCompactHeap @ 0x180104364
 * Callers:
 *     RtlCompactHeap @ 0x1800FD310 (RtlCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlCompactHeap @ 0x1800FD310 (RtlCompactHeap.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180106FF4 (RtlpValidateHeapHeaders.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __fastcall RtlDebugCompactHeap(_DWORD *Src, ULONG a2)
{
  char v4; // r14
  ULONG v6; // edi
  _RTL_CRITICAL_SECTION *v7; // rdi
  int *p_LockCount; // rsi
  signed __int32 v10; // r14d
  HANDLE LockSemaphore; // r10
  int v12; // eax
  signed __int32 v13[8]; // [rsp+38h] [rbp-78h] BYREF
  char v14; // [rsp+58h] [rbp-58h]
  SIZE_T v15; // [rsp+60h] [rbp-50h]
  _DWORD *v16; // [rsp+B8h] [rbp+8h] BYREF
  ULONG v17; // [rsp+C0h] [rbp+10h]

  v17 = a2;
  v16 = Src;
  v4 = 0;
  v14 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(_DWORD *))qword_18017E8C8)(Src);
  v15 = 0LL;
  if ( RtlpCheckHeapSignature(Src, "RtlCompactHeap") )
  {
    v6 = Src[29] | 0x10000000 | a2;
    v17 = v6;
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
      v4 = 1;
      v14 = 1;
      v6 |= 1u;
      v17 = v6;
    }
    RtlpValidateHeap((_DWORD)Src);
    v15 = RtlCompactHeap(Src, v6);
    RtlpValidateHeapHeaders(Src);
  }
  else
  {
    v15 = 0LL;
  }
  if ( v4 )
  {
    v7 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)Src + 44);
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
        LODWORD(v16) = 0;
        while ( v10 != _InterlockedCompareExchange(p_LockCount, (v10 & 2 | 1) + v10, v10) )
        {
          RtlBackoff((unsigned int *)&v16);
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
