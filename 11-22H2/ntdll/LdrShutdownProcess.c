/*
 * XREFs of LdrShutdownProcess @ 0x180051600
 * Callers:
 *     RtlExitUserProcess @ 0x1800512C0 (RtlExitUserProcess.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026C30 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028CB0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180028D74 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x1800299A4 (LdrpCallTlsInitializers.c)
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
 *     RtlProcessFlsData @ 0x180051870 (RtlProcessFlsData.c)
 *     SbCleanupTrace @ 0x180051A30 (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x180051A90 (RtlDetectHeapLeaks.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void LdrShutdownProcess()
{
  struct _TEB *v0; // rdi
  _PEB *ProcessEnvironmentBlock; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  void *FlsData; // rcx
  char v4; // r14
  __int64 *v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64); // r15
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  struct _PEB *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+58h] [rbp-B0h]
  __int128 v18; // [rsp+60h] [rbp-A8h]
  __int128 v19; // [rsp+70h] [rbp-98h]
  __int128 v20; // [rsp+80h] [rbp-88h]
  __int64 v21; // [rsp+90h] [rbp-78h]
  __int64 v22; // [rsp+A0h] [rbp-68h] BYREF
  int v23; // [rsp+A8h] [rbp-60h]
  __int128 v24; // [rsp+B0h] [rbp-58h]
  __int128 v25; // [rsp+C0h] [rbp-48h]
  __int128 v26; // [rsp+D0h] [rbp-38h]
  __int64 v27; // [rsp+E0h] [rbp-28h]

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_1801843C8 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      7260LL,
      (__int64)"LdrShutdownProcess",
      2LL,
      "Process 0x%p (%wZ) exiting\n",
      v0->ClientId.UniqueProcess,
      &CommandLine);
    qword_1801843D0 = (__int64)v0->ClientId.UniqueThread;
    byte_1801843C8 = 1;
    if ( g_ShimsEnabled )
      ((void (*)(void))(__ROR8__(g_pfnSE_ProcessDying, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))();
    FlsData = v0->FlsData;
    if ( FlsData )
      RtlProcessFlsData(FlsData, 1LL);
    if ( (LdrpPolicyBits & 2) != 0
      || (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x40000000) != 0
      || (AvrfAppVerifierMode & 1) != 0 )
    {
      v4 = 0;
      v5 = (__int64 *)qword_1801843B8;
      while ( v5 != &qword_1801843B0 )
      {
        v6 = (unsigned __int64)(v5 - 4);
        v5 = (__int64 *)v5[1];
        v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v6 + 56);
        if ( v7 && (*(_DWORD *)(v6 + 104) & 0x80000) != 0 )
        {
          v16 = 72LL;
          v17 = 1;
          v18 = 0LL;
          v19 = 0LL;
          v20 = 0LL;
          v21 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)&v16, *(_QWORD *)(v6 + 136));
          if ( *(_WORD *)(v6 + 110) )
          {
            if ( v0->ThreadLocalStoragePointer )
              LdrpCallTlsInitializers(0, v6, v8, v9);
          }
          LdrpCallInitRoutine(v7, *(_QWORD *)(v6 + 48), 0LL, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v0->ThreadLocalStoragePointer )
      {
        v22 = 72LL;
        v23 = 1;
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)&v22, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry, v11, v12);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v22);
      }
    }
    else
    {
      v4 = 1;
    }
    v10 = NtCurrentPeb();
    if ( VSMEnclaveProvidersRegistered && v10->ProcessHeap )
    {
      v13 = qword_18017E978;
      dword_18017E958 = 0;
      qword_18017E978 = 0LL;
      EtwNotificationUnregister(v13, 0LL);
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( CastGuardProvidersRegistered )
    {
      v14 = qword_18017E9B0;
      dword_18017E990 = 0;
      qword_18017E9B0 = 0LL;
      EtwNotificationUnregister(v14, 0LL);
      CastGuardProvidersRegistered = 0;
    }
    if ( !v4 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
