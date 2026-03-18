/*
 * XREFs of ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0064950
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0034C84 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C0064740 (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequests(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  __int64 v5; // rcx
  _QWORD **v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  FxRequestBase *v11; // rdi
  const void *_a1; // rax
  const void *_a2; // rdx
  unsigned __int8 v14; // r8
  unsigned __int64 ObjectHandleUnchecked; // rbp
  FxCallbackLock *m_IoCancelCallbackLockPtr; // rsi
  void (__fastcall *m_Cancel)(WDFREQUEST__ *); // rax
  __int64 v18; // rdx
  unsigned __int8 v19; // r8
  char v20; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  v7 = (_QWORD **)(v5 + 272);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    v9 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    v11 = (FxRequestBase *)(v8 - 36);
    *(_QWORD *)(v9 + 8) = v10;
    v8[1] = v8;
    *v8 = v8;
    FxObject::GetObjectHandleUnchecked(this);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v11);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x54u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v11, 64, v14);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v14);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v11);
    m_IoCancelCallbackLockPtr = this->m_IoCancelCallbackLockPtr;
    if ( v11->m_CancelRoutine.m_Cancel )
    {
      v20 = 0;
      if ( m_IoCancelCallbackLockPtr )
        m_IoCancelCallbackLockPtr->Lock(m_IoCancelCallbackLockPtr, (unsigned __int8 *)&v20);
      m_Cancel = v11->m_CancelRoutine.m_Cancel;
      v11->m_CancelRoutine.m_Cancel = 0LL;
      m_Cancel((WDFREQUEST__ *)ObjectHandleUnchecked);
      if ( m_IoCancelCallbackLockPtr )
      {
        LOBYTE(v18) = v20;
        m_IoCancelCallbackLockPtr->Unlock(m_IoCancelCallbackLockPtr, v18);
      }
    }
    v11->Release(v11, (void *)1969583441, 4933, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, PreviousIrql, v19);
  }
  return 1;
}
