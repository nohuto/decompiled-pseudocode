/*
 * XREFs of ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C0003284
 * Callers:
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0003140 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C0024944 (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 */

void __fastcall FxChildList::CopyId(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Source)
{
  void *ObjectHandleUnchecked; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  void (__fastcall *v6)(void *, __int64, __int64); // r11

  if ( this->m_EvtIdentificationDescriptionCopy )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    v6(ObjectHandleUnchecked, v4, v5);
  }
  else
  {
    memmove(Dest, Source, this->m_IdentificationDescriptionSize);
  }
}
