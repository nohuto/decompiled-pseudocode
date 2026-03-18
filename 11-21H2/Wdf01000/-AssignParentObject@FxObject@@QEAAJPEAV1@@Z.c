/*
 * XREFs of ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C00065CC
 * Callers:
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00063C4 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0007230 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007B50 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C001DCEC (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C001DE54 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0021B30 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C00240F0 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002FF30 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C006F30C (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C006F410 (FxIoResourceListInsertDescriptor.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 */

__int64 __fastcall FxObject::AssignParentObject(FxObject *this, FxObject *ParentObject)
{
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v5; // r15
  unsigned int v6; // ebx
  KIRQL v7; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rcx
  const void *_a2; // rax
  unsigned int _a3; // r9d
  const void *ObjectHandleUnchecked; // rax
  unsigned int v14; // edx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState != 1 )
  {
    if ( _bittest16((const signed __int16 *)&this->24, 9u) )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x14u, 0xBu, WPP_FxObject_hpp_Traceguids, this, _a2, _a3, 0);
    }
    goto LABEL_15;
  }
  v6 = 0;
  if ( this->m_ParentObject )
  {
    v6 = -1071644147;
    goto LABEL_8;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&ParentObject->m_SpinLock.m_Lock);
  if ( ParentObject->m_ObjectState != 1 )
  {
    if ( _bittest16((const signed __int16 *)&ParentObject->24, 9u) )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(ParentObject);
      WPP_IFR_SF_qqLL(
        ParentObject->m_Globals,
        4u,
        0x14u,
        0xBu,
        WPP_FxObject_hpp_Traceguids,
        ParentObject,
        ObjectHandleUnchecked,
        v14,
        1u);
    }
    KeReleaseSpinLock(&ParentObject->m_SpinLock.m_Lock, v7);
LABEL_15:
    v6 = -1073741738;
    goto LABEL_8;
  }
  Blink = ParentObject->m_ChildListHead.Blink;
  p_m_ChildEntry = &this->m_ChildEntry;
  if ( Blink->Flink != &ParentObject->m_ChildListHead )
    __fastfail(3u);
  p_m_ChildEntry->Flink = &ParentObject->m_ChildListHead;
  this->m_ChildEntry.Blink = Blink;
  Blink->Flink = p_m_ChildEntry;
  ParentObject->m_ChildListHead.Blink = p_m_ChildEntry;
  if ( !this->m_DeviceBase )
    this->m_DeviceBase = ParentObject->m_DeviceBase;
  KeReleaseSpinLock(&ParentObject->m_SpinLock.m_Lock, v7);
  this->m_ParentObject = ParentObject;
LABEL_8:
  KeReleaseSpinLock(p_m_Lock, v5);
  return v6;
}
