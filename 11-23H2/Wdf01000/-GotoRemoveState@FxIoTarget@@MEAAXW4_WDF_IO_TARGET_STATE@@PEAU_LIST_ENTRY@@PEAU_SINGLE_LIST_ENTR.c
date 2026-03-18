/*
 * XREFs of ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0053050
 * Callers:
 *     ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C005A600 (-GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0052A48 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0052E28 (-GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z.c)
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
  const void *_a1; // rax
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  unsigned __int8 *v14; // rsi
  FxIoTarget *v15; // rcx
  unsigned __int8 v16; // r8
  FxIoTarget *v17; // rcx
  unsigned __int8 ignoredAdded; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 sentAdded; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0;
  sentAdded = 0;
  ignoredAdded = 0;
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
    FxNonPagedObject::Unlock(this, v6, v12);
    this->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &irql, v13);
    v6 = irql;
  }
  v14 = Wait;
  *Wait = 0;
  this->m_State = NewState;
  FxIoTarget::DrainPendedRequestsLocked(this, PendedRequestListHead, 0);
  if ( (unsigned int)(NewState - 3) <= 2 )
  {
    FxIoTarget::GetSentRequestsListLocked(v15, SentRequestListHead, &this->m_SentIoListHead, (bool *)&sentAdded);
    FxIoTarget::GetSentRequestsListLocked(v17, SentRequestListHead, &this->m_IgnoredIoListHead, (bool *)&ignoredAdded);
    if ( sentAdded || ignoredAdded )
    {
      this->m_Removing = 1;
      *v14 = 1;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
    }
    else
    {
      this->ClearTargetPointers(this);
      KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
    }
  }
  if ( Lock )
    FxNonPagedObject::Unlock(this, v6, v16);
}
