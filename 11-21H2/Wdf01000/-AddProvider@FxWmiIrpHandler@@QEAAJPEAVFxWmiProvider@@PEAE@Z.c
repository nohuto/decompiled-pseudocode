/*
 * XREFs of ?AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z @ 0x1C0026040
 * Callers:
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0025E7C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C001CFC0 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1C00260C4 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::AddProvider(
        FxWmiIrpHandler *this,
        FxWmiProvider *Provider,
        unsigned __int8 *Update)
{
  unsigned __int8 v6; // r8
  unsigned int v7; // edi
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Update);
  if ( Provider->m_ListEntry.Flink != &Provider->m_ListEntry
    || FxWmiIrpHandler::FindProviderLocked(this, &Provider->m_Guid) )
  {
    v7 = 0x40000000;
  }
  else
  {
    v7 = FxWmiIrpHandler::AddProviderLocked(this, Provider, irql, Update);
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  return v7;
}
