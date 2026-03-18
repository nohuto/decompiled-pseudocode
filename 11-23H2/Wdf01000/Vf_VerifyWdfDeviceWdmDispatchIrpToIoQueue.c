/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00B9D10
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C000D160 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C000CF60 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C000FAEE (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C0031830 (WPP_IFR_SF_qqcDq.c)
 *     WPP_IFR_SF_qqcDqd @ 0x1C003196C (WPP_IFR_SF_qqcDqd.c)
 */

__int64 __fastcall Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *device,
        _IRP *Irp,
        FxIoQueue *queue,
        int Flags)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v10; // ebx
  _WDF_REQUEST_TYPE _a5; // ebp
  unsigned int MinorFunction; // r12d
  const void *_a3; // rax
  const void *level; // r8
  FxObject *v15; // rcx
  const void *ObjectHandleUnchecked; // rax
  const void *v17; // rdx
  unsigned int v18; // r8d
  unsigned __int16 v19; // r9
  FxDevice *m_ParentDevice; // rax
  FxDevice *m_Device; // rcx
  const void *v22; // rax
  unsigned __int16 v23; // r9
  FxPkgPnp *m_PkgPnp; // rax
  const void *v25; // rax
  int v26; // edx
  const _GUID *_a2; // [rsp+20h] [rbp-68h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v10 = 0;
  _a5 = CurrentStackLocation->MajorFunction;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( FxDriverGlobals->FxVerboseOn )
  {
    _a3 = (const void *)FxObject::GetObjectHandleUnchecked(device);
    WPP_IFR_SF_qqcDq(
      FxDriverGlobals,
      (unsigned __int8)_a3,
      (unsigned int)level,
      0x3Fu,
      WPP_FxDeviceApi_cpp_Traceguids,
      _a3,
      device->m_DeviceObject.m_DeviceObject,
      _a5,
      MinorFunction,
      level);
  }
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    v10 = -1073741811;
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xDu, 0x40u, WPP_FxDeviceApi_cpp_Traceguids, Flags, -1073741811);
LABEL_19:
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return v10;
  }
  if ( FxDevice::GetDispatchPackage(device, _a5) != (FxDefaultIrpHandler *)device->m_PkgIo )
  {
    v10 = -1073741811;
    FxObject::GetObjectHandleUnchecked(v15);
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(queue);
    v19 = 65;
LABEL_7:
    WPP_IFR_SF_qqcDqd(
      FxDriverGlobals,
      (unsigned __int8)v17,
      v18,
      v19,
      _a2,
      ObjectHandleUnchecked,
      Irp,
      _a5,
      MinorFunction,
      v17);
    goto LABEL_19;
  }
  if ( !FxIoQueue::IsIoEventHandlerRegistered(queue, _a5) )
  {
    v10 = -1073741811;
    FxObject::GetObjectHandleUnchecked(device);
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(queue);
    v19 = 66;
    goto LABEL_7;
  }
  m_ParentDevice = device->m_ParentDevice;
  m_Device = queue->m_Device;
  if ( m_ParentDevice == m_Device )
  {
    if ( !m_ParentDevice )
    {
      v10 = -1073741811;
      v22 = (const void *)FxObject::GetObjectHandleUnchecked(device);
      v23 = 67;
LABEL_18:
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, v23, WPP_FxDeviceApi_cpp_Traceguids, v22, -1073741811);
      goto LABEL_19;
    }
    m_PkgPnp = device->m_PkgPnp;
    if ( m_PkgPnp && !BYTE3(m_PkgPnp[1].m_DisposeSingleEntry.Next) )
    {
      v10 = -1073741808;
      v25 = (const void *)FxObject::GetObjectHandleUnchecked(device);
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x44u, WPP_FxDeviceApi_cpp_Traceguids, v25, v26);
      goto LABEL_19;
    }
  }
  else if ( device != m_Device )
  {
    v10 = -1073741811;
    v22 = (const void *)FxObject::GetObjectHandleUnchecked(m_Device);
    v23 = 69;
    goto LABEL_18;
  }
  return v10;
}
