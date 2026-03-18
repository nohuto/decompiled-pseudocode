/*
 * XREFs of ?IsDeviceRemoved@FxDeviceDescriptionEntry@@QEAAEXZ @ 0x1C0024FB4
 * Callers:
 *     ?PnpEventCheckForDevicePresenceOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C00691A0 (-PnpEventCheckForDevicePresenceOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

char __fastcall FxDeviceDescriptionEntry::IsDeviceRemoved(FxDeviceDescriptionEntry *this)
{
  FxChildList *m_DeviceList; // rsi
  char v3; // di
  KIRQL v4; // al
  bool v5; // zf
  KIRQL v6; // dl
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rcx
  FxDevice *m_Pdo; // rax

  m_DeviceList = this->m_DeviceList;
  v3 = 0;
  FxVerifierCheckIrqlLevel(m_DeviceList->m_Globals, 0);
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_DeviceList->m_ListLock);
  v5 = this->m_DescriptionState == DescriptionReportedMissing;
  v6 = v4;
  this->m_ProcessingSurpriseRemove = 0;
  if ( v5 )
  {
    this->m_DescriptionState = DescriptionUnspecified;
    if ( m_DeviceList->m_ScanCount )
    {
      m_Pdo = this->m_Pdo;
      this->m_PendingDeleteOnScanEnd = 1;
      if ( m_Pdo )
        m_Pdo->m_PkgPnp[1].m_Globals = 0LL;
    }
    else
    {
      Flink = this->m_DescriptionLink.Flink;
      if ( (FxDeviceDescriptionEntry *)this->m_DescriptionLink.Flink->Blink != this
        || (Blink = this->m_DescriptionLink.Blink, (FxDeviceDescriptionEntry *)Blink->Flink != this) )
      {
        __fastfail(3u);
      }
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      this->m_DescriptionLink.Blink = (_LIST_ENTRY *)this;
      this->m_DescriptionLink.Flink = (_LIST_ENTRY *)this;
    }
    v3 = 1;
  }
  KeReleaseSpinLock(&this->m_DeviceList->m_ListLock, v6);
  return v3;
}
