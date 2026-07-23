/*
 * XREFs of NtInitiatePowerAction @ 0x14098B410
 * Callers:
 *     IopWarmEjectDevice @ 0x14096F1EC (IopWarmEjectDevice.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA6980 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14058FAC8 (PopThermalEventTransitionEnableDeepSleep.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x1409908CC (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE LightestSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  __int64 v6; // rbx
  char PreviousMode; // r12
  __int64 Pool2; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  _QWORD *v24; // rax
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-40h]
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-40h]
  __int64 v27; // [rsp+28h] [rbp-38h]
  __int64 v28; // [rsp+28h] [rbp-38h]
  LARGE_INTEGER v29; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v30[4]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-18h] BYREF
  int v32; // [rsp+4Ch] [rbp-14h]
  __int128 v33; // [rsp+50h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  v29.QuadPart = -1500000000LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( SystemAction == PowerActionWarmEject )
      return -1073741811;
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, CurrentThread->PreviousMode) )
      return -1073741727;
  }
  if ( LightestSystemState > PowerSystemMaximum
    || SystemAction > PowerActionWarmEject
    || (Flags & 0x10000000) != 0
    || SystemAction == PowerActionSleep && LightestSystemState >= PowerSystemHibernate
    || (Flags & 0xCFFFFC0) != 0 )
  {
    return -1073741811;
  }
  if ( (unsigned int)(SystemAction - 4) > 2 && PsIsCurrentThreadInServerSilo() )
    return -1073741637;
  v30[2] = 0;
  v30[0] = SystemAction;
  v30[1] = Flags;
  v32 = 128;
  v33 = 0LL;
  if ( !PreviousMode && SystemAction == PowerActionShutdownOff && (Flags & 0x3000000) != 0 )
  {
    v31 = 15;
  }
  else
  {
    v31 = 4;
    PopDiagTracePolicyInitiatePowerActionApiCall((unsigned int)SystemAction, (unsigned int)LightestSystemState);
  }
  if ( !Asynchronous )
  {
    Pool2 = ExAllocatePool2(64LL, 56LL, 1466122576LL);
    v6 = Pool2;
    if ( !Pool2 )
      return -1073741670;
    *(_DWORD *)(Pool2 + 24) = 0;
    *(_QWORD *)(Pool2 + 48) = &v31;
    KeInitializeEvent((PRKEVENT)Pool2, NotificationEvent, 0);
    v32 |= 0x20u;
    *(_QWORD *)&v33 = v6;
  }
  if ( (unsigned int)(SystemAction - 4) <= 2 && (BYTE8(PopBsdPowerTransition) & 8) == 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 8u;
    LOBYTE(PopBsdPowerTransitionExtension) = dword_140C3CE34;
    PopBsdHandleRequest(0xBu);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
  PopAcquirePolicyLock(SystemAction);
  PopExecutePowerAction(&v31, 0, v30, LightestSystemState, 1u);
  PopReleasePolicyLock(v15, v14, v16, v17, Timeouta, v27);
  PopThermalEventTransitionEnableDeepSleep(SystemAction);
  if ( v6 )
  {
    v18 = v6 + 32;
    if ( !*(_QWORD *)(v6 + 32) )
      goto LABEL_34;
    v5 = KeWaitForSingleObject((PVOID)v6, Suspended, 0, 1u, &v29);
    if ( v5 == 258 && (byte_140C3CE21 & 3) != 0 )
      v5 = KeWaitForSingleObject((PVOID)v6, Suspended, 0, 1u, 0LL);
    PopAcquirePolicyLock(v19);
    v23 = *(_QWORD *)v18;
    if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18 || (v24 = *(_QWORD **)(v6 + 40), *v24 != v18) )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    PopReleasePolicyLock(v23, v20, v21, v22, Timeout, v28);
    if ( v5 >= 0 )
    {
LABEL_34:
      v5 = *(_DWORD *)(v6 + 24);
      if ( v5 >= 0 )
        v5 = 0;
    }
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  return v5;
}
