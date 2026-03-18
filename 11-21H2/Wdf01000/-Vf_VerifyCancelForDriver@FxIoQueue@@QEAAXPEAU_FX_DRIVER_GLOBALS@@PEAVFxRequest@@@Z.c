/*
 * XREFs of ?Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C8208
 * Callers:
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000DD74 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::Vf_VerifyCancelForDriver(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *Request)
{
  FxObject *v6; // r8
  const void *_a1; // rax
  const void *_a2; // r10
  const void *ObjectHandleUnchecked; // rax
  const void *v10; // rdx

  FxObject::GetObjectHandleUnchecked(this);
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v6);
  WPP_IFR_SF_qq(FxDriverGlobals, 3u, 0xDu, 0x4Fu, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
  if ( Request->m_OwnerListEntry.Flink != &Request->m_OwnerListEntry )
  {
    FxObject::GetObjectHandleUnchecked(this);
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Request);
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0xDu, 0x50u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, v10);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}
