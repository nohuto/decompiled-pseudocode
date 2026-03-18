/*
 * XREFs of ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C002A5B0
 * Callers:
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0029BA0 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z @ 0x1C0029E64 (-AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z.c)
 *     ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C002A310 (-Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY **__fastcall FxWmiIrpHandler::FindProviderLocked(FxWmiIrpHandler *this, _GUID *Guid)
{
  _LIST_ENTRY *p_m_ProvidersListHead; // rsi
  _LIST_ENTRY *Flink; // rbx
  __int64 v5; // rdi

  p_m_ProvidersListHead = &this->m_ProvidersListHead;
  Flink = this->m_ProvidersListHead.Flink;
  v5 = 0LL;
  while ( Flink != p_m_ProvidersListHead )
  {
    if ( RtlCompareMemory(&Flink[3], Guid, 0x10uLL) == 16 )
      return &Flink[-8].Blink;
    Flink = Flink->Flink;
  }
  return (_LIST_ENTRY **)v5;
}
