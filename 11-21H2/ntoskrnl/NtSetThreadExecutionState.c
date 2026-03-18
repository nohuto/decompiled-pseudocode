/*
 * XREFs of NtSetThreadExecutionState @ 0x1407EDD60
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     PopGetLegacyPowerRequestFlags @ 0x140369870 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1403698C4 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestCreateCommon @ 0x14036A698 (PopPowerRequestCreateCommon.c)
 *     PoDestroyReasonContext @ 0x14036B090 (PoDestroyReasonContext.c)
 *     SessionIsInteractive @ 0x14036B8CC (SessionIsInteractive.c)
 *     PoCaptureReasonContext @ 0x14036B98C (PoCaptureReasonContext.c)
 *     PopSystemRequiredSet @ 0x1403B6DF8 (PopSystemRequiredSet.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406831A8 (PoEnergyContextUpdateComponentPower.c)
 *     PopNotifyConsoleUserPresent @ 0x1407F2A20 (PopNotifyConsoleUserPresent.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x1407FCC54 (PopDiagTraceSetThreadExecutionState.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall NtSetThreadExecutionState(int a1, __int64 a2)
{
  _DWORD *v2; // r12
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v7; // ebx
  _QWORD *v8; // rsi
  char LegacyPowerRequestFlags; // al
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // bl
  unsigned int SessionId; // eax
  __int64 v19; // rcx
  struct _LIST_ENTRY *v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v2 = (_DWORD *)a2;
  v21 = 0;
  P = 0LL;
  LOBYTE(a2) = KeGetCurrentThread()->PreviousMode;
  if ( !(_BYTE)a2 )
    return (unsigned int)-1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (a1 & 0x7FFFFFBC) != 0 || (a1 & 0x40) != 0 && a1 >= 0 )
    return (unsigned int)-1073741811;
  v5 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v2 < 0x7FFFFFFF0000LL )
    v5 = (__int64)v2;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v20 = Blink;
  if ( Blink || a1 >= 0 )
    goto LABEL_11;
  v7 = PoCaptureReasonContext(0LL, a2, 0LL, 1, 0LL, &P);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = P;
  v7 = PopPowerRequestCreateCommon(P, 0, &v20);
  if ( v7 >= 0 )
  {
    Blink = v20;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v20;
LABEL_11:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, a1, &v21);
    *v2 = v21;
    if ( a1 >= 0 )
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, (unsigned int)a1);
      if ( (a1 & 1) != 0 )
      {
        PopAcquirePolicyLock(v11);
        PopSystemRequiredSet();
        PopReleasePolicyLock(v13, v12);
      }
      if ( (a1 & 2) != 0 )
      {
        PoEnergyContextUpdateComponentPower((__int64)KeGetCurrentThread()->ApcState.Process, 12, 3LL);
        PopAcquirePolicyLock(v14);
        v17 = 0;
        if ( PopPlatformAoAc && !PopLidOpened )
          v17 = PopConsoleExternalDisplayConnected == 0;
        PopReleasePolicyLock(v16, v15);
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) && !v17 )
        {
          LOBYTE(v19) = 1;
          PopNotifyConsoleUserPresent(v19, 8LL);
        }
      }
    }
    else
    {
      PopApplyLegacyPowerRequestFlags(Blink, a1, LegacyPowerRequestFlags);
    }
    return 0;
  }
  if ( v8 )
    PoDestroyReasonContext(v8);
  return (unsigned int)v7;
}
