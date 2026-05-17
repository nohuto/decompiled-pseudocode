/*
 * XREFs of RtlValidateHeap @ 0x18007BE40
 * Callers:
 *     RtlValidateProcessHeapsCallback @ 0x1800FE850 (RtlValidateProcessHeapsCallback.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     RtlLockHeap @ 0x180015BE0 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x180015C80 (RtlUnlockHeap.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpHpSizeHeap @ 0x180027310 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180027604 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpValidateHeapEntry @ 0x18007C0D8 (RtlpValidateHeapEntry.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpLogHeapValidateEvent @ 0x1801175E8 (RtlpLogHeapValidateEvent.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
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
  int v20; // r8d
  __int64 DeferredCriticalSectionEvent; // r10
  int v22; // eax
  signed __int32 v23[8]; // [rsp+48h] [rbp-88h] BYREF
  char v24; // [rsp+68h] [rbp-68h]
  char v25; // [rsp+69h] [rbp-67h]
  unsigned __int64 v26; // [rsp+78h] [rbp-58h]
  __int64 v27; // [rsp+D8h] [rbp+8h] BYREF
  int v28; // [rsp+E0h] [rbp+10h]

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
      v24 = ((__int64 (*)(void))qword_1801742A8)();
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
          DeferredCriticalSectionEvent = *(_QWORD *)(v10 + 24);
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
            if ( DeferredCriticalSectionEvent == -1 )
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
            {
              RtlRaiseStatus((unsigned int)v22);
              __debugbreak();
            }
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
