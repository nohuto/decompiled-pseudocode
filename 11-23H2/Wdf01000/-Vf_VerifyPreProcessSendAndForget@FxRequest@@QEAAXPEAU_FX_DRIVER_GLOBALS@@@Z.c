/*
 * XREFs of ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA510
 * Callers:
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0008160 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

void __fastcall FxRequest::Vf_VerifyPreProcessSendAndForget(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  const void *_a1; // rax
  const void *_a2; // rdx
  const void *ObjectHandleUnchecked; // rax

  if ( this->m_CompletionRoutine.m_Completion )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0x10u, 0x17u, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  if ( !this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction
    && ((__int64)this->m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF) != 1 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0x10u, 0x18u, WPP_FxRequest_cpp_Traceguids, ObjectHandleUnchecked);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}
