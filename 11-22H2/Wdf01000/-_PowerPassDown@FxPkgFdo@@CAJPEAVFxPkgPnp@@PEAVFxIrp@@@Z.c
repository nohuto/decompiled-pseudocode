/*
 * XREFs of ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00832A0
 * Callers:
 *     ?FireAndForgetIrp@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0077C30 (-FireAndForgetIrp@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0082F1C (-DispatchSystemQueryPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0082F84 (-DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerReleasePendingDeviceIrp@FxPkgFdo@@EEAAXE@Z @ 0x1C00830F0 (-PowerReleasePendingDeviceIrp@FxPkgFdo@@EEAAXE@Z.c)
 *     ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0083230 (-_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgFdo::_PowerPassDown(FxPkgPnp *This, FxIrp *Irp)
{
  _IRP *m_Irp; // rsi
  FxIrp *v4; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r8

  m_Irp = Irp->m_Irp;
  v4 = Irp;
  PoStartNextPowerIrp(Irp->m_Irp);
  CurrentStackLocation = v4->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  LODWORD(v4) = PoCallDriver(This->m_DeviceBase->m_AttachedDevice.m_DeviceObject, v4->m_Irp);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return (unsigned int)v4;
}
