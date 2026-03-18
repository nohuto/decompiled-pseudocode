/*
 * XREFs of ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C0075088
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0074DA4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?_SxWakeSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z @ 0x1C0076680 (-_SxWakeSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z.c)
 *     ?_SxWakeSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z @ 0x1C00766B0 (-_SxWakeSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0075808 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicySetSxWakeState(FxPkgPnp *this, unsigned __int8 State)
{
  _FX_DRIVER_GLOBALS *v3; // rdx
  int v4; // eax
  __int64 timeout; // [rsp+30h] [rbp+8h] BYREF

  this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Enabled = State != 0;
  this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Dirty = 1;
  if ( !KeGetCurrentIrql() )
  {
    timeout = 0LL;
    v4 = FxWaitLockInternal::AcquireLock(&this->m_PowerPolicyMachine.m_StateMachineLock, v3, (_LARGE_INTEGER *)&timeout);
    if ( v4 >= 0 && v4 != 258 )
    {
      FxPkgPnp::SaveState(this, 1u);
      this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = 0LL;
      KeSetEvent(&this->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
    }
  }
}
