/*
 * XREFs of ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005090
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0004E70 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C000EAFC (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0073F28 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00742EC (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0074894 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxIoTarget::RemoveCompletedRequestLocked(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *Flink; // rcx
  $2E9503FEA5AD2275F0EE453185AD8E99 *v7; // rax
  _IRP *Irp; // rdx
  unsigned __int8 m_TargetFlags; // cl
  unsigned __int8 v10; // si
  _FX_DRIVER_GLOBALS *v11; // rax
  FxRequestBase *_a2; // r10
  unsigned __int64 v14; // r8
  const void *_a1; // rdx
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r8
  FxIoTarget_vtbl *v18; // rax
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a2 = Request;
    v14 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v14 = 0LL;
    if ( v14 )
      _a2 = (FxRequestBase *)v14;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x28u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  Flink = Request->m_ListEntry.Flink;
  v7 = &Request->120;
  if ( ($2E9503FEA5AD2275F0EE453185AD8E99 *)Flink->Blink != &Request->120
    || (Irp = Request->m_CsqContext.Irp, *($2E9503FEA5AD2275F0EE453185AD8E99 **)&Irp->Type != v7) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)&Irp->Type = Flink;
  Flink->Blink = (_LIST_ENTRY *)Irp;
  m_TargetFlags = Request->m_TargetFlags;
  Request->m_CsqContext.Irp = (_IRP *)&Request->120;
  v7->m_ListEntry.Flink = (_LIST_ENTRY *)v7;
  Request->m_TargetFlags = m_TargetFlags & 0xE2;
  v10 = m_TargetFlags;
  v11 = this->m_Globals;
  if ( v11->FxVerifierOn && v11->FxVerifierIO )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(Request, &PreviousIrql, a3);
    v16 = PreviousIrql;
    Request->m_VerifierFlags &= ~0x100u;
    FxNonPagedObject::Unlock(Request, v16, v17);
  }
  if ( this->m_Removing )
  {
    if ( this->m_SentIoListHead.Flink == &this->m_SentIoListHead
      && this->m_IgnoredIoListHead.Flink == &this->m_IgnoredIoListHead )
    {
      v18 = this->__vftable;
      this->m_Removing = 0;
      v18->ClearTargetPointers(this);
      return 1;
    }
  }
  else if ( this->m_WaitingForSentIo && (v10 & 0x10) == 0 && this->m_SentIoListHead.Flink == &this->m_SentIoListHead )
  {
    this->m_WaitingForSentIo = 0;
    return 1;
  }
  return 0;
}
