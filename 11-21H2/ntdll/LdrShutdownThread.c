/*
 * XREFs of LdrShutdownThread @ 0x180041790
 * Callers:
 *     RtlExitUserThread @ 0x1800048A0 (RtlExitUserThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003F140 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003FEF0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x18003FFAC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180042C6C (LdrpCallTlsInitializers.c)
 *     LdrpReleaseLoaderLock @ 0x18004F1D0 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18004F230 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
 *     RtlProcessFlsData @ 0x1800546F0 (RtlProcessFlsData.c)
 *     TpTrimPools @ 0x18006AC30 (TpTrimPools.c)
 *     LdrpFreeTls @ 0x1800771F0 (LdrpFreeTls.c)
 *     RtlFreeThreadActivationContextStack @ 0x180078EC0 (RtlFreeThreadActivationContextStack.c)
 *     LdrpDropLastInProgressCount @ 0x18007D1B4 (LdrpDropLastInProgressCount.c)
 */

void __noreturn LdrShutdownThread(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct _TEB *v2; // rbx
  _PEB *ProcessEnvironmentBlock; // r13
  void *FlsData; // r14
  char v5; // si
  __int64 v6; // rcx
  __int64 *v7; // r15
  __int64 *v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64); // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  void **TlsExpansionSlots; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *FiberData; // r8
  __int64 v16; // [rsp+30h] [rbp-C8h] BYREF
  int v17; // [rsp+38h] [rbp-C0h]
  __int128 v18; // [rsp+40h] [rbp-B8h]
  __int128 v19; // [rsp+50h] [rbp-A8h]
  __int128 v20; // [rsp+60h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-88h]
  __int64 v22; // [rsp+80h] [rbp-78h] BYREF
  int v23; // [rsp+88h] [rbp-70h]
  __int128 v24; // [rsp+90h] [rbp-68h]
  __int128 v25; // [rsp+A0h] [rbp-58h]
  __int128 v26; // [rsp+B0h] [rbp-48h]
  __int64 v27; // [rsp+C0h] [rbp-38h]

  v2 = NtCurrentTeb();
  ProcessEnvironmentBlock = v2->ProcessEnvironmentBlock;
  FlsData = v2->FlsData;
  if ( FlsData )
    RtlProcessFlsData(v2->FlsData, 1LL);
  if ( ((NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0)
    && (v2->SameTebFlags & 0x2000) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v5 = 1;
    }
    else
    {
      v5 = 0;
      LdrpDrainWorkQueue(0LL);
    }
    LdrpAcquireLoaderLock();
    v7 = (__int64 *)qword_18017A178;
    while ( v7 != &qword_18017A170 )
    {
      v8 = v7 - 4;
      v7 = (__int64 *)v7[1];
      v6 = *((unsigned int *)v8 + 26);
      if ( ProcessEnvironmentBlock->ImageBaseAddress != (void *)v8[6] && (v6 & 0x40000) == 0 )
      {
        v9 = (__int64 (__fastcall *)(__int64, _QWORD, __int64))v8[7];
        if ( v9 )
        {
          v6 &= 0x80004u;
          if ( (_DWORD)v6 == 524292 )
          {
            v16 = 72LL;
            v17 = 1;
            v18 = 0LL;
            v19 = 0LL;
            v20 = 0LL;
            v21 = 0LL;
            RtlActivateActivationContextUnsafeFast((__int64)&v16, v8[17]);
            if ( *((_WORD *)v8 + 55) )
              LdrpCallTlsInitializers(3LL, v8);
            if ( *((_DWORD *)v8 + 67) != 9 )
              LdrpCallInitRoutine(v9, v8[6], 3u, 0LL);
            RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
          }
        }
      }
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v22 = 72LL;
      v23 = 1;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      RtlActivateActivationContextUnsafeFast((__int64)&v22, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(3LL, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v22);
    }
    LdrpReleaseLoaderLock(v6, 19LL);
    if ( !v5 )
      LdrpDropLastInProgressCount(v11, v10);
    LdrpFreeTls(v11, v10);
  }
  if ( FlsData )
  {
    v2->FlsData = 0LL;
    RtlProcessFlsData(FlsData, 2LL);
  }
  TlsExpansionSlots = v2->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v2->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection(&FastPebLock);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, TlsExpansionSlots);
  }
  if ( (v2->SameTebFlags & 4) != 0 )
  {
    FiberData = v2->NtTib.FiberData;
    v2->NtTib.FiberData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack(v1, v0);
  if ( (v2->SameTebFlags & 0x400) != 0 && LdrInitState == 3 )
    TpTrimPools(v14, v13);
}
