/*
 * XREFs of ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C002A66C
 * Callers:
 *     imp_WdfControlFinishInitializing @ 0x1C0037B60 (imp_WdfControlFinishInitializing.c)
 *     ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x1C006A2EC (-PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxWmiIrpHandler::Register(FxWmiIrpHandler *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // r8
  NTSTATUS _a1; // eax
  unsigned int v7; // edi
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  v4 = irql;
  this->m_RegisteredState = WmiRegistered;
  FxNonPagedObject::Unlock(this, v4, v5);
  _a1 = IoWMIRegistrationControl(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 1u);
  v7 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1);
    FxNonPagedObject::Lock(this, &irql, v8);
    v9 = irql;
    this->m_RegisteredState = WmiUnregistered;
    FxNonPagedObject::Unlock(this, v9, v10);
  }
  return v7;
}
