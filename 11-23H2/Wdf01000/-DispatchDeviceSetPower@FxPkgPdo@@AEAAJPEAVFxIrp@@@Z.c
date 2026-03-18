/*
 * XREFs of ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00803B4
 * Callers:
 *     ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00809B0 (-_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqq @ 0x1C001C308 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C00808E8 (-SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::DispatchDeviceSetPower(FxPkgPdo *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int v3; // ebx
  const void *_a2; // rax
  __int64 v7; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxPowerPolicyOwnerSettings *v9; // rax

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v3 = 0;
  if ( m_Owner )
  {
    if ( !m_Owner->m_RequestedPowerUpIrp && !m_Owner->m_RequestedPowerDownIrp )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqq(
        this->m_Globals,
        2u,
        0xCu,
        0xAu,
        WPP_PdoPower_cpp_Traceguids,
        Irp->m_Irp,
        _a2,
        *(const void **)(v7 + 144));
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerifierOn )
        FxVerifierBugCheckWorker(
          m_Globals,
          WDF_POWER_MULTIPLE_PPO,
          (ULONG_PTR)this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
          (ULONG_PTR)Irp->m_Irp);
    }
    v9 = this->m_PowerPolicyMachine.m_Owner;
    if ( v9->m_RequestedPowerUpIrp )
      v9->m_RequestedPowerUpIrp = 0;
    else
      v9->m_RequestedPowerDownIrp = 0;
  }
  FxPkgPnp::SetPendingDevicePowerIrp(this, Irp);
  LOBYTE(v3) = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1;
  FxPkgPnp::PowerProcessEvent(this, v3 + 1, 0);
  return 259LL;
}
