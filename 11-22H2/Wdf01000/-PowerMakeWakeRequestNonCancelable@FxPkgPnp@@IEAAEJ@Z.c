/*
 * XREFs of ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C006F364
 * Callers:
 *     ?PowerDxStoppedArmForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E630 (-PowerDxStoppedArmForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerDxStoppedArmForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E680 (-PowerDxStoppedArmForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerEnablingWakeAtBus@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E790 (-PowerEnablingWakeAtBus@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerEnablingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E7E0 (-PowerEnablingWakeAtBusNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C006F0D4 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqq @ 0x1C001C308 (WPP_IFR_SF_qqq.c)
 */

char __fastcall FxPkgPnp::PowerMakeWakeRequestNonCancelable(FxPkgPnp *this, int WaitWakeStatus)
{
  unsigned __int64 *p_m_Lock; // r14
  char v5; // di
  KIRQL v6; // al
  _IRP *m_WaitWakeIrp; // rbx
  KIRQL v8; // r15
  __int64 v9; // rcx
  const void *_a1; // rax
  __int64 v11; // r8
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_ListEntry; // rbx

  p_m_Lock = &this->m_PowerMachine.m_WaitWakeLock.m_Lock;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_PowerMachine.m_WaitWakeLock.m_Lock);
  m_WaitWakeIrp = this->m_SharedPower.m_WaitWakeIrp;
  v8 = v6;
  if ( m_WaitWakeIrp && _InterlockedExchange64((volatile __int64 *)&m_WaitWakeIrp->CancelRoutine, 0LL) )
  {
    if ( WaitWakeStatus >= 0 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL) + 888LL);
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 920) )
        {
          PoSetSystemWake(m_WaitWakeIrp);
          if ( this->m_PowerPolicyMachine.m_Owner )
          {
            _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
            WPP_IFR_SF_qqq(
              this->m_Globals,
              4u,
              0xCu,
              0x23u,
              WPP_PowerStateMachine_cpp_Traceguids,
              _a1,
              *(const void **)(v11 + 144),
              this->m_SharedPower.m_WaitWakeIrp);
            this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource = 1;
          }
        }
      }
    }
    m_WaitWakeIrp->IoStatus.Status = WaitWakeStatus;
    Blink = this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink;
    p_ListEntry = &m_WaitWakeIrp->Tail.Overlay.ListEntry;
    if ( Blink->Flink != &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList )
      __fastfail(3u);
    p_ListEntry->Flink = &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList;
    p_ListEntry->Blink = Blink;
    Blink->Flink = p_ListEntry;
    this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink = p_ListEntry;
    this->m_SharedPower.m_WaitWakeIrp = 0LL;
    v5 = 1;
  }
  KeReleaseSpinLock(p_m_Lock, v8);
  return v5;
}
