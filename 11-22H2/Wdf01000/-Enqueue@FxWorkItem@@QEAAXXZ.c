/*
 * XREFs of ?Enqueue@FxWorkItem@@QEAAXXZ @ 0x1C0006820
 * Callers:
 *     imp_WdfWorkItemEnqueue @ 0x1C00070A0 (imp_WdfWorkItemEnqueue.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 */

void __fastcall FxWorkItem::Enqueue(FxWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char v5; // si
  unsigned __int8 v6; // r8
  const void *_a1; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  v5 = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( this->m_Enqueued )
  {
    if ( m_Globals->FxVerboseOn )
    {
      _a1 = FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0x12u, 0xEu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    }
  }
  else if ( this->m_RunningDown )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxWorkItem_cpp_Traceguids, ObjectHandleUnchecked);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    KeClearEvent(&this->m_WorkItemCompleted.m_Event.m_Event);
    this->m_Enqueued = 1;
    FxObject::AddRef(this, FxWorkItem::WorkItemThunk, 322, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
    _InterlockedIncrement(&m_Globals->Refcnt);
    v5 = 1;
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  if ( v5 )
    IoQueueWorkItem(this->m_WorkItem.m_WorkItem, FxWorkItem::WorkItemThunk, DelayedWorkQueue, this);
}
