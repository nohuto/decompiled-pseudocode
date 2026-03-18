/*
 * XREFs of ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0076390
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::_PnpRemoveDevice(FxPkgPnp *This, FxIrp *Irp)
{
  FxDeviceBase *m_DeviceBase; // rax
  _IRP *m_Irp; // rdx
  unsigned __int8 v6; // r8
  const void *_a1; // rax
  __int64 v8; // rdx
  FxPkgPnp_vtbl *v9; // rax
  unsigned int v10; // ebx
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, SynchronizationEvent, 0);
  m_DeviceBase = This->m_DeviceBase;
  m_Irp = Irp->m_Irp;
  eventOnStack.m_DbgFlagIsInitialized = 1;
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, a5, 1u, 0x20u);
  FxObject::AddRef(This, Irp, 2507, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  Irp->m_Irp->IoStatus.Status = 0;
  This->m_DeviceRemoveProcessed = &eventOnStack;
  FxPkgPnp::PnpProcessEvent(This, PnpEventRemove, v6);
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  WPP_IFR_SF_qq(
    This->m_Globals,
    4u,
    0xCu,
    0x29u,
    (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
    _a1,
    *(const void **)(v8 + 144));
  KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
  v9 = This->__vftable;
  This->m_DeviceRemoveProcessed = 0LL;
  v10 = v9->ProcessRemoveDeviceOverload(This, Irp);
  This->Release(This, Irp, 2543, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  return v10;
}
