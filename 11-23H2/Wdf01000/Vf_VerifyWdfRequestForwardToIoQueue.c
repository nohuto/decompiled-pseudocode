/*
 * XREFs of Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00BA07C
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C0003FF0 (imp_WdfRequestForwardToIoQueue.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA654 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestForwardToIoQueue(_FX_DRIVER_GLOBALS *FxDriverGlobals, FxRequest *request)
{
  FxRequest *v2; // r9
  bool IsVersionGreaterThanOrEqualTo; // al
  _FX_DRIVER_GLOBALS *v5; // rcx
  unsigned int v6; // r8d
  const void *_a1; // rax
  unsigned __int8 v9; // dl

  v2 = request;
  LOBYTE(request) = 2;
  if ( v2->m_IrpAllocation == 2
    && (IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                          FxDriverGlobals,
                                          (unsigned int)request,
                                          0xBu),
        v6 = 0,
        IsVersionGreaterThanOrEqualTo) )
  {
    if ( v5->FxVerifierOn )
      return (unsigned int)FxRequest::Vf_VerifyRequestCanBeCompleted(v2, v5);
    return v6;
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v2);
    WPP_IFR_SF_qd(FxDriverGlobals, v9, 0x10u, 0x47u, WPP_FxRequestApi_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return 3221225488LL;
  }
}
