/*
 * XREFs of LdrShutdownThread @ 0x1800294B0
 * Callers:
 *     RtlExitUserThread @ 0x18005DFF0 (RtlExitUserThread.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026C30 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028CB0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180028D74 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x1800299A4 (LdrpCallTlsInitializers.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     LdrpReleaseLoaderLock @ 0x180051124 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051388 (LdrpAcquireLoaderLock.c)
 *     RtlProcessFlsData @ 0x180051870 (RtlProcessFlsData.c)
 *     LdrpDropLastInProgressCount @ 0x1800522D4 (LdrpDropLastInProgressCount.c)
 *     TpTrimPools @ 0x180069420 (TpTrimPools.c)
 *     LdrpFreeTls @ 0x1800708CC (LdrpFreeTls.c)
 *     RtlFreeThreadActivationContextStack @ 0x180073870 (RtlFreeThreadActivationContextStack.c)
 */

void __noreturn LdrShutdownThread(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct _TEB *v2; // rbx
  _PEB *ProcessEnvironmentBlock; // r12
  void *FlsData; // r15
  $DF4FA9F692459BA109B62B4026D83C94 *v5; // rdi
  char v6; // r14
  __int64 v7; // rcx
  __int64 *v8; // r13
  __int64 *v9; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64); // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  void **TlsExpansionSlots; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *FiberData; // r8
  __int64 v17; // [rsp+30h] [rbp-C8h] BYREF
  int v18; // [rsp+38h] [rbp-C0h]
  __int128 v19; // [rsp+40h] [rbp-B8h]
  __int128 v20; // [rsp+50h] [rbp-A8h]
  __int128 v21; // [rsp+60h] [rbp-98h]
  __int64 v22; // [rsp+70h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-78h] BYREF
  int v24; // [rsp+88h] [rbp-70h]
  __int128 v25; // [rsp+90h] [rbp-68h]
  __int128 v26; // [rsp+A0h] [rbp-58h]
  __int128 v27; // [rsp+B0h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-38h]
  _PEB *v29; // [rsp+108h] [rbp+10h]

  v2 = NtCurrentTeb();
  ProcessEnvironmentBlock = v2->ProcessEnvironmentBlock;
  v29 = ProcessEnvironmentBlock;
  FlsData = v2->FlsData;
  if ( FlsData )
    RtlProcessFlsData(v2->FlsData, 1LL);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0 )
  {
    v5 = &v2->6126;
    if ( (v2->SameTebFlags & 0x2000) == 0 )
    {
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        v6 = 1;
      }
      else
      {
        v6 = 0;
        LdrpDrainWorkQueue(0LL);
      }
      LdrpAcquireLoaderLock();
      v8 = (__int64 *)qword_1801843B8;
      while ( v8 != &qword_1801843B0 )
      {
        v9 = v8 - 4;
        v8 = (__int64 *)v8[1];
        v7 = *((unsigned int *)v9 + 26);
        if ( ProcessEnvironmentBlock->ImageBaseAddress != (void *)v9[6] && (v7 & 0x40000) == 0 )
        {
          v10 = (__int64 (__fastcall *)(__int64, _QWORD, __int64))v9[7];
          if ( v10 )
          {
            v7 &= 0x80004u;
            if ( (_DWORD)v7 == 524292 )
            {
              v17 = 72LL;
              v18 = 1;
              v19 = 0LL;
              v20 = 0LL;
              v21 = 0LL;
              v22 = 0LL;
              RtlActivateActivationContextUnsafeFast((__int64)&v17, v9[17]);
              if ( *((_WORD *)v9 + 55) )
                LdrpCallTlsInitializers(3LL, v9);
              LdrpCallInitRoutine(v10, v9[6], 3u, 0LL);
              RtlDeactivateActivationContextUnsafeFast((__int64)&v17);
            }
          }
          ProcessEnvironmentBlock = v29;
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v23 = 72LL;
        v24 = 1;
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)&v23, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(3LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v23);
      }
      LdrpReleaseLoaderLock(v7, 19LL);
      if ( !v6 )
        LdrpDropLastInProgressCount(v12, v11);
      LdrpFreeTls(v12, v11);
    }
  }
  else
  {
    v5 = &v2->6126;
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
  if ( (v5->SameTebFlags & 4) != 0 )
  {
    FiberData = v2->NtTib.FiberData;
    v2->NtTib.FiberData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack(v1, v0);
  if ( (v5->SameTebFlags & 0x400) != 0 && LdrInitState == 3 )
    TpTrimPools(v15, v14);
}
