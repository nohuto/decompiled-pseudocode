/*
 * XREFs of ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C00301DC
 * Callers:
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C00301A4 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C0033F90 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008EB8 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C000ADF4 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C00302A8 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C0030434 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C006ABC8 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C0087FB8 (-CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z.c)
 */

__int64 __fastcall FxDevice::DeleteDeviceFromFailedCreateNoDelete(
        FxDevice *this,
        unsigned int FailedStatus,
        unsigned __int8 UseStateMachine)
{
  const void *_a1; // rax
  int _a3; // edx
  FxDisposeList *m_DisposeList; // rcx
  FxPkgPnp *v9; // rcx
  const void *ObjectHandleUnchecked; // rax
  FxPkgPnp *m_PkgPnp; // rcx
  MxEvent waitEvent; // [rsp+40h] [rbp-28h] BYREF

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_qqd(
    this->m_Globals,
    2u,
    0xCu,
    0xBu,
    WPP_FxDevice_cpp_Traceguids,
    _a1,
    this->m_DeviceObject.m_DeviceObject,
    _a3);
  if ( this->m_Filter )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqd(
      this->m_Globals,
      4u,
      0xCu,
      0xCu,
      WPP_FxDevice_cpp_Traceguids,
      ObjectHandleUnchecked,
      this->m_DeviceObject.m_DeviceObject,
      FailedStatus);
    FailedStatus = 0;
  }
  if ( UseStateMachine )
  {
    waitEvent.m_DbgFlagIsInitialized = 0;
    KeInitializeEvent(&waitEvent.m_Event, SynchronizationEvent, 0);
    m_PkgPnp = this->m_PkgPnp;
    waitEvent.m_DbgFlagIsInitialized = 1;
    FxPkgPnp::CleanupDeviceFromFailedCreate(m_PkgPnp, &waitEvent);
  }
  else
  {
    FxObject::EarlyDispose(this);
    FxObject::DestroyChildren(this);
    m_DisposeList = this->m_DisposeList;
    if ( m_DisposeList )
      FxDisposeList::WaitForEmpty(m_DisposeList);
    v9 = this->m_PkgPnp;
    if ( v9 )
      FxPkgPnp::CleanupStateMachines(v9, 1u);
  }
  FxDevice::Destroy(this);
  return FailedStatus;
}
