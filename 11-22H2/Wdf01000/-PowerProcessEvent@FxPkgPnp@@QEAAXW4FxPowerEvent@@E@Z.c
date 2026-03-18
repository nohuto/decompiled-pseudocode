/*
 * XREFs of ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604
 * Callers:
 *     ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x1C0025530 (-PostParentToD0@FxChildList@@QEAAXXZ.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C006F0D4 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00709B0 (-_PowerWaitWakeCancelRoutine@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z @ 0x1C00711B4 (-AckPendingWakeInterruptOperation@FxPkgPnp@@QEAAXE@Z.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C0071EBC (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00720F4 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AA60 (-PowerPolDisarmingWakeForSystemSleepCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STA.c)
 *     ?PowerPolStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007ACD0 (-PowerPolStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolS0NoWakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AD70 (-PowerPolS0NoWakeCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007ADD0 (-PowerPolS0WakeCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AF60 (-PowerPolTimerExpiredNoWakeCompletePowerDown@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B290 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B3D0 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B880 (-PowerPolStartingPoweredUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B9C0 (-PowerPolStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007BB80 (-PowerPolStoppingDisarmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007BC50 (-PowerPolStoppingResetDeviceCompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007BF00 (-PowerPolSystemWakeDeviceToD0CompletePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEA.c)
 *     ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C740 (-PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00803B4 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0082E34 (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00831F0 (-RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?NotPowerPolOwnerStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0083720 (-NotPowerPolOwnerStarting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?NotPowerPolOwnerStopping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0083770 (-NotPowerPolOwnerStopping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C006A008 (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C006F820 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C0070868 (-QueueToThread@FxThreadedEventQueue@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PowerProcessEvent(
        FxPkgPnp *this,
        unsigned int Event,
        unsigned __int8 ProcessOnDifferentThread)
{
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v7; // si
  int m_SingularEventsPresent; // eax
  __int64 m_QueueTail; // r8
  int v10; // r10d
  const void *_a1; // rax
  __int64 v12; // rdx
  const void *ObjectHandleUnchecked; // rax
  __int64 v14; // r8
  _FX_DRIVER_GLOBALS *v15; // rdx
  int v16; // eax
  FxPostProcessInfo info; // [rsp+50h] [rbp-38h] BYREF
  __int64 timeout; // [rsp+90h] [rbp+8h] BYREF

  p_m_Lock = &this->m_PowerMachine.m_QueueLock.m_Lock;
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_QueueLock.m_Lock);
  if ( (Event & 0x100) != 0 )
  {
    m_SingularEventsPresent = this->m_PowerMachine.m_SingularEventsPresent;
    if ( (m_SingularEventsPresent & Event) != 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqdd(
        this->m_Globals,
        4u,
        0xCu,
        0xAu,
        WPP_PowerStateMachine_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v14 + 144),
        *(_DWORD *)(v14 + 204),
        Event);
      goto LABEL_8;
    }
    this->m_PowerMachine.m_SingularEventsPresent = m_SingularEventsPresent | Event;
  }
  m_QueueTail = this->m_PowerMachine.m_QueueTail;
  v10 = (this->m_PowerMachine.m_QueueDepth + this->m_PowerMachine.m_QueueHead - 1) % this->m_PowerMachine.m_QueueDepth;
  if ( v10 == this->m_PowerMachine.m_QueueTail % (unsigned int)this->m_PowerMachine.m_QueueDepth )
  {
LABEL_8:
    KeReleaseSpinLock(p_m_Lock, v7);
    return;
  }
  if ( (this->m_PowerMachine.m_QueueFlags & 2) != 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqdd(
      this->m_Globals,
      4u,
      0xCu,
      0xBu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v12 + 144),
      *(_DWORD *)(v12 + 204),
      Event);
    goto LABEL_8;
  }
  if ( (Event & 0x3900) != 0 )
  {
    this->m_PowerMachine.m_QueueHead = v10;
    this->m_PowerMachine.m_Queue.Events[(unsigned __int8)v10] = Event;
  }
  else
  {
    this->m_PowerMachine.m_QueueTail = ((int)m_QueueTail + 1) % (unsigned int)this->m_PowerMachine.m_QueueDepth;
    this->m_PowerMachine.m_Queue.Events[m_QueueTail] = Event;
  }
  KeReleaseSpinLock(p_m_Lock, v7);
  if ( v7
    || ProcessOnDifferentThread
    || (timeout = 0LL,
        v16 = FxWaitLockInternal::AcquireLock(&this->m_PowerMachine.m_StateMachineLock, v15, (_LARGE_INTEGER *)&timeout),
        v16 < 0)
    || v16 == 258 )
  {
    FxThreadedEventQueue::QueueToThread(&this->m_PowerMachine);
  }
  else
  {
    info.m_Event = 0LL;
    *(_WORD *)&info.m_DeleteObject = 0;
    info.m_FireAndForgetIrp = 0LL;
    FxPkgPnp::PowerProcessEventInner(this, &info);
    this->m_PowerMachine.m_StateMachineLock.m_OwningThread = 0LL;
    KeSetEvent(&this->m_PowerMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    FxPostProcessInfo::Evaluate(&info, this);
  }
}
