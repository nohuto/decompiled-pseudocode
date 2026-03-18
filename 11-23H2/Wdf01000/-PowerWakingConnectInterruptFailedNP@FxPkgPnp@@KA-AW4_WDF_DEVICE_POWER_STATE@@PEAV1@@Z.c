/*
 * XREFs of ?PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0070330
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C006E00C (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingConnectInterruptFailedNP(FxPkgPnp *This)
{
  const void *_a2; // rax
  __int64 v3; // rdx

  _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  WPP_IFR_SF_qq(This->m_Globals, 2u, 0xCu, 0x1Au, WPP_PowerStateMachine_cpp_Traceguids, *(const void **)(v3 + 144), _a2);
  FxPkgPnp::PowerConnectInterruptFailed(This);
  return 829LL;
}
