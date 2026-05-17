/*
 * XREFs of RtlUnlockHeap @ 0x180029F10
 * Callers:
 *     RtlExitUserProcess @ 0x1800512C0 (RtlExitUserProcess.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180051580 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlValidateHeap @ 0x180086BF0 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008AEC0 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x18008B5D0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180116410 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlpHpHeapUnlock @ 0x18002DAD4 (RtlpHpHeapUnlock.c)
 *     RtlBackoff @ 0x180033F80 (RtlBackoff.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3940 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 *     RtlpLogHeapUnlockEvent @ 0x1801179D8 (RtlpLogHeapUnlockEvent.c)
 */

char __fastcall RtlUnlockHeap(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  volatile signed __int32 *v8; // rsi
  signed __int32 v9; // ebp
  __int64 v10; // rcx
  __int64 DeferredCriticalSectionEvent; // r10
  int v13; // eax
  signed __int32 v14[14]; // [rsp+0h] [rbp-38h] BYREF
  int v15; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    RtlpHpHeapUnlock(a1, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18017E888)();
    if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlUnlockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      v6 = *(_QWORD *)(a1 + 352);
      --*(_WORD *)(a1 + 416);
      if ( (*(_DWORD *)(v6 + 12))-- == 1 )
      {
        *(_QWORD *)(v6 + 16) = 0LL;
        v8 = (volatile signed __int32 *)(v6 + 8);
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), -1, -2);
        if ( v9 != -2 )
        {
          if ( (*(_BYTE *)v8 & 1) != 0 )
            RtlpNotOwnerCriticalSection(v6);
          DeferredCriticalSectionEvent = *(_QWORD *)(v6 + 24);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v6);
          v15 = 0;
          while ( 1 )
          {
            v2 = v9 & 2 | 1u;
            v3 = (unsigned int)(v2 + v9);
            if ( v9 == _InterlockedCompareExchange(v8, v3, v9) )
              break;
            RtlBackoff(&v15);
            _m_prefetchw((const void *)v8);
            v9 = *v8;
          }
          if ( (v9 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == -1 )
            {
              _InterlockedOr(v14, 0);
              RtlpWakeByAddress(v6 + 8, 0LL);
            }
            else
            {
              v13 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
              if ( v13 < 0 )
                RtlRaiseStatus((unsigned int)v13);
            }
          }
        }
      }
    }
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v3, v2, v4, v5) )
    v10 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v10 = 2147353472LL;
  if ( *(_BYTE *)v10 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapUnlockEvent(a1);
  }
  return 1;
}
