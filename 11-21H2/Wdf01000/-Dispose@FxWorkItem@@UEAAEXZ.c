/*
 * XREFs of ?Dispose@FxWorkItem@@UEAAEXZ @ 0x1C0018DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x1C000DE70 (-WaitForSignal@FxWorkItem@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxWorkItem::Dispose(FxWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // r8
  FxObject *m_Object; // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  v4 = irql;
  this->m_RunningDown = 1;
  FxNonPagedObject::Unlock(this, v4, v5);
  if ( this->m_WorkItemThread != KeGetCurrentThread() )
    FxWorkItem::WaitForSignal(this);
  m_Object = this->m_Object;
  if ( m_Object )
  {
    this->m_Object = 0LL;
    m_Object->Release(m_Object, this, 469, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
  }
  this->Release(this, this, 475, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
  return 1;
}
