/*
 * XREFs of ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C008F2DC
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003EF0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgGeneral::OnShutdown(FxPkgGeneral *this, FxIrp *FxIrp)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int64 ObjectHandleUnchecked; // rcx
  unsigned int v6; // ebx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  _IRP *m_Irp; // rax

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  v6 = 0;
  m_Method = this->m_EvtDeviceShutdown.m_Method;
  if ( m_Method )
  {
    m_Method((WDFDEVICE__ *)ObjectHandleUnchecked);
    m_DeviceBase = this->m_DeviceBase;
  }
  m_Irp = FxIrp->m_Irp;
  if ( BYTE1(m_DeviceBase[1].m_Globals) )
  {
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    m_Irp->IoStatus.Status = 0;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  return v6;
}
