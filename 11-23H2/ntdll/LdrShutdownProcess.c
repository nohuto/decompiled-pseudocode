/*
 * XREFs of LdrShutdownProcess @ 0x1800514A0
 * Callers:
 *     RtlExitUserProcess @ 0x180051160 (RtlExitUserProcess.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026AE0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028AE0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180028BA4 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x1800297D4 (LdrpCallTlsInitializers.c)
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 *     RtlProcessFlsData @ 0x180051710 (RtlProcessFlsData.c)
 *     SbCleanupTrace @ 0x1800518D0 (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x180051930 (RtlDetectHeapLeaks.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // rdi
  _PEB *ProcessEnvironmentBlock; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  void *FlsData; // rcx
  char v4; // r14
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64); // r15
  struct _PEB *v8; // rax
  REGHANDLE v9; // rcx
  REGHANDLE v10; // rcx
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h] BYREF
  int v13; // [rsp+58h] [rbp-B0h]
  __int128 v14; // [rsp+60h] [rbp-A8h]
  __int128 v15; // [rsp+70h] [rbp-98h]
  __int128 v16; // [rsp+80h] [rbp-88h]
  __int64 v17; // [rsp+90h] [rbp-78h]
  __int64 v18; // [rsp+A0h] [rbp-68h] BYREF
  int v19; // [rsp+A8h] [rbp-60h]
  __int128 v20; // [rsp+B0h] [rbp-58h]
  __int128 v21; // [rsp+C0h] [rbp-48h]
  __int128 v22; // [rsp+D0h] [rbp-38h]
  __int64 v23; // [rsp+E0h] [rbp-28h]

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_180187488 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      7266,
      (__int64)"LdrShutdownProcess",
      2u,
      "Process 0x%p (%wZ) exiting\n",
      v0->ClientId.UniqueProcess,
      &CommandLine);
    qword_180187490 = (__int64)v0->ClientId.UniqueThread;
    byte_180187488 = 1;
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
      v5 = (__int64 *)qword_180187478;
      while ( v5 != &qword_180187470 )
      {
        v6 = (__int64)(v5 - 4);
        v5 = (__int64 *)v5[1];
        v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v6 + 56);
        if ( v7 && (*(_DWORD *)(v6 + 104) & 0x80000) != 0 )
        {
          v12 = 72LL;
          v13 = 1;
          v14 = 0LL;
          v15 = 0LL;
          v16 = 0LL;
          v17 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)&v12, *(_QWORD *)(v6 + 136));
          if ( *(_WORD *)(v6 + 110) )
          {
            if ( v0->ThreadLocalStoragePointer )
              LdrpCallTlsInitializers(0, v6);
          }
          LdrpCallInitRoutine(v7, *(_QWORD *)(v6 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v12);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v0->ThreadLocalStoragePointer )
      {
        v18 = 72LL;
        v19 = 1;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)&v18, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v18);
      }
    }
    else
    {
      v4 = 1;
    }
    v8 = NtCurrentPeb();
    if ( VSMEnclaveProvidersRegistered && v8->ProcessHeap )
    {
      v9 = qword_180181990;
      dword_180181970 = 0;
      qword_180181990 = 0LL;
      EtwNotificationUnregister(v9, 0LL);
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( CastGuardProvidersRegistered )
    {
      v10 = qword_1801819C8;
      dword_1801819A8 = 0;
      qword_1801819C8 = 0LL;
      EtwNotificationUnregister(v10, 0LL);
      CastGuardProvidersRegistered = 0;
    }
    if ( !v4 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
