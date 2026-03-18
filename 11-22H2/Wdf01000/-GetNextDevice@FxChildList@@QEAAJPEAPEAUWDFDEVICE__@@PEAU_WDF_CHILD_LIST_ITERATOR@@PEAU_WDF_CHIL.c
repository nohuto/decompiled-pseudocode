/*
 * XREFs of ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C0024944
 * Callers:
 *     imp_WdfChildListRetrieveNextDevice @ 0x1C0021450 (imp_WdfChildListRetrieveNextDevice.c)
 * Callees:
 *     ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C0003284 (-CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C0023E80 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z @ 0x1C0025224 (-MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z.c)
 */

__int64 __fastcall FxChildList::GetNextDevice(
        FxChildList *this,
        WDFDEVICE__ **Device,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  unsigned int v8; // esi
  const void *_a1; // rax
  FxDeviceDescriptionEntry **v10; // r14
  _LIST_ENTRY *p_m_DescriptionListHead; // r15
  FxDeviceDescriptionEntry **i; // rax
  FxDeviceDescriptionEntry *Flink; // r14
  FxDeviceDescriptionEntry *v14; // r13
  char v15; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 (__fastcall *v17)(unsigned __int64); // r9
  FxObject *m_Pdo; // rcx
  _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS v19; // esi
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  unsigned int v22; // eax
  char v23; // r13
  _LIST_ENTRY *v24; // r14
  unsigned int v25; // r15d
  unsigned __int64 v26; // rax
  __int64 (__fastcall *v27)(unsigned __int64); // r9
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *v28; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *v29; // rdx
  unsigned int v31; // [rsp+40h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+48h] [rbp-30h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h]

  SpinLock = &this->m_ListLock;
  v8 = -2147483622;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( !this->m_ScanCount )
  {
    v8 = -1073741436;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxChildList_cpp_Traceguids, _a1, -1073741436);
    goto $Done_6;
  }
  v10 = (FxDeviceDescriptionEntry **)Iterator->Reserved[0];
  if ( v10 )
  {
    p_m_DescriptionListHead = &this->m_DescriptionListHead;
    if ( this->m_Globals->FxVerifierOn && v10 != (FxDeviceDescriptionEntry **)p_m_DescriptionListHead )
    {
      for ( i = (FxDeviceDescriptionEntry **)p_m_DescriptionListHead->Flink; ; i = (FxDeviceDescriptionEntry **)*i )
      {
        if ( i == (FxDeviceDescriptionEntry **)p_m_DescriptionListHead )
        {
          v8 = -1073741811;
          goto $Done_6;
        }
        if ( v10 == i )
          break;
      }
    }
    Flink = *v10;
    if ( Flink == (FxDeviceDescriptionEntry *)p_m_DescriptionListHead )
    {
LABEL_28:
      Iterator->Reserved[0] = 0LL;
    }
    else
    {
      do
      {
        v14 = Flink;
        if ( FxDeviceDescriptionEntry::MatchStateToFlags(Flink, Iterator->Flags) )
        {
          if ( !Info || !Info->EvtChildListIdentificationDescriptionCompare )
            goto LABEL_18;
          ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
          v15 = v17(ObjectHandleUnchecked);
          if ( v15 )
            break;
        }
        Flink = (FxDeviceDescriptionEntry *)Flink->m_DescriptionLink.Flink;
      }
      while ( Flink != (FxDeviceDescriptionEntry *)p_m_DescriptionListHead );
      if ( !v15 )
        goto LABEL_28;
LABEL_18:
      Iterator->Reserved[0] = Flink;
      m_Pdo = v14->m_Pdo;
      if ( m_Pdo )
      {
        *Device = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(m_Pdo);
        v19 = WdfChildListRetrieveDeviceSuccess;
      }
      else
      {
        v19 = WdfChildListRetrieveDeviceNotYetCreated;
      }
      if ( Info )
      {
        IdentificationDescription = Info->IdentificationDescription;
        if ( IdentificationDescription )
          FxChildList::CopyId(this, IdentificationDescription, v14->m_IdentificationDescription);
        AddressDescription = Info->AddressDescription;
        if ( AddressDescription )
          FxChildList::CopyAddress(this, AddressDescription, v14->m_AddressDescription);
        Info->Status = v19;
      }
      v8 = 0;
    }
  }
  if ( (Iterator->Flags & 4) == 0 )
    goto $Done_6;
  v22 = (unsigned int)Iterator->Reserved[1];
  v31 = v22;
  if ( !v22 )
    goto $Done_6;
  v23 = 0;
  v24 = this->m_ModificationListHead.Flink;
  v25 = 1;
  if ( v24 == &this->m_ModificationListHead )
    goto LABEL_48;
  while ( 1 )
  {
    if ( LODWORD(v24[1].Flink) != 1 )
      goto LABEL_38;
    if ( ++v25 <= v22 )
      goto LABEL_38;
    v23 = 1;
    if ( !Info )
      break;
    if ( !Info->EvtChildListIdentificationDescriptionCompare )
      break;
    v26 = FxObject::GetObjectHandleUnchecked(this);
    v23 = v27(v26);
    if ( v23 )
      break;
    v22 = v31;
LABEL_38:
    v24 = v24->Flink;
    if ( v24 == &this->m_ModificationListHead )
      goto LABEL_47;
  }
  Iterator->Reserved[1] = (void *)v25;
  if ( Info )
  {
    v28 = Info->IdentificationDescription;
    if ( v28 )
      FxChildList::CopyId(this, v28, (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v24[-1].Flink);
    v29 = Info->AddressDescription;
    if ( v29 )
      FxChildList::CopyAddress(this, v29, (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)v24[-1].Blink);
    Info->Status = WdfChildListRetrieveDeviceNotYetCreated;
  }
  v8 = 0;
LABEL_47:
  if ( !v23 )
LABEL_48:
    Iterator->Reserved[1] = 0LL;
$Done_6:
  KeReleaseSpinLock(SpinLock, NewIrql);
  return v8;
}
