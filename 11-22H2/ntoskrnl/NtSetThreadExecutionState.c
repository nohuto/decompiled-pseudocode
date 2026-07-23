/*
 * XREFs of NtSetThreadExecutionState @ 0x1407A92D0
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     SessionIsInteractive @ 0x14032D28C (SessionIsInteractive.c)
 *     PopGetLegacyPowerRequestFlags @ 0x14032EC58 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14032ECAC (PopApplyLegacyPowerRequestFlags.c)
 *     PopSystemRequiredSet @ 0x1403B43BC (PopSystemRequiredSet.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406A7514 (PoEnergyContextUpdateComponentPower.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3CC4 (PopNotifyConsoleUserPresent.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC41C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC4C8 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x1408657D4 (PopDiagTraceSetThreadExecutionState.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char LegacyPowerRequestFlags; // al
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  bool v18; // bl
  bool v19; // di
  unsigned int SessionId; // eax
  __int64 v21; // rcx
  struct _LIST_ENTRY *v22; // [rsp+30h] [rbp-38h] BYREF
  EXECUTION_STATE v23; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v23 = 0;
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
  v22 = Blink;
  if ( Blink || (NewFlags & 0x80000000) == 0 )
    goto LABEL_11;
  v8 = PoCaptureReasonContext(0LL, PreviousMode, 0LL, 1, 0LL, (__int64 *)&P);
  if ( v8 < 0 )
    return v8;
  v9 = P;
  v8 = PopPowerRequestCreateCommon(P, 0, &v22);
  if ( v8 >= 0 )
  {
    Blink = v22;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v22;
LABEL_11:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, NewFlags, (int *)&v23);
    *PreviousFlags = v23;
    if ( (NewFlags & 0x80000000) == 0 )
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, NewFlags);
      if ( (NewFlags & 1) != 0 )
      {
        PopAcquirePolicyLock(v15);
        PopSystemRequiredSet();
        PopReleasePolicyLock();
      }
      if ( (NewFlags & 2) != 0 )
      {
        PoEnergyContextUpdateComponentPower((__int64)KeGetCurrentThread()->ApcState.Process, 12, 3LL);
        PopAcquirePolicyLock(v16);
        if ( !PopPlatformAoAc || PopLidOpened || PopConsoleExternalDisplayConnected )
        {
          LOBYTE(v17) = 1;
          PopAcquireAdaptiveLock(v17);
          v18 = PopAdaptiveBootContext != 0;
          PopReleaseAdaptiveLock();
          v19 = v18;
        }
        else
        {
          v19 = 1;
        }
        PopReleasePolicyLock();
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) && !v19 )
        {
          LOBYTE(v21) = 1;
          PopNotifyConsoleUserPresent(v21, 8LL);
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
    PoDestroyReasonContext(v9, v10, v11, v12);
  return v8;
}
