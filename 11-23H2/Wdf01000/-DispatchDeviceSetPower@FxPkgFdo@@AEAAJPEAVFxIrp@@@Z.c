/*
 * XREFs of ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0082E34
 * Callers:
 *     ?_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0083270 (-_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqq @ 0x1C001C308 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C00808E8 (-SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 *     ?RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0083144 (-RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgFdo::DispatchDeviceSetPower(FxPkgFdo *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  const void *_a2; // rax
  __int64 v6; // rdx
  FxPkgPnp *v8; // rcx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    if ( m_Owner->m_RequestedPowerUpIrp )
    {
      m_Owner->m_RequestedPowerUpIrp = 0;
    }
    else
    {
      if ( !m_Owner->m_RequestedPowerDownIrp )
      {
        _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qqq(
          this->m_Globals,
          2u,
          0xCu,
          0xAu,
          WPP_fdopower_cpp_Traceguids,
          Irp->m_Irp,
          _a2,
          *(const void **)(v6 + 144));
        FxVerifierBugCheckWorker(
          this->m_Globals,
          WDF_POWER_MULTIPLE_PPO,
          (ULONG_PTR)this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
          (ULONG_PTR)Irp->m_Irp);
      }
      m_Owner->m_RequestedPowerDownIrp = 0;
    }
  }
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    return FxPkgFdo::RaiseDevicePower(this, Irp);
  FxPkgPnp::SetPendingDevicePowerIrp(this, Irp);
  FxPkgPnp::PowerProcessEvent(v8, 2u, 0);
  return 259;
}
