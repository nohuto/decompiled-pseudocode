/*
 * XREFs of PopPepPlatformStateRegistered @ 0x14059FA24
 * Callers:
 *     PopFxEnablePlatformStates @ 0x14058A2C0 (PopFxEnablePlatformStates.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     IoAcquireRemoveLockEx @ 0x140312310 (IoAcquireRemoveLockEx.c)
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
 *     PopFxActivateDevice @ 0x140322A80 (PopFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140322D9C (PoFxIdleDevice.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14035D95C (PopPepUpdateIdleStateRefCount.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPepInitializeDebuggerMasks @ 0x14059F250 (PopPepInitializeDebuggerMasks.c)
 *     PopPepInitializeVetoMasks @ 0x14059F354 (PopPepInitializeVetoMasks.c)
 */

int __fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  signed __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int64 i; // rdi
  KIRQL v7; // al
  int v8; // r14d
  unsigned __int64 v9; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rbx
  char Buffer; // [rsp+78h] [rbp+10h] BYREF

  v2 = _InterlockedCompareExchange64(&PopPepPlatformState, PpmPlatformStates + 64, 0LL);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
    if ( a1 )
    {
      v4 = (_DWORD *)(PopPepPlatformState + 384);
      v5 = a1;
      do
      {
        *v4 = 1073741825;
        v4 += 112;
        --v5;
      }
      while ( v5 );
    }
    for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
    {
      v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(i + 64));
      v8 = *(_DWORD *)(i + 172);
      v9 = v7;
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v9 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v9);
      if ( v8 == 1 )
      {
        v15 = *(_QWORD *)(i + 32);
        if ( *(_QWORD *)(v15 + 48) )
        {
          if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v15 + 240), 0LL, &Src, 1u, 0x20u) >= 0 )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
            KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
            PopFxActivateDevice(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 32LL), 0, 0);
            PopPepInitializeVetoMasks(i, a1);
            PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(v15 + 48) + 32LL));
            ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 244), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(v15 + 248), 0, 0);
          }
        }
        else if ( (*(_DWORD *)(v15 + 824) & 2) != 0 )
        {
          PopPepInitializeDebuggerMasks(i, a1);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PopPepUpdateIdleStateRefCount((1 << a1) - 1, 0, 0, 0LL);
    Buffer = 1;
    LODWORD(v2) = ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_REGISTERED, &Buffer, 1u, 0LL, 0LL, 0, 0);
  }
  return v2;
}
