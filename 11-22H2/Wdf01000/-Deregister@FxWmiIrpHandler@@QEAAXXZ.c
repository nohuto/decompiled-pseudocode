/*
 * XREFs of ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C002A1C4
 * Callers:
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C003DDA0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C003E060 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C006A1BC (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C00283B8 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0029A78 (--0FxCREvent@@QEAA@E@Z.c)
 */

void __fastcall FxWmiIrpHandler::Deregister(FxWmiIrpHandler *this, unsigned __int8 a2)
{
  char v3; // di
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  NTSTATUS _a1; // eax
  FxCREvent event; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  FxCREvent::FxCREvent(&event, a2);
  irql = 0;
  v3 = 0;
  FxNonPagedObject::Lock(this, &irql, v4);
  if ( this->m_RegisteredState == WmiRegistered )
  {
    this->m_RegisteredState = WmiDeregistered;
    if ( this->m_WorkItemQueued )
      this->m_WorkItemEvent = (_KEVENT *)&event;
    v3 = 1;
  }
  FxNonPagedObject::Unlock(this, irql, v5);
  if ( this->m_WorkItemEvent )
  {
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&event, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v3 )
  {
    FxWmiIrpHandler::DecrementUpdateCount(this);
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&this->m_UpdateEvent, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    _a1 = IoWMIRegistrationControl(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 2u);
    if ( _a1 < 0 )
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1);
  }
}
