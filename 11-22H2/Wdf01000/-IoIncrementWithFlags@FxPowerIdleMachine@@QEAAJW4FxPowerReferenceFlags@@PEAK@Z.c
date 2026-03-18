/*
 * XREFs of ?IoIncrementWithFlags@FxPowerIdleMachine@@QEAAJW4FxPowerReferenceFlags@@PEAK@Z @ 0x1C0008A08
 * Callers:
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0004AC0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0008998 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C006689C (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0073678 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1C0074114 (-PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ.c)
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C0080720 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 * Callees:
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0008AC4 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::IoIncrementWithFlags(
        FxPowerIdleMachine *this,
        FxPowerReferenceFlags Flags,
        unsigned int *Count)
{
  char v5; // r14
  KIRQL v6; // al
  unsigned __int8 m_Flags; // cl
  KIRQL v8; // r15
  unsigned int v9; // ebx
  unsigned int v10; // eax

  v5 = Flags;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  m_Flags = this->m_Flags;
  v8 = v6;
  if ( (m_Flags & 0x10) != 0 || (m_Flags & 0x20) == 0 )
  {
    v9 = -1073741101;
  }
  else
  {
    v9 = 0;
    v10 = this->m_IoCount + 1;
    this->m_IoCount = v10;
    if ( Count )
      *Count = v10;
    FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoIncrement);
    if ( !KeReadStateEvent(&this->m_D0NotificationEvent.m_Event.m_Event) )
    {
      v9 = 259;
      if ( (v5 & 1) != 0 )
        this->m_Flags |= 0x80u;
    }
  }
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v8);
  return v9;
}
