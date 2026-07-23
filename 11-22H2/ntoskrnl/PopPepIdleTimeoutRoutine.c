/*
 * XREFs of PopPepIdleTimeoutRoutine @ 0x140354CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     PopPepComponentGetResidencyIdleState @ 0x140310758 (PopPepComponentGetResidencyIdleState.c)
 *     PopPepUpdateIdleState @ 0x1403107D8 (PopPepUpdateIdleState.c)
 *     PopPepCountReadyActivities @ 0x140313874 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x1403138C0 (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x140313A80 (PopPepPromoteActivities.c)
 *     PopPepArmIdleTimer @ 0x140354EF4 (PopPepArmIdleTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopPepIdleTimeoutRoutine()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi
  unsigned __int64 v3; // rbp
  unsigned int ready; // r15d
  unsigned int j; // esi
  __int64 v6; // r10
  unsigned int v7; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int ResidencyIdleState; // eax
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 v17; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v19; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 CurrentIrql; // al
  _DWORD *SchedulerAssist; // r9
  int v24; // eax

  v0 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 16) & 1) != 0 )
      continue;
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(i + 64));
    if ( *(_BYTE *)(i + 136) )
    {
      ready = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
      for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
      {
        v6 = 208LL * j + i + 192;
        if ( *(_DWORD *)(v6 + 176) != *(_DWORD *)(v6 + 188) - 1 && !**(_DWORD **)(v6 + 72) && !**(_DWORD **)(v6 + 80) )
        {
          v8 = *(_QWORD *)(v6 + 136);
          if ( v0 > v8 )
          {
            v9 = v0 - v8;
            if ( (unsigned __int64)(v0 - v8) > *(_QWORD *)(v6 + 120) )
            {
              *(_QWORD *)(v6 + 120) = v9;
              ResidencyIdleState = PopPepComponentGetResidencyIdleState(v6, v9);
              if ( *(_DWORD *)(v11 + 160) != ResidencyIdleState )
              {
                *(_DWORD *)(v11 + 160) = ResidencyIdleState;
                PopPepUpdateIdleState(i, v11, 1);
              }
            }
          }
        }
      }
      PopPepPromoteActivities(i, 0LL, 3);
      v7 = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
      PopPepRequestWork(i, ready, v7);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !(_DWORD)KiIrqlFlags )
        goto LABEL_10;
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
        goto LABEL_10;
      if ( CurrentIrql > 0xFu )
        goto LABEL_10;
      if ( (unsigned __int8)v3 > 0xFu )
        goto LABEL_10;
      if ( CurrentIrql < 2u )
        goto LABEL_10;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v21 = (v24 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v24;
      if ( !v21 )
        goto LABEL_10;
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( !(_DWORD)KiIrqlFlags )
        goto LABEL_10;
      v17 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 )
        goto LABEL_10;
      if ( v17 > 0xFu )
        goto LABEL_10;
      if ( (unsigned __int8)v3 > 0xFu )
        goto LABEL_10;
      if ( v17 < 2u )
        goto LABEL_10;
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( !v21 )
        goto LABEL_10;
    }
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_10:
    __writecr8(v3);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  LOBYTE(v12) = 1;
  return PopPepArmIdleTimer(v12, v13, v14, v15);
}
