/*
 * XREFs of RtlValidateHeap @ 0x180086BF0
 * Callers:
 *     RtlValidateProcessHeapsCallback @ 0x1800FE590 (RtlValidateProcessHeapsCallback.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlUnlockHeap @ 0x180029F10 (RtlUnlockHeap.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlLockHeap @ 0x18002A090 (RtlLockHeap.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlpHpSizeHeap @ 0x18003AE30 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18003B10C (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpValidateHeapEntry @ 0x180086E64 (RtlpValidateHeapEntry.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpLogHeapValidateEvent @ 0x180117A54 (RtlpLogHeapValidateEvent.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 */

bool __fastcall RtlValidateHeap(__int64 a1, int a2, unsigned __int64 a3)
{
  char v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  char v9; // al
  __int64 v10; // r14
  _BYTE *v12; // r15
  signed __int32 v13; // r13d
  __int64 v14; // rcx
  bool v16; // si
  int v17; // r10d
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // r8d
  HANDLE DeferredCriticalSectionEvent; // r10
  int v22; // eax
  signed __int32 v23[8]; // [rsp+38h] [rbp-88h] BYREF
  char v24; // [rsp+58h] [rbp-68h]
  char v25; // [rsp+59h] [rbp-67h]
  unsigned __int64 v26; // [rsp+68h] [rbp-58h]
  __int64 v27; // [rsp+C8h] [rbp+8h] BYREF
  int v28; // [rsp+D0h] [rbp+10h]

  v28 = a2;
  v27 = a1;
  v6 = 0;
  v25 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v16 = 1;
    if ( (a2 & 1) == 0 )
      RtlLockHeap(a1);
    v17 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v18 = *(_DWORD *)(a1 + 220);
    v19 = 0;
    if ( v18 )
      LOBYTE(v19) = v18 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v20 = v17 | 1;
    if ( !v19 )
      v20 = v17;
    if ( a3 )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
        a3 -= *(_QWORD *)(a3 - 16);
      v16 = RtlpHpSizeHeap(a1, a3, v20) != -1;
    }
    if ( (a2 & 1) == 0 )
      RtlUnlockHeap(a1);
    return v16;
  }
  else
  {
    v24 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      v24 = ((__int64 (*)(void))qword_18017E898)();
    }
    else if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlValidateHeap") )
    {
      v28 = *(_DWORD *)(a1 + 116) | a2;
      if ( (v28 & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v6 = 1;
        v25 = 1;
      }
      if ( a3 )
      {
        v8 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
        v26 = v8;
        v9 = RtlpValidateHeapEntry(a1, v8, "RtlValidateHeap");
      }
      else
      {
        LOBYTE(v7) = 1;
        v9 = RtlpValidateHeap(a1, v7);
      }
      v24 = v9;
    }
    if ( v6 )
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
          DeferredCriticalSectionEvent = *(HANDLE *)(v10 + 24);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v10);
          LODWORD(v27) = 0;
          while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v12, (v13 & 2 | 1) + v13, v13) )
          {
            RtlBackoff((unsigned int *)&v27);
            _m_prefetchw(v12);
            v13 = *(_DWORD *)v12;
          }
          if ( (v13 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
            {
              _InterlockedOr(v23, 0);
              RtlpWakeByAddress(v10 + 8, 0);
              v22 = 0;
            }
            else
            {
              v22 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
            }
            if ( v22 < 0 )
              RtlRaiseStatus((unsigned int)v22);
          }
        }
      }
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v14 = 2147353472LL;
    if ( *(_BYTE *)v14 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapValidateEvent(a1);
    }
    return v24;
  }
}
