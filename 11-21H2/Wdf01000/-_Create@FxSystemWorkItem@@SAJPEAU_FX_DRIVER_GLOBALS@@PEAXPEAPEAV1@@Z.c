/*
 * XREFs of ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00199A0
 * Callers:
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C001955C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C001ED40 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?Initialize@FxDisposeList@@QEAAJPEAX@Z @ 0x1C00249FC (-Initialize@FxDisposeList@@QEAAJPEAX@Z.c)
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C0024F78 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1C00298B0 (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008078C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0019A6C (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ??0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0019AA4 (--0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxSystemWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DEVICE_OBJECT *WdmObject,
        FxSystemWorkItem **pObject)
{
  FxSystemWorkItem *v6; // rax
  FxSystemWorkItem *v7; // rax
  void *v8; // r8
  FxSystemWorkItem *v9; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int v11; // edi
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v13.UsePoolType = 0LL;
  v13.u.PoolFlags = 64LL;
  v6 = (FxSystemWorkItem *)FxObjectHandleAllocCommon(FxDriverGlobals, &v13, 0xE0uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( !v6 )
    return 3221225626LL;
  FxSystemWorkItem::FxSystemWorkItem(v6, FxDriverGlobals);
  v9 = v7;
  if ( !v7 )
    return 3221225626LL;
  m_Globals = v7->m_Globals;
  v7->m_ObjectFlags |= 0x811u;
  v11 = MxWorkItem::Allocate(&v7->m_WorkItem, WdmObject, v8);
  if ( v11 < 0 )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxSystemWorkitem_cpp_Traceguids);
    v9->Release(v9, 0LL, 0, 0LL);
    return (unsigned int)v11;
  }
  else
  {
    *pObject = v9;
    return 0LL;
  }
}
