/*
 * XREFs of PpmQueryPlatformStateResidency @ 0x1403D7180
 * Callers:
 *     PopCalculateIdleInformation @ 0x1403C7F20 (PopCalculateIdleInformation.c)
 *     PpmQueryDripsResidency @ 0x140585EE0 (PpmQueryDripsResidency.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x140587714 (PopQueryBootSessionStandbyActivationInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PpmQueryPlatformStateResidency(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  unsigned int v4; // ebp
  unsigned int *Pool2; // rax
  unsigned int *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _PPM_IDLE_STATES *IdleStates; // rcx

  v1 = -1LL;
  v2 = a1;
  if ( PpmPlatformStates )
  {
    if ( *(_QWORD *)(PpmPlatformStates + 40) )
    {
      v4 = *(_DWORD *)PpmPlatformStates;
      if ( a1 != -1 && a1 < v4 )
      {
        Pool2 = (unsigned int *)ExAllocatePool2(64LL, 16 * v4 + 8, 1766674512LL);
        v6 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = v4;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
          IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
          if ( IdleStates
            && (*(int (__fastcall **)(void *, unsigned int *))(PpmPlatformStates + 40))(
                 IdleStates->PrepareInfo.Context,
                 v6) >= 0 )
          {
            v1 = *(_QWORD *)&v6[4 * v2 + 2];
          }
          PopReleaseRwLock((__int64 *)&PpmIdlePolicyLock);
          ExFreePoolWithTag(v6, 0x694D5050u);
        }
      }
    }
  }
  return v1;
}
