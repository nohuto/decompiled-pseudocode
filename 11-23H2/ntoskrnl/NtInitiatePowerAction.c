/*
 * XREFs of NtInitiatePowerAction @ 0x14098B360
 * Callers:
 *     IopWarmEjectDevice @ 0x14096F13C (IopWarmEjectDevice.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA68C0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D388 (PopBsdHandleRequest.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14058FA38 (PopThermalEventTransitionEnableDeepSleep.c)
 *     SeSinglePrivilegeCheck @ 0x140737B00 (SeSinglePrivilegeCheck.c)
 *     PopExecutePowerAction @ 0x1409897F4 (PopExecutePowerAction.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x14099081C (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall NtInitiatePowerAction(int a1, int a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // edi
  __int64 v6; // rbx
  char PreviousMode; // r12
  __int64 Pool2; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v24[4]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-18h] BYREF
  int v26; // [rsp+4Ch] [rbp-14h]
  __int128 v27; // [rsp+50h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  Timeout.QuadPart = -1500000000LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 == 7 )
      return 3221225485LL;
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, CurrentThread->PreviousMode) )
      return 3221225569LL;
  }
  if ( a2 > 7 || a1 > 7 || (a3 & 0x10000000) != 0 || a1 == 2 && a2 >= 5 || (a3 & 0xCFFFFC0) != 0 )
    return 3221225485LL;
  if ( (unsigned int)(a1 - 4) > 2 && PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  v24[2] = 0;
  v24[0] = a1;
  v24[1] = a3;
  v26 = 128;
  v27 = 0LL;
  if ( !PreviousMode && a1 == 6 && (a3 & 0x3000000) != 0 )
  {
    v25 = 15;
  }
  else
  {
    v25 = 4;
    PopDiagTracePolicyInitiatePowerActionApiCall((unsigned int)a1, (unsigned int)a2);
  }
  if ( !a4 )
  {
    Pool2 = ExAllocatePool2(64LL, 56LL, 1466122576LL);
    v6 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_DWORD *)(Pool2 + 24) = 0;
    *(_QWORD *)(Pool2 + 48) = &v25;
    KeInitializeEvent((PRKEVENT)Pool2, NotificationEvent, 0);
    v26 |= 0x20u;
    *(_QWORD *)&v27 = v6;
  }
  if ( (unsigned int)(a1 - 4) <= 2 && (BYTE8(PopBsdPowerTransition) & 8) == 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 8u;
    LOBYTE(PopBsdPowerTransitionExtension) = dword_140C3D0D4;
    PopBsdHandleRequest(0xBu);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
  PopAcquirePolicyLock(a1);
  PopExecutePowerAction(&v25, 0, v24, a2, 1u);
  PopReleasePolicyLock(v15, v14, v16);
  PopThermalEventTransitionEnableDeepSleep(a1);
  if ( v6 )
  {
    v17 = v6 + 32;
    if ( !*(_QWORD *)(v6 + 32) )
      goto LABEL_34;
    v5 = KeWaitForSingleObject((PVOID)v6, Suspended, 0, 1u, &Timeout);
    if ( v5 == 258 && (byte_140C3D0C1 & 3) != 0 )
      v5 = KeWaitForSingleObject((PVOID)v6, Suspended, 0, 1u, 0LL);
    PopAcquirePolicyLock(v18);
    v21 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 || (v22 = *(_QWORD **)(v6 + 40), *v22 != v17) )
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    PopReleasePolicyLock(v21, v19, v20);
    if ( v5 >= 0 )
    {
LABEL_34:
      v5 = *(_DWORD *)(v6 + 24);
      if ( v5 >= 0 )
        v5 = 0;
    }
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  return (unsigned int)v5;
}
