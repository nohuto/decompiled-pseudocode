/*
 * XREFs of ?CompareId@FxChildList@@IEAAEPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C0023E20
 * Callers:
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C002638C (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C00263F8 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxChildList::CompareId(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Lhs,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Rhs)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 (__fastcall *v4)(unsigned __int64); // r9

  if ( !this->m_EvtIdentificationDescriptionCompare )
    return this->m_IdentificationDescriptionSize == RtlCompareMemory(Lhs, Rhs, this->m_IdentificationDescriptionSize);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
  return v4(ObjectHandleUnchecked);
}
