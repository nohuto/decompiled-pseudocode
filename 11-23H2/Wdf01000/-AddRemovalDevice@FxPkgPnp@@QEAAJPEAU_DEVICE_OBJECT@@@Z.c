/*
 * XREFs of ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C00712E4
 * Callers:
 *     imp_WdfDeviceAddRemovalRelationsPhysicalDevice @ 0x1C0033E00 (imp_WdfDeviceAddRemovalRelationsPhysicalDevice.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C004F80C (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ??0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0089964 (--0FxRelatedDevice@@QEAA@PEAU_DEVICE_OBJECT@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::AddRemovalDevice(FxPkgPnp *this, _DEVICE_OBJECT *DependentDevice, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v7; // rax
  FX_POOL **v8; // rax
  FxRelatedDeviceList *v9; // rcx
  _QWORD *v10; // rax
  int v11; // edi
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v14; // rcx
  FxRelatedDevice *v15; // rax
  __int64 v16; // rax
  FxObject *v17; // rdi
  int v18; // ebx
  FxPoolTypeOrPoolFlags v19; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]
  unsigned __int8 irql; // [rsp+70h] [rbp+20h] BYREF

  if ( this->m_RemovalDeviceList )
    goto LABEL_11;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( this->m_RemovalDeviceList )
    goto LABEL_7;
  m_Globals = this->m_Globals;
  v7 = retaddr;
  *(_QWORD *)&v19.UsePoolType = 0LL;
  v19.u.PoolFlags = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v7 = 0LL;
  v8 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&v19, 0x50uLL, m_Globals->Tag, v7);
  v9 = (FxRelatedDeviceList *)v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 12) = 0;
    *(_WORD *)((char *)v8 + 53) = 0;
    v8[5] = 0LL;
    v10 = v8 + 1;
    v9->m_ListLock.m_Lock = 0LL;
    v9->m_ListLock.m_DbgFlagIsInitialized = 1;
    v10[1] = v10;
    *v10 = v10;
    v9->m_TransactionHead.Blink = &v9->m_TransactionHead;
    v9->m_TransactionHead.Flink = &v9->m_TransactionHead;
    v9->__vftable = (FxRelatedDeviceList_vtbl *)FxRelatedDeviceList::`vftable';
    v9->m_DeleteOnRemove = 1;
    v9->m_NeedReportMissing = 0;
    this->m_RemovalDeviceList = v9;
LABEL_7:
    v11 = 0;
    goto LABEL_8;
  }
  this->m_RemovalDeviceList = 0LL;
  v11 = -1073741670;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x49u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, -1073741670);
LABEL_8:
  FxNonPagedObject::Unlock(this, irql, v5);
  if ( v11 < 0 )
    return (unsigned int)v11;
LABEL_11:
  v14 = this->m_Globals;
  *(_QWORD *)&v19.UsePoolType = 0LL;
  v19.u.PoolFlags = 64LL;
  v15 = (FxRelatedDevice *)FxObjectHandleAllocCommon(v14, &v19, 0xA8uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( !v15 )
    return 3221225626LL;
  FxRelatedDevice::FxRelatedDevice(v15, DependentDevice, this->m_Globals);
  v17 = (FxObject *)v16;
  if ( !v16 )
    return 3221225626LL;
  v18 = FxTransactionedList::Add(this->m_RemovalDeviceList, this->m_Globals, (FxTransactionedEntry *)(v16 + 104));
  if ( v18 < 0 )
  {
    FxObject::ClearEvtCallbacks(v17);
    v17->DeleteObject(v17);
  }
  return (unsigned int)v18;
}
