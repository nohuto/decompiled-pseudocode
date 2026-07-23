/*
 * XREFs of LdrShutdownProcess @ 0x180054420
 * Callers:
 *     RtlExitUserProcess @ 0x180054350 (RtlExitUserProcess.c)
 * Callees:
 *     EtwEventUnregister @ 0x1800065E0 (EtwEventUnregister.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003F140 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003FEF0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x18003FFAC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180042C6C (LdrpCallTlsInitializers.c)
 *     RtlProcessFlsData @ 0x1800546F0 (RtlProcessFlsData.c)
 *     SbCleanupTrace @ 0x180054AC8 (SbCleanupTrace.c)
 *     RtlDetectHeapLeaks @ 0x180054B20 (RtlDetectHeapLeaks.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __noreturn LdrShutdownProcess(void)
{
  struct _TEB *v0; // rdi
  _PEB *ProcessEnvironmentBlock; // rbx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  void *FlsData; // rcx
  char v4; // r14
  REGHANDLE v5; // rcx
  __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64); // r15
  _UNICODE_STRING CommandLine; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  int v11; // [rsp+58h] [rbp-B0h]
  __int128 v12; // [rsp+60h] [rbp-A8h]
  __int128 v13; // [rsp+70h] [rbp-98h]
  __int128 v14; // [rsp+80h] [rbp-88h]
  __int64 v15; // [rsp+90h] [rbp-78h]
  __int64 v16; // [rsp+A0h] [rbp-68h] BYREF
  int v17; // [rsp+A8h] [rbp-60h]
  __int128 v18; // [rsp+B0h] [rbp-58h]
  __int128 v19; // [rsp+C0h] [rbp-48h]
  __int128 v20; // [rsp+D0h] [rbp-38h]
  __int64 v21; // [rsp+E0h] [rbp-28h]

  v0 = NtCurrentTeb();
  ProcessEnvironmentBlock = v0->ProcessEnvironmentBlock;
  if ( !byte_18017A188 )
  {
    CommandLine = ProcessEnvironmentBlock->ProcessParameters->CommandLine;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 1) == 0 )
      CommandLine.Buffer = (wchar_t *)((char *)CommandLine.Buffer + (unsigned __int64)ProcessParameters);
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      7156,
      (__int64)"LdrShutdownProcess",
      2u,
      "Process 0x%p (%wZ) exiting\n",
      v0->ClientId.UniqueProcess,
      &CommandLine);
    qword_18017A190 = (__int64)v0->ClientId.UniqueThread;
    byte_18017A188 = 1;
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
      v6 = (__int64 *)qword_18017A178;
      while ( v6 != &qword_18017A170 )
      {
        v7 = (__int64)(v6 - 4);
        v6 = (__int64 *)v6[1];
        v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v7 + 56);
        if ( v8 && (*(_DWORD *)(v7 + 104) & 0x80000) != 0 )
        {
          v10 = 72LL;
          v11 = 1;
          v12 = 0LL;
          v13 = 0LL;
          v14 = 0LL;
          v15 = 0LL;
          RtlActivateActivationContextUnsafeFast((__int64)&v10, *(_QWORD *)(v7 + 136));
          if ( *(_WORD *)(v7 + 110) && v0->ThreadLocalStoragePointer )
            LdrpCallTlsInitializers(0, v7);
          LdrpCallInitRoutine(v8, *(_QWORD *)(v7 + 48), 0, 1LL);
          RtlDeactivateActivationContextUnsafeFast((__int64)&v10);
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && v0->ThreadLocalStoragePointer )
      {
        v16 = 72LL;
        v17 = 1;
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)&v16, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(0, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
      }
    }
    else
    {
      v4 = 1;
    }
    if ( NtCurrentPeb()->ProcessHeap && VSMEnclaveProvidersRegistered )
    {
      v5 = qword_180174950;
      dword_180174930 = 0;
      qword_180174950 = 0LL;
      EtwEventUnregister(v5);
      VSMEnclaveProvidersRegistered = 0;
    }
    if ( !v4 )
      RtlDetectHeapLeaks();
    SbCleanupTrace();
  }
}
