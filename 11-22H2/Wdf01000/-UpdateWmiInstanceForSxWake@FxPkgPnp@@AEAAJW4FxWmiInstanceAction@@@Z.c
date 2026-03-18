/*
 * XREFs of ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0079970
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0074DA4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 * Callees:
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C00281CC (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C0028554 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0075598 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 */

__int64 __fastcall FxPkgPnp::UpdateWmiInstanceForSxWake(FxPkgPnp *this, FxWmiInstanceAction Action, unsigned __int8 a3)
{
  int v3; // edx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  FxWmiInstance **p_WmiInstance; // r9
  __int64 result; // rax
  FxWmiInstanceInternalCallbacks cb; // [rsp+20h] [rbp-28h] BYREF

  v3 = Action - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      WmiInstance = m_Owner->m_WakeSettings.WmiInstance;
      if ( WmiInstance )
        FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_WakeSettings.WmiInstance, a3);
    }
    return 0LL;
  }
  p_WmiInstance = &this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.WmiInstance;
  if ( *p_WmiInstance )
  {
    FxWmiProvider::AddInstance((*p_WmiInstance)->m_Provider, *p_WmiInstance, 1u);
    return 0LL;
  }
  cb.ExecuteMethod = 0LL;
  cb.SetInstance = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, void *))FxPkgPnp::_SxWakeSetInstance;
  cb.QueryInstance = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, void *, unsigned int *))FxPkgPnp::_SxWakeQueryInstance;
  cb.SetItem = (int (__fastcall *)(FxDevice *, FxWmiInstanceInternal *, unsigned int, unsigned int, void *))FxPkgPnp::_SxWakeSetItem;
  result = FxPkgPnp::RegisterPowerPolicyWmiInstance(
             this,
             &GUID_POWER_DEVICE_WAKE_ENABLE,
             &cb,
             (FxWmiInstanceInternal **)p_WmiInstance);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
