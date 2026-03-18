/*
 * XREFs of ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C0013918
 * Callers:
 *     imp_WdfChildListRetrieveNextDevice @ 0x1C0013850 (imp_WdfChildListRetrieveNextDevice.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C000F270 (-CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C005BC34 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

__int64 __fastcall FxChildList::GetNextDevice(
        FxChildList *this,
        WDFDEVICE__ **Device,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  unsigned int v8; // ebp
  FxChildList *v9; // rsi
  FxChildList_vtbl *v10; // rsi
  char v11; // dl
  unsigned int Flags; // ecx
  FxChildList_vtbl *v13; // r15
  FxObject *SelfDestruct; // rcx
  _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS v15; // esi
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  const void *_a1; // rax
  _LIST_ENTRY *p_m_DescriptionListHead; // rcx
  _LIST_ENTRY *i; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 (__fastcall *v23)(unsigned __int64); // r9
  unsigned int v24; // eax
  char v25; // r13
  _LIST_ENTRY *Flink; // rsi
  unsigned int v27; // r15d
  unsigned __int64 v28; // rax
  __int64 (__fastcall *v29)(unsigned __int64); // r9
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *v30; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *v31; // rdx
  unsigned int v32; // [rsp+40h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+48h] [rbp-30h]
  KIRQL NewIrql; // [rsp+80h] [rbp+8h]

  SpinLock = &this->m_ListLock;
  v8 = -2147483622;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( !this->m_ScanCount )
  {
    v8 = -1073741436;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxChildList_cpp_Traceguids, _a1, 0xC0000184);
    goto $Done_4;
  }
  v9 = (FxChildList *)Iterator->Reserved[0];
  if ( v9 )
  {
    if ( this->m_Globals->FxVerifierOn )
    {
      p_m_DescriptionListHead = &this->m_DescriptionListHead;
      if ( v9 != (FxChildList *)&this->m_DescriptionListHead )
      {
        for ( i = p_m_DescriptionListHead->Flink; ; i = i->Flink )
        {
          if ( i == p_m_DescriptionListHead )
          {
            v8 = -1073741811;
            goto $Done_4;
          }
          if ( v9 == (FxChildList *)i )
            break;
        }
      }
    }
    v10 = v9->__vftable;
    v11 = 0;
    if ( v10 == (FxChildList_vtbl *)&this->m_DescriptionListHead )
    {
LABEL_18:
      Iterator->Reserved[0] = 0LL;
    }
    else
    {
      do
      {
        Flags = Iterator->Flags;
        v13 = v10;
        if ( (Flags & 1) != 0 && LODWORD(v10->Release) == 2
          || (Flags & 2) != 0 && (unsigned int)(LODWORD(v10->Release) - 3) <= 1
          || (Flags & 4) != 0 && LODWORD(v10->Release) == 1 )
        {
          if ( !Info || !Info->EvtChildListIdentificationDescriptionCompare )
            goto LABEL_9;
          ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
          v11 = v23(ObjectHandleUnchecked);
          if ( v11 )
            break;
        }
        v10 = (FxChildList_vtbl *)v10->SelfDestruct;
      }
      while ( v10 != (FxChildList_vtbl *)&this->m_DescriptionListHead );
      if ( !v11 )
        goto LABEL_18;
LABEL_9:
      Iterator->Reserved[0] = v10;
      SelfDestruct = (FxObject *)v13[1].SelfDestruct;
      if ( SelfDestruct )
      {
        *Device = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(SelfDestruct);
        v15 = WdfChildListRetrieveDeviceSuccess;
      }
      else
      {
        v15 = WdfChildListRetrieveDeviceNotYetCreated;
      }
      if ( Info )
      {
        IdentificationDescription = Info->IdentificationDescription;
        if ( IdentificationDescription )
          FxChildList::CopyId(
            this,
            IdentificationDescription,
            (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v13->AddRefOverride);
        AddressDescription = Info->AddressDescription;
        if ( AddressDescription )
          FxChildList::CopyAddress(
            this,
            AddressDescription,
            (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)v13->ReleaseOverride);
        Info->Status = v15;
      }
      v8 = 0;
    }
  }
  if ( (Iterator->Flags & 4) == 0 )
    goto $Done_4;
  v24 = (unsigned int)Iterator->Reserved[1];
  v32 = v24;
  if ( !v24 )
    goto $Done_4;
  v25 = 0;
  Flink = this->m_ModificationListHead.Flink;
  v27 = 1;
  if ( Flink == &this->m_ModificationListHead )
    goto LABEL_57;
  while ( 1 )
  {
    if ( LODWORD(Flink[1].Flink) != 1 )
      goto LABEL_47;
    if ( ++v27 <= v24 )
      goto LABEL_47;
    v25 = 1;
    if ( !Info )
      break;
    if ( !Info->EvtChildListIdentificationDescriptionCompare )
      break;
    v28 = FxObject::GetObjectHandleUnchecked(this);
    v25 = v29(v28);
    if ( v25 )
      break;
    v24 = v32;
LABEL_47:
    Flink = Flink->Flink;
    if ( Flink == &this->m_ModificationListHead )
      goto LABEL_56;
  }
  Iterator->Reserved[1] = (void *)v27;
  if ( Info )
  {
    v30 = Info->IdentificationDescription;
    if ( v30 )
      FxChildList::CopyId(this, v30, (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)Flink[-1].Flink);
    v31 = Info->AddressDescription;
    if ( v31 )
      FxChildList::CopyAddress(this, v31, (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)Flink[-1].Blink);
    Info->Status = WdfChildListRetrieveDeviceNotYetCreated;
  }
  v8 = 0;
LABEL_56:
  if ( !v25 )
LABEL_57:
    Iterator->Reserved[1] = 0LL;
$Done_4:
  KeReleaseSpinLock(SpinLock, NewIrql);
  return v8;
}
