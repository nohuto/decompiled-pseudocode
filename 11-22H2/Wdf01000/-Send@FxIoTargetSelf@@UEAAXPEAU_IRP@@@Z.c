/*
 * XREFs of ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C000EB40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C000CF60 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C000F746 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0054868 (WPP_IFR_SF_qcDqd.c)
 */

void __fastcall FxIoTargetSelf::Send(FxIoTargetSelf *this, _IRP *Irp)
{
  _IO_STACK_LOCATION *v4; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  const void *_a1; // rax
  int _a2; // r10d
  int v8; // esi
  FxDefaultIrpHandler *DispatchPackage; // rax
  FxObject *v10; // rcx
  FxIoQueue *v11; // r9
  FxPkgIo *v12; // r11
  const void *ObjectHandleUnchecked; // rax
  const void *globals; // rdx
  char v15; // r10
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  FxIoInCallerContext *p_IoInCallerContextCallback; // r8
  int v18; // [rsp+48h] [rbp-10h]

  --Irp->CurrentLocation;
  v4 = Irp->Tail.Overlay.CurrentStackLocation - 1;
  Irp->Tail.Overlay.CurrentStackLocation = v4;
  v4->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !this->m_DispatchQueue
    && !*((_QWORD *)&this->m_DeviceBase[3].m_ChildListHead.Blink[9].Flink + CurrentStackLocation->MajorFunction) )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetSelf_cpp_Traceguids, _a1, _a2);
    v8 = -1073741436;
$Fail:
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = v8;
    IofCompleteRequest(Irp, 0);
    return;
  }
  DispatchPackage = FxDevice::GetDispatchPackage(this->m_Device, CurrentStackLocation->MajorFunction);
  if ( DispatchPackage != (FxDefaultIrpHandler *)v12 )
  {
    v8 = -1073741811;
    FxObject::GetObjectHandleUnchecked(v10);
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qcDqd(
      this->m_Globals,
      (unsigned __int8)globals,
      0xEu,
      0xBu,
      WPP_FxIoTargetSelf_cpp_Traceguids,
      ObjectHandleUnchecked,
      v15,
      CurrentStackLocation->MinorFunction,
      globals,
      v18);
    FxVerifierDbgBreakPoint(this->m_Globals);
    goto $Fail;
  }
  m_CxDeviceInfo = v11->m_CxDeviceInfo;
  p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
  if ( !m_CxDeviceInfo )
    p_IoInCallerContextCallback = &v12->m_InCallerContextCallback;
  FxPkgIo::DispatchStep2(v12, Irp, p_IoInCallerContextCallback, v11);
}
