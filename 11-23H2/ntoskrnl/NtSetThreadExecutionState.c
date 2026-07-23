/*
 * XREFs of NtSetThreadExecutionState @ 0x1407A8F10
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     PopPowerRequestCreateCommon @ 0x14032C008 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14032D55C (PoDestroyReasonContext.c)
 *     SessionIsInteractive @ 0x14032D6BC (SessionIsInteractive.c)
 *     PopGetLegacyPowerRequestFlags @ 0x14032F088 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14032F0DC (PopApplyLegacyPowerRequestFlags.c)
 *     PopSystemRequiredSet @ 0x1403B4C2C (PopSystemRequiredSet.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406A7514 (PoEnergyContextUpdateComponentPower.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3A14 (PopNotifyConsoleUserPresent.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC16C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC218 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x1408655F4 (PopDiagTraceSetThreadExecutionState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

NTSTATUS __cdecl NtSetThreadExecutionState(EXECUTION_STATE NewFlags, EXECUTION_STATE *PreviousFlags)
{
  char PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  NTSTATUS v8; // ebx
  _QWORD *v9; // rsi
  char LegacyPowerRequestFlags; // al
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  bool v15; // bl
  bool v16; // di
  unsigned int SessionId; // eax
  __int64 v18; // rcx
  struct _LIST_ENTRY *v19; // [rsp+30h] [rbp-38h] BYREF
  EXECUTION_STATE v20; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return -1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (NewFlags & 0x7FFFFFBC) != 0 || (NewFlags & 0x40) != 0 && (NewFlags & 0x80000000) == 0 )
    return -1073741811;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)PreviousFlags < 0x7FFFFFFF0000LL )
    v6 = (__int64)PreviousFlags;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v19 = Blink;
  if ( Blink || (NewFlags & 0x80000000) == 0 )
    goto LABEL_11;
  v8 = PoCaptureReasonContext(0LL, PreviousMode, 0LL, 1, 0LL, (__int64 *)&P);
  if ( v8 < 0 )
    return v8;
  v9 = P;
  v8 = PopPowerRequestCreateCommon(P, 0, &v19);
  if ( v8 >= 0 )
  {
    Blink = v19;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v19;
LABEL_11:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, NewFlags, (int *)&v20);
    *PreviousFlags = v20;
    if ( (NewFlags & 0x80000000) == 0 )
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, NewFlags);
      if ( (NewFlags & 1) != 0 )
      {
        PopAcquirePolicyLock(v12);
        PopSystemRequiredSet();
        PopReleasePolicyLock();
      }
      if ( (NewFlags & 2) != 0 )
      {
        PoEnergyContextUpdateComponentPower((__int64)KeGetCurrentThread()->ApcState.Process, 12, 3LL);
        PopAcquirePolicyLock(v13);
        if ( !PopPlatformAoAc || PopLidOpened || PopConsoleExternalDisplayConnected )
        {
          LOBYTE(v14) = 1;
          PopAcquireAdaptiveLock(v14);
          v15 = PopAdaptiveBootContext != 0;
          PopReleaseAdaptiveLock();
          v16 = v15;
        }
        else
        {
          v16 = 1;
        }
        PopReleasePolicyLock();
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) && !v16 )
        {
          LOBYTE(v18) = 1;
          PopNotifyConsoleUserPresent(v18, 8LL);
        }
      }
    }
    else
    {
      PopApplyLegacyPowerRequestFlags(Blink, NewFlags, LegacyPowerRequestFlags);
    }
    return 0;
  }
  if ( v9 )
    PoDestroyReasonContext(v9);
  return v8;
}
