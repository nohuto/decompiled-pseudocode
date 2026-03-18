/*
 * XREFs of ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0088760
 * Callers:
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0083BC8 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084A80 (-PnpEventStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0010C88 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018170 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018234 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C0036C00 (memset.c)
 */

void __fastcall FxPkgPnp::NotifyResourceobjectsToReleaseResources(FxPkgPnp *this)
{
  _LIST_ENTRY *p_m_InterruptListHead; // r14
  _LIST_ENTRY *i; // rsi
  int Flink_high; // edi
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  FxSpinLockTransactionedList *v6; // r8
  FxTransactionedEntry *j; // rdx
  FxTransactionedEntry *NextEntryLocked; // rax

  p_m_InterruptListHead = &this->m_InterruptListHead;
  for ( i = this->m_InterruptListHead.Flink; i != p_m_InterruptListHead; i = i->Flink )
  {
    Flink_high = HIDWORD(i[-4].Flink);
    memset(&i[-6].Blink, 0, 0x40uLL);
    LODWORD(i[-6].Blink) = 64;
    i[-2].Blink = 0LL;
    HIDWORD(i[-4].Flink) = Flink_high;
  }
  m_DmaEnablerList = this->m_DmaEnablerList;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, this->m_Globals);
    v6 = this->m_DmaEnablerList;
    for ( j = 0LL; ; j = NextEntryLocked )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(v6, j);
      if ( !NextEntryLocked )
        break;
    }
    FxTransactionedList::UnlockFromEnum(v6, this->m_Globals);
  }
}
