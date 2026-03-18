/*
 * XREFs of ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C005F30C
 * Callers:
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0025E7C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Dispose@FxWmiProvider@@UEAAEXZ @ 0x1C005E060 (-Dispose@FxWmiProvider@@UEAAEXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxWmiIrpHandler::RemoveProvider(FxWmiIrpHandler *this, FxWmiProvider *Provider, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  _LIST_ENTRY *p_m_ListEntry; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v9; // dl
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  --this->m_NumProviders;
  p_m_ListEntry = &Provider->m_ListEntry;
  Flink = p_m_ListEntry->Flink;
  if ( p_m_ListEntry->Flink->Blink != p_m_ListEntry || (Blink = p_m_ListEntry->Blink, Blink->Flink != p_m_ListEntry) )
    __fastfail(3u);
  v9 = irql;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_m_ListEntry->Blink = p_m_ListEntry;
  p_m_ListEntry->Flink = p_m_ListEntry;
  FxNonPagedObject::Unlock(this, v9, v5);
}
