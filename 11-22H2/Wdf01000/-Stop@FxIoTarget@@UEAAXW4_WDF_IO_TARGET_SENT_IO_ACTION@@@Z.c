/*
 * XREFs of ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C0053A30
 * Callers:
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C005E680 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C00543B0 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxIoTarget::Stop(FxIoTarget *this, __int64 Action)
{
  FxIoTarget_vtbl *v2; // rax
  FxIoTarget_vtbl *v4; // rax
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // r8
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v9; // r10
  char traceGuid; // [rsp+20h] [rbp-18h]
  unsigned __int8 wait; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+50h] [rbp+18h] BYREF
  _SINGLE_LIST_ENTRY head; // [rsp+58h] [rbp+20h] BYREF

  v2 = this->__vftable;
  head.Next = 0LL;
  wait = 0;
  traceGuid = 1;
  v2->GotoStopState(this, (_WDF_IO_TARGET_SENT_IO_ACTION)Action, &head, &wait, traceGuid);
  if ( head.Next )
    FxIoTarget::_CancelSentRequests(&head);
  if ( wait )
  {
    v4 = this->__vftable;
    irql = 0;
    v4->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &irql, v5);
    v6 = irql;
    this->m_WaitingForSentIo = 0;
    FxNonPagedObject::Unlock(this, v6, v7);
  }
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(v9, 5u, 0xEu, 0x13u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
}
