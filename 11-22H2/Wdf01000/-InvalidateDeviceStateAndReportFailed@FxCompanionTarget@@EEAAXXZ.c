/*
 * XREFs of ?InvalidateDeviceStateAndReportFailed@FxCompanionTarget@@EEAAXXZ @ 0x1C002DFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z @ 0x1C0075A7C (-SetDeviceFailed@FxPkgPnp@@QEAAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_DEVICE_FAILED_ACTION@@@Z.c)
 */

void __fastcall FxCompanionTarget::InvalidateDeviceStateAndReportFailed(FxCompanionTarget *this)
{
  const void *_a1; // rax
  __int64 v3; // r10

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)this->m_ChildListHead.Flink);
  WPP_IFR_SF_q(
    *(_FX_DRIVER_GLOBALS **)(v3 + 16),
    2u,
    0xCu,
    0xAu,
    (const _GUID *)&WPP_FxCompanionTarget_cpp_Traceguids,
    _a1);
  FxPkgPnp::SetDeviceFailed(
    (FxPkgPnp *)this->m_ChildListHead.Flink[40].Blink,
    (_FX_DRIVER_GLOBALS *)this->m_ChildListHead.Flink[1].Flink,
    WdfDeviceFailedNoRestart);
}
