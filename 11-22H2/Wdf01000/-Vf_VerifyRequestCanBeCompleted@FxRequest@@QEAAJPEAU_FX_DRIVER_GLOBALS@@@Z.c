/*
 * XREFs of ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA654
 * Callers:
 *     Vf_VerifyRequestComplete @ 0x1C00B9FFC (Vf_VerifyRequestComplete.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00BA07C (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00BA110 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?Vf_VerifyRequestIsAllocatedFromIo@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA71C (-Vf_VerifyRequestIsAllocatedFromIo@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA7F0 (-Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::Vf_VerifyRequestCanBeCompleted(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *v3; // rsi
  char v4; // dl
  int IsCurrentStackValid; // ebx
  unsigned __int64 _a2; // rax

  v3 = FxDriverGlobals;
  LOBYTE(FxDriverGlobals) = FxDriverGlobals->FxVerifierOn;
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)FxDriverGlobals, 0xBu) )
  {
    if ( v4 )
      return (unsigned int)FxRequest::Vf_VerifyRequestIsAllocatedFromIo(this, v3);
    return 0;
  }
  if ( !v4 || (IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsCurrentStackValid(this, v3), IsCurrentStackValid >= 0) )
  {
    if ( !this->m_CanComplete )
    {
      IsCurrentStackValid = -1073741808;
      _a2 = FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qid(v3, 2u, 0x10u, 0x3Eu, WPP_FxRequest_cpp_Traceguids, this->m_Irp.m_Irp, _a2, -1073741808);
      FxVerifierDbgBreakPoint(v3);
      return (unsigned int)IsCurrentStackValid;
    }
    return 0;
  }
  return (unsigned int)IsCurrentStackValid;
}
