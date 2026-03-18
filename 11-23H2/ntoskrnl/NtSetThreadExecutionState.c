/*
 * XREFs of NtSetThreadExecutionState @ 0x1407A8D20
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     MmGetSessionIdEx @ 0x1402A1720 (MmGetSessionIdEx.c)
 *     PopPowerRequestCreateCommon @ 0x14032BD78 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14032D2CC (PoDestroyReasonContext.c)
 *     SessionIsInteractive @ 0x14032D42C (SessionIsInteractive.c)
 *     PopGetLegacyPowerRequestFlags @ 0x14032EDF8 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14032EE4C (PopApplyLegacyPowerRequestFlags.c)
 *     PopSystemRequiredSet @ 0x1403B4A4C (PopSystemRequiredSet.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406A7514 (PoEnergyContextUpdateComponentPower.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3744 (PopNotifyConsoleUserPresent.c)
 *     PopAcquireAdaptiveLock @ 0x1407EBE9C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EBF48 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x1408653B4 (PopDiagTraceSetThreadExecutionState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall NtSetThreadExecutionState(int a1, _DWORD *a2)
{
  char PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v8; // ebx
  _QWORD *v9; // rsi
  char LegacyPowerRequestFlags; // al
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // bl
  bool v21; // di
  unsigned int SessionId; // eax
  __int64 v23; // rcx
  struct _LIST_ENTRY *v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v25 = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return (unsigned int)-1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (a1 & 0x7FFFFFBC) != 0 || (a1 & 0x40) != 0 && a1 >= 0 )
    return (unsigned int)-1073741811;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v6 = (__int64)a2;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v24 = Blink;
  if ( Blink || a1 >= 0 )
    goto LABEL_11;
  v8 = PoCaptureReasonContext(0LL, PreviousMode, 0LL, 1, 0LL, (__int64 *)&P);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = P;
  v8 = PopPowerRequestCreateCommon(P, 0, &v24);
  if ( v8 >= 0 )
  {
    Blink = v24;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v24;
LABEL_11:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, a1, &v25);
    *a2 = v25;
    if ( a1 >= 0 )
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, (unsigned int)a1);
      if ( (a1 & 1) != 0 )
      {
        PopAcquirePolicyLock(v12);
        PopSystemRequiredSet();
        PopReleasePolicyLock(v14, v13, v15);
      }
      if ( (a1 & 2) != 0 )
      {
        PoEnergyContextUpdateComponentPower((__int64)KeGetCurrentThread()->ApcState.Process, 12, 3LL);
        PopAcquirePolicyLock(v16);
        if ( !PopPlatformAoAc || PopLidOpened || PopConsoleExternalDisplayConnected )
        {
          LOBYTE(v18) = 1;
          PopAcquireAdaptiveLock(v18);
          v20 = PopAdaptiveBootContext != 0;
          PopReleaseAdaptiveLock();
          v21 = v20;
        }
        else
        {
          v21 = 1;
        }
        PopReleasePolicyLock(v18, v17, v19);
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) && !v21 )
        {
          LOBYTE(v23) = 1;
          PopNotifyConsoleUserPresent(v23, 8LL);
        }
      }
    }
    else
    {
      PopApplyLegacyPowerRequestFlags(Blink, a1, LegacyPowerRequestFlags);
    }
    return 0;
  }
  if ( v9 )
    PoDestroyReasonContext(v9);
  return (unsigned int)v8;
}
