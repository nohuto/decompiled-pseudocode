/*
 * XREFs of RtlValidateHeap @ 0x1800873F0
 * Callers:
 *     RtlValidateProcessHeapsCallback @ 0x1800FF9A0 (RtlValidateProcessHeapsCallback.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlUnlockHeap @ 0x180029D40 (RtlUnlockHeap.c)
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlLockHeap @ 0x180029EC0 (RtlLockHeap.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlpHpSizeHeap @ 0x18003ACD0 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18003AFAC (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180087664 (RtlpValidateHeapEntry.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpLogHeapValidateEvent @ 0x180118ED4 (RtlpLogHeapValidateEvent.c)
 *     RtlpHeapExceptionFilter @ 0x1801228A8 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  char v6; // r12
  char *v7; // rdx
  BOOLEAN v8; // al
  __int64 v9; // r14
  _BYTE *v11; // r15
  signed __int32 v12; // r13d
  __int64 v13; // rcx
  BOOLEAN v15; // si
  int v16; // r10d
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // r8d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v21; // eax
  signed __int32 v22[8]; // [rsp+38h] [rbp-88h] BYREF
  BOOLEAN v23; // [rsp+58h] [rbp-68h]
  char v24; // [rsp+59h] [rbp-67h]
  char *v25; // [rsp+68h] [rbp-58h]
  PVOID v26; // [rsp+C8h] [rbp+8h] BYREF
  ULONG v27; // [rsp+D0h] [rbp+10h]

  v27 = Flags;
  v26 = HeapHandle;
  v6 = 0;
  v24 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v15 = 1;
    if ( (Flags & 1) == 0 )
      RtlLockHeap(HeapHandle);
    v16 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v17 = *((_DWORD *)HeapHandle + 55);
    v18 = 0;
    if ( v17 )
      LOBYTE(v18) = v17 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v19 = v16 | 1;
    if ( !v18 )
      v19 = v16;
    if ( BaseAddress )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
        BaseAddress = (char *)BaseAddress - *((_QWORD *)BaseAddress - 2);
      v15 = RtlpHpSizeHeap((__int64)HeapHandle, (unsigned __int64)BaseAddress, v19) != -1;
    }
    if ( (Flags & 1) == 0 )
      RtlUnlockHeap(HeapHandle);
    return v15;
  }
  else
  {
    v23 = 0;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
      v23 = ((__int64 (*)(void))qword_1801812A8)();
    }
    else if ( RtlpCheckHeapSignature(HeapHandle, "RtlValidateHeap") )
    {
      v27 = *((_DWORD *)HeapHandle + 29) | Flags;
      if ( (v27 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v6 = 1;
        v24 = 1;
      }
      if ( BaseAddress )
      {
        v7 = (char *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v7 -= 16 * (unsigned __int8)v7[14];
        v25 = v7;
        v8 = RtlpValidateHeapEntry(HeapHandle, v7, "RtlValidateHeap");
      }
      else
      {
        v8 = RtlpValidateHeap((_DWORD)HeapHandle);
      }
      v23 = v8;
    }
    if ( v6 )
    {
      v9 = *((_QWORD *)HeapHandle + 44);
      if ( (*(_DWORD *)(v9 + 12))-- == 1 )
      {
        *(_QWORD *)(v9 + 16) = 0LL;
        v11 = (_BYTE *)(v9 + 8);
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), -1, -2);
        if ( v12 != -2 )
        {
          if ( (*v11 & 1) != 0 )
            RtlpNotOwnerCriticalSection(v9);
          DeferredCriticalSectionEvent = *(HANDLE *)(v9 + 24);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v9);
          LODWORD(v26) = 0;
          while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)v11, (v12 & 2 | 1) + v12, v12) )
          {
            RtlBackoff((unsigned int *)&v26);
            _m_prefetchw(v11);
            v12 = *(_DWORD *)v11;
          }
          if ( (v12 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
            {
              _InterlockedOr(v22, 0);
              RtlpWakeByAddress(v9 + 8, 0);
              v21 = 0;
            }
            else
            {
              v21 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
            }
            if ( v21 < 0 )
              RtlRaiseStatus(v21);
          }
        }
      }
    }
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v13 = 2147353472LL;
    if ( *(_BYTE *)v13 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapValidateEvent(HeapHandle);
    }
    return v23;
  }
}
