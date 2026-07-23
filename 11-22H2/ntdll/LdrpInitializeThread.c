/*
 * XREFs of LdrpInitializeThread @ 0x180028A58
 * Callers:
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026C30 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028CB0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180028D74 (LdrpCallInitRoutine.c)
 *     LdrpAllocateTls @ 0x18002977C (LdrpAllocateTls.c)
 *     LdrpCallTlsInitializers @ 0x1800299A4 (LdrpCallTlsInitializers.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 *     LdrpReleaseLoaderLock @ 0x180051124 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180051388 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x1800522D4 (LdrpDropLastInProgressCount.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x1800738A8 (RtlpInitializeThreadActivationContextStack.c)
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x18009F470 (ZwDelayExecution.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrpInitializeThread(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v3; // r10
  _PEB *ProcessEnvironmentBlock; // rsi
  __int64 v5; // r10
  __int64 result; // rax
  NTSTATUS Tls; // eax
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  __int64 i; // rbx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-A8h] BYREF
  int v16; // [rsp+38h] [rbp-A0h]
  __int128 v17; // [rsp+40h] [rbp-98h]
  __int128 v18; // [rsp+50h] [rbp-88h]
  __int128 v19; // [rsp+60h] [rbp-78h]
  __int64 v20; // [rsp+70h] [rbp-68h]
  __int64 v21; // [rsp+80h] [rbp-58h] BYREF
  int v22; // [rsp+88h] [rbp-50h]
  __int128 v23; // [rsp+90h] [rbp-48h]
  __int128 v24; // [rsp+A0h] [rbp-38h]
  __int128 v25; // [rsp+B0h] [rbp-28h]
  __int64 v26; // [rsp+C0h] [rbp-18h]
  LARGE_INTEGER DelayInterval; // [rsp+E8h] [rbp+10h] BYREF

  v3 = NtCurrentTeb();
  ProcessEnvironmentBlock = v3->ProcessEnvironmentBlock;
  if ( UseCOR && (v3->SameTebFlags & 0x400) != 0 )
  {
    a3 = MEMORY[0x7FFE0330];
    a2 = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    *(_QWORD *)(a1 + 128) = a2 ^ MEMORY[0x7FFE0330];
  }
  RtlpInitializeThreadActivationContextStack(v3, a2, a3, a1);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0
    || (result = (__int64)NtCurrentTeb(), (*(_BYTE *)(result + 6126) & 0x20) != 0) )
  {
    result = 0x2000LL;
    if ( (*(_WORD *)(v5 + 6126) & 0x2000) == 0 )
    {
      while ( 1 )
      {
        Tls = LdrpAllocateTls();
        v8 = Tls;
        if ( Tls != -1073741801 )
          break;
        DelayInterval.QuadPart = -3000000LL;
        ZwDelayExecution(0, &DelayInterval);
      }
      if ( Tls < 0 )
      {
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, Tls);
        RtlRaiseStatus(v8);
      }
      LdrpDrainWorkQueue(0LL);
      LdrpAcquireLoaderLock();
      for ( i = qword_180184390; (__int64 *)i != &qword_180184390; i = *(_QWORD *)i )
      {
        if ( *(int *)(*(_QWORD *)(i + 152) + 56LL) >= 9
          && ProcessEnvironmentBlock->ImageBaseAddress != *(void **)(i + 48) )
        {
          v11 = *(_DWORD *)(i + 104);
          if ( (v11 & 0x40000) == 0 )
          {
            v12 = *(_QWORD *)(i + 56);
            if ( v12 )
            {
              if ( (v11 & 0x80004) == 0x80004 )
              {
                if ( byte_1801843C8 )
                  goto LABEL_22;
                v15 = 72LL;
                v16 = 1;
                v17 = 0LL;
                v18 = 0LL;
                v19 = 0LL;
                v20 = 0LL;
                RtlActivateActivationContextUnsafeFast(&v15, *(_QWORD *)(i + 136));
                if ( *(_WORD *)(i + 110) )
                  LdrpCallTlsInitializers(2LL, i);
                LdrpCallInitRoutine(v12, *(_QWORD *)(i + 48), 2LL);
                RtlDeactivateActivationContextUnsafeFast((__int64)&v15);
              }
            }
          }
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 110) && !byte_1801843C8 )
      {
        v21 = 72LL;
        v22 = 1;
        v23 = 0LL;
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        RtlActivateActivationContextUnsafeFast(&v21, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(2LL, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)&v21);
      }
LABEL_22:
      LdrpReleaseLoaderLock(v9, 21LL);
      return LdrpDropLastInProgressCount(v14, v13);
    }
  }
  return result;
}
