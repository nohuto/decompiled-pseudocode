/*
 * XREFs of ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0029C40
 * Callers:
 *     ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C007A090 (-GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0029788 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0029D48 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxIoTarget::GotoRemoveState(
        FxIoTarget *this,
        _WDF_IO_TARGET_STATE NewState,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 Lock,
        unsigned __int8 *Wait)
{
  unsigned __int8 v6; // di
  unsigned __int8 *v11; // rsi
  FxIoTarget *v12; // rcx
  unsigned __int8 v13; // r8
  FxIoTarget *v14; // rcx
  const void *_a1; // rax
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r8
  unsigned __int8 ignoredAdded[56]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 sentAdded; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0;
  sentAdded = 0;
  ignoredAdded[0] = 0;
  irql = 0;
  if ( Lock )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)PendedRequestListHead);
    v6 = irql;
  }
  if ( this->m_WaitingForSentIo )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 3u, 0xEu, 0x17u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
    FxNonPagedObject::Unlock(this, v6, v16);
    this->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &irql, v17);
    v6 = irql;
  }
  v11 = Wait;
  *Wait = 0;
  this->m_State = NewState;
  FxIoTarget::DrainPendedRequestsLocked(this, PendedRequestListHead, 0);
  if ( (unsigned int)(NewState - 3) <= 2 )
  {
    FxIoTarget::GetSentRequestsListLocked(v12, SentRequestListHead, &this->m_SentIoListHead, &sentAdded);
    FxIoTarget::GetSentRequestsListLocked(v14, SentRequestListHead, &this->m_IgnoredIoListHead, ignoredAdded);
    if ( sentAdded || ignoredAdded[0] )
    {
      this->m_Removing = 1;
      *v11 = 1;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
    }
    else
    {
      this->ClearTargetPointers(this);
      KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
    }
  }
  if ( Lock )
    FxNonPagedObject::Unlock(this, v6, v13);
}
