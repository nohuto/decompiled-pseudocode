/*
 * XREFs of ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BB5CC
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C00036D0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAB00 (-Vf_VerifyRequestIsTagRequest@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyGetRequestUpdateFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *TagRequest)
{
  const void *_a1; // rax
  int v7; // r8d
  unsigned __int8 v9; // r8
  int IsTagRequest; // ebp
  unsigned __int8 v11; // r8
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 irql; // [rsp+60h] [rbp+18h] BYREF

  irql = 0;
  if ( TagRequest )
  {
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)FxDriverGlobals, 0xBu) )
    {
      if ( this->m_Type != WdfIoQueueDispatchManual )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qd(FxDriverGlobals, 2u, v7 + 2, v7 + 13, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
        FxVerifierDbgBreakPoint(FxDriverGlobals);
        return 3221225488LL;
      }
    }
    else
    {
      FxNonPagedObject::Lock(TagRequest, &irql, (unsigned __int8)TagRequest);
      if ( FxDriverGlobals->FxVerifierOn )
        IsTagRequest = FxRequest::Vf_VerifyRequestIsTagRequest(TagRequest, FxDriverGlobals);
      else
        IsTagRequest = 0;
      FxNonPagedObject::Unlock(TagRequest, irql, v9);
      if ( IsTagRequest < 0 )
        return (unsigned int)IsTagRequest;
    }
  }
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)TagRequest);
  if ( this->m_Type == WdfIoQueueDispatchSequential && !this->m_DriverIoCount )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xDu, 0x19u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  FxNonPagedObject::Unlock(this, irql, v11);
  return 0LL;
}
