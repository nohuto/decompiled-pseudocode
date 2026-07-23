/*
 * XREFs of PopFxClearDeviceConstraints @ 0x140589770
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxAddRefDevice @ 0x140312734 (PopFxAddRefDevice.c)
 *     PopFxActivateDevice @ 0x140322EF0 (PopFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x14032320C (PoFxIdleDevice.c)
 *     PopFxReinitializeAccountingInstance @ 0x140397DF4 (PopFxReinitializeAccountingInstance.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1405846CC (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPepClearDripsDeviceVetoMask @ 0x14059EFB4 (PopPepClearDripsDeviceVetoMask.c)
 */

__int64 __fastcall PopFxClearDeviceConstraints(__int64 a1)
{
  ULONG_PTR v2; // rcx
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned int i; // ebp
  __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int8 v15; // cl
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // eax

  if ( (unsigned int)PpmGetDeepSleepPlatformStateIndex() == -1 )
    return (unsigned int)-1073741823;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && (*(_DWORD *)(v4 + 24) & 0x8000000) == 0 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    PopFxAddRefDevice(v2);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0) & 0x10) != 0 && *(_QWORD *)(a1 + 56) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
      PopFxActivateDevice(v5, 0, 0);
      v3 = PopPepClearDripsDeviceVetoMask(*(_QWORD *)(a1 + 56));
      if ( v3 >= 0 )
      {
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
        PopFxReinitializeAccountingInstance(a1 + 600, 0);
        *(_DWORD *)(a1 + 612) = 5;
        _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFF7EF);
        KxReleaseSpinLock((volatile signed __int64 *)(a1 + 600));
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v6 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v6);
        for ( i = 0; i < *(_DWORD *)(a1 + 828); ++i )
        {
          v13 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * i) + 200LL;
          v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13);
          PopFxReinitializeAccountingInstance(v13, 0);
          *(_DWORD *)(v13 + 12) = -1;
          _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFEFF);
          KxReleaseSpinLock((volatile signed __int64 *)v13);
          if ( (_DWORD)KiIrqlFlags )
          {
            v15 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
            {
              v16 = KeGetCurrentPrcb();
              v17 = v16->SchedulerAssist;
              v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
              v11 = (v18 & v17[5]) == 0;
              v17[5] &= v18;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick((__int64)v16);
            }
          }
          __writecr8(v14);
        }
      }
      PoFxIdleDevice(v5);
    }
    else
    {
      v3 = -1073741823;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
    if ( !v3 )
      ZwUpdateWnfStateData(&WNF_PO_DRIPS_DEVICE_CONSTRAINTS_UPDATED, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)v3;
}
