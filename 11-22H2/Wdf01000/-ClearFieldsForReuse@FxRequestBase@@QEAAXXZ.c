/*
 * XREFs of ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C000DE6E
 * Callers:
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C003AE4C (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C005DC2C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C005FFC8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0067A34 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C000DE42 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C0048258 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxRequestBase::ClearFieldsForReuse(FxRequestBase *this)
{
  _MDL *m_AllocatedMdl; // rcx
  FxRequestTimer *m_Timer; // rcx

  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    if ( this->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
    else
      IoFreeMdl(m_AllocatedMdl);
    this->m_AllocatedMdl = 0LL;
  }
  m_Timer = this->m_Timer;
  *(_WORD *)&this->m_RequestBaseFlags = 0;
  this->m_VerifierFlags = 0;
  *(_WORD *)&this->m_Completed = 0;
  this->m_PriorityBoost = 0;
  this->m_NextStackLocationFormatted = 0;
  if ( m_Timer )
  {
    FxRequestTimer::`scalar deleting destructor'(m_Timer);
    this->m_Timer = 0LL;
  }
  this->m_Target = 0LL;
  this->m_TargetFlags = 0;
  this->m_TargetCompletionContext = 0LL;
  this->m_DrainSingleEntry.Next = 0LL;
  this->m_IrpCompletionReferenceCount = 0;
  this->m_CompletionState = 0;
  this->m_CsqContext.Irp = (_IRP *)&this->120;
  this->m_ListEntry.Flink = (_LIST_ENTRY *)&this->120;
}
