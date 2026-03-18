/*
 * XREFs of ?UpdateAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C0026470
 * Callers:
 *     imp_WdfPdoUpdateAddressDescription @ 0x1C0021EB0 (imp_WdfPdoUpdateAddressDescription.c)
 * Callees:
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C0023E80 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

void __fastcall FxChildList::UpdateAddressDescriptionFromEntry(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  unsigned __int64 *p_m_ListLock; // r14
  KIRQL v7; // bl

  p_m_ListLock = &this->m_ListLock;
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::CopyAddress(this, Entry->m_AddressDescription, AddressDescription);
  KeReleaseSpinLock(p_m_ListLock, v7);
}
