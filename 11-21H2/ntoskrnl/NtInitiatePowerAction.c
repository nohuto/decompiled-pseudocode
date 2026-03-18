/*
 * XREFs of NtInitiatePowerAction @ 0x1407FEA60
 * Callers:
 *     IopWarmEjectDevice @ 0x14095A67C (IopWarmEjectDevice.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140A6BCF0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PopBsdHandleRequest @ 0x1403697C8 (PopBsdHandleRequest.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14038B744 (PopThermalEventTransitionEnableDeepSleep.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x1407FE9A0 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall NtInitiatePowerAction(int a1, int a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // edi
  __int64 v6; // rbx
  char PreviousMode; // r12
  __int64 Pool2; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v22[4]; // [rsp+38h] [rbp-28h] BYREF
  int v23; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+4Ch] [rbp-14h]
  __int128 v25; // [rsp+50h] [rbp-10h]

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
  v22[2] = 0;
  v22[0] = a1;
  v22[1] = a3;
  v24 = 128;
  v25 = 0LL;
  if ( !PreviousMode && a1 == 6 && (a3 & 0x3000000) != 0 )
  {
    v23 = 15;
  }
  else
  {
    v23 = 4;
    PopDiagTracePolicyInitiatePowerActionApiCall(a1, a2);
  }
  if ( !a4 )
  {
    Pool2 = ExAllocatePool2(64LL, 56LL, 1466122576LL);
    v6 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_DWORD *)(Pool2 + 24) = 0;
    *(_QWORD *)(Pool2 + 48) = &v23;
    KeInitializeEvent((PRKEVENT)Pool2, NotificationEvent, 0);
    v24 |= 0x20u;
    *(_QWORD *)&v25 = v6;
  }
  if ( (unsigned int)(a1 - 4) <= 2 && (BYTE8(PopBsdPowerTransition) & 8) == 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 8u;
    LOBYTE(PopBsdPowerTransitionExtension) = dword_140C227D4;
    PopBsdHandleRequest(8);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
  PopAcquirePolicyLock(a1);
  PopExecutePowerAction((unsigned int)&v23, 0, (unsigned int)v22, a2, 1);
  PopReleasePolicyLock(v14, v13);
  PopThermalEventTransitionEnableDeepSleep(a1);
  if ( v6 )
  {
    v15 = v6 + 32;
    if ( !*(_QWORD *)(v6 + 32) )
      goto LABEL_23;
    v5 = KeWaitForSingleObject((PVOID)v6, Suspended, 0, 1u, &Timeout);
    if ( v5 == 258 && (byte_140C227C1 & 3) != 0 )
      v5 = KeWaitForSingleObject((PVOID)v6, Suspended, 0, 1u, 0LL);
    PopAcquirePolicyLock(v16);
    v18 = *(_QWORD *)v15;
    if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || (v19 = *(_QWORD **)(v6 + 40), *v19 != v15) )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    PopReleasePolicyLock(v18, v17);
    if ( v5 >= 0 )
    {
LABEL_23:
      v5 = *(_DWORD *)(v6 + 24);
      if ( v5 >= 0 )
        v5 = 0;
    }
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  return (unsigned int)v5;
}
