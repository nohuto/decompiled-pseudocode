/*
 * XREFs of ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0052ED0
 * Callers:
 *     ?GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C005A4D0 (-GotoPurgeState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_L.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0052A48 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0052E28 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 */

void __fastcall FxIoTarget::GotoPurgeState(
        FxIoTarget *this,
        _WDF_IO_TARGET_PURGE_IO_ACTION Action,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  unsigned __int8 v6; // bp
  unsigned __int8 m_WaitingForSentIo; // di
  _WDF_IO_TARGET_STATE m_State; // edx
  const void *_a1; // rax
  int _a2; // edx
  const _GUID *traceGuid; // r8
  FxIoTarget *v16; // rcx
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 *v18; // rax
  FxCREvent *p_m_SentIoEvent; // rcx
  unsigned __int8 v20; // r8
  unsigned __int8 added; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0;
  added = 0;
  m_WaitingForSentIo = 0;
  irql = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)PendedRequestListHead);
    v6 = irql;
  }
  m_State = this->m_State;
  if ( (unsigned int)(m_State - 1) <= 1 )
  {
    this->m_State = WdfIoTargetPurged;
  }
  else if ( m_State != WdfIoTargetPurged )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_ql(this->m_Globals, 4u, 0xEu, 0x14u, traceGuid, _a1, _a2);
  }
  FxIoTarget::DrainPendedRequestsLocked(this, PendedRequestListHead, 0);
  FxIoTarget::GetSentRequestsListLocked(v16, SentRequestListHead, &this->m_SentIoListHead, (bool *)&added);
  if ( Action == WdfIoTargetPurgeIoAndWait )
  {
    if ( added )
    {
      m_WaitingForSentIo = 1;
    }
    else
    {
      m_WaitingForSentIo = this->m_WaitingForSentIo;
      if ( m_WaitingForSentIo )
      {
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(
          this->m_Globals,
          2u,
          0xEu,
          0x15u,
          (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
          ObjectHandleUnchecked);
        FxVerifierDbgBreakPoint(this->m_Globals);
      }
    }
  }
  v18 = Wait;
  p_m_SentIoEvent = &this->m_SentIoEvent;
  this->m_WaitingForSentIo = m_WaitingForSentIo;
  *v18 = m_WaitingForSentIo;
  if ( m_WaitingForSentIo )
    KeClearEvent(&p_m_SentIoEvent->m_Event.m_Event);
  else
    KeSetEvent(&p_m_SentIoEvent->m_Event.m_Event, 0, 0);
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, v6, v20);
}
