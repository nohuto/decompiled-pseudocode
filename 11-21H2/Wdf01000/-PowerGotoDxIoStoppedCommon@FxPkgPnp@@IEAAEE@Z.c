/*
 * XREFs of ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C000CFC0
 * Callers:
 *     ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000E750 (-PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000F3C0 (-PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086DC0 (-PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086DF0 (-PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C000D138 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C000D17C (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C000D200 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x1C000D280 (-GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA-AW4_WDF_POWER_DEVICE_STAT.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C000D528 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0012A38 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqLd @ 0x1C0077C28 (WPP_IFR_SF_qqLd.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStoppedCommon(FxPkgPnp *this, unsigned __int8 NonPageable)
{
  char v4; // bl
  _WDF_POWER_DEVICE_STATE _a4; // esi
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  unsigned int v10; // edx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  const void *_a2; // rax
  __int64 v16; // rdx
  int globals; // r8d
  const void *v18; // rax
  __int64 v19; // rdx
  int v20; // r10d

  v4 = 0;
  _a4 = FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(this);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v7 + 24) = ObjectHandleUnchecked;
  *(_DWORD *)(v7 + 32) = _a4;
  if ( FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v7) < 0 )
  {
    v4 = 1;
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      v16,
      0xCu,
      0x16u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v16 + 144),
      _a4,
      globals);
  }
  if ( !FxPkgPnp::PowerDmaPowerDown(this) )
    v4 = 1;
  v8 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( m_Method && m_Method((WDFDEVICE__ *)v8, _a4) < 0 )
  {
    v4 = 1;
    v18 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      v19,
      0xCu,
      0x17u,
      WPP_PowerStateMachine_cpp_Traceguids,
      v18,
      *(const void **)(v19 + 144),
      _a4,
      v20);
  }
  if ( NonPageable )
  {
    v10 = 1;
  }
  else
  {
    v10 = 16;
    if ( this->m_SharedPower.m_WaitWakeIrp || this->m_WakeInterruptsKeepConnected == 1 )
    {
      v10 = 80;
      this->m_WakeInterruptsKeepConnected = 0;
    }
  }
  if ( FxPkgPnp::NotifyResourceObjectsDx(this, v10) < 0 )
    v4 = 1;
  v11 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  *(_QWORD *)(v12 + 32) = v11;
  *(_DWORD *)(v12 + 40) = _a4;
  if ( FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v12) < 0 )
    v4 = 1;
  this->PowerParentPowerDereference(this);
  FxPkgPnp::PowerSetDevicePowerState(this, _a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
  }
  else if ( !v4 )
  {
    FxPkgPnp::PowerSendPowerDownEvents(this, FxPowerDownTypeExplicit);
    LOBYTE(v13) = 1;
    this->PowerReleasePendingDeviceIrp(this, v13);
    return 1;
  }
  this->m_PowerMachine.m_PowerDownFailure = 1;
  return 0;
}
