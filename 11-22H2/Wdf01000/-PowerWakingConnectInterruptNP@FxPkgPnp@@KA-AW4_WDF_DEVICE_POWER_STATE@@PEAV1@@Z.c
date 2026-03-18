/*
 * XREFs of ?PowerWakingConnectInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00703A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqLd @ 0x1C00581F8 (WPP_IFR_SF_qqLd.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C006CAB8 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x1C0073480 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterruptNP(FxPkgPnp *This)
{
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  unsigned int v4; // r8d
  const void *_a2; // rax
  __int64 v6; // rdx
  int v7; // r8d

  if ( FxPkgPnp::NotifyResourceObjectsD0(This, 1u) < 0 )
    return 33592LL;
  ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  if ( (int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
              (FxPnpDeviceD0ExitPreInterruptsDisabled *)&This->m_DeviceD0EntryPostInterruptsEnabled,
              ObjectHandleUnchecked,
              v4) < 0 )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v6,
      0xCu,
      0x19u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v6 + 144),
      This->m_DevicePowerState,
      v7);
    return 33592LL;
  }
  return 33594LL;
}
