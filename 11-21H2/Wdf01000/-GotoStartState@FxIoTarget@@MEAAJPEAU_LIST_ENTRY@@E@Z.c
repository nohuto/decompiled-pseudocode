/*
 * XREFs of ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C00296B0
 * Callers:
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C007A1C0 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0029788 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoTarget::GotoStartState(FxIoTarget *this, _LIST_ENTRY *RequestListHead, unsigned __int8 Lock)
{
  unsigned __int8 v5; // di
  unsigned __int8 v7; // r8
  unsigned int v8; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rax
  unsigned int v12; // edx
  unsigned __int8 v13; // r8
  _FX_DRIVER_GLOBALS *v14; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  irql = 0;
  FxObject::AddRef(this, (void *)0x74727453, 318, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  if ( Lock )
    goto LABEL_14;
  while ( this->m_State != WdfIoTargetDeleted )
  {
    if ( !this->m_WaitingForSentIo )
    {
      v8 = 0;
      this->m_State = WdfIoTargetStarted;
      this->m_WaitingForSentIo = 0;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
      FxIoTarget::DrainPendedRequestsLocked(this, RequestListHead, 1u);
      goto LABEL_5;
    }
    m_Globals = this->m_Globals;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 3u, 0xEu, 0xFu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
    if ( m_Globals->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v12, 0xBu) || m_Globals->FxVerifyDownlevel)
      && v5 )
    {
      FxVerifierDbgBreakPoint(v14);
    }
    FxNonPagedObject::Unlock(this, v5, v13);
    this->WaitForSentIoToComplete(this);
LABEL_14:
    FxNonPagedObject::Lock(this, &irql, v7);
    v5 = irql;
  }
  v8 = -1073741436;
LABEL_5:
  if ( Lock )
    FxNonPagedObject::Unlock(this, v5, v7);
  this->Release(this, (void *)1953657939, 391, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  return v8;
}
