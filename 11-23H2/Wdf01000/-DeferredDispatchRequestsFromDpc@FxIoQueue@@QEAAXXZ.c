/*
 * XREFs of ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1C0063B28
 * Callers:
 *     ?_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0066D10 (-_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 */

void __fastcall FxIoQueue::DeferredDispatchRequestsFromDpc(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  v4 = irql;
  this->m_RequeueDeferredDispatcher = 0;
  FxIoQueue::DispatchEvents(this, v4, 0LL, v5);
  FxNonPagedObject::Lock(this, &irql, v6);
  if ( this->m_Deleted || !this->m_RequeueDeferredDispatcher )
  {
    this->m_RequeueDeferredDispatcher = 0;
    this->m_DpcQueued = 0;
  }
  else
  {
    KeInsertQueueDpc(&this->m_Dpc, 0LL, 0LL);
  }
  FxNonPagedObject::Unlock(this, irql, v7);
}
