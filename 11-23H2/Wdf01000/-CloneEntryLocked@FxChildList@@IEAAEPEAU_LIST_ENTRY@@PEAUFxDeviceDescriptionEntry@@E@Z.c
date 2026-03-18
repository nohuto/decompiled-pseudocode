/*
 * XREFs of ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0023C7C
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00255CC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0025E58 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C001C308 (WPP_IFR_SF_qqq.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C0023B6C (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 */

char __fastcall FxChildList::CloneEntryLocked(
        FxChildList *this,
        _LIST_ENTRY *FreeListHead,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  int _a3; // r12d
  FxObject **p_m_Pdo; // r14
  const void *_a1; // rax
  __int64 v10; // r8
  _FX_DRIVER_GLOBALS *v11; // r10
  const _GUID *traceGuid; // r11
  char v13; // r15
  FxDeviceDescriptionEntry *v14; // rbx
  unsigned __int64 ObjectHandleUnchecked; // rax
  unsigned __int8 (__fastcall *v16)(unsigned __int64); // r10
  _LIST_ENTRY *Blink; // rax
  const void *_a2; // rax
  __int64 v19; // r10
  _FX_DRIVER_GLOBALS *v20; // r11
  _LIST_ENTRY *v21; // rcx

  _a3 = FromQDR;
  p_m_Pdo = &Entry->m_Pdo;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(*p_m_Pdo);
    WPP_IFR_SF_qid(v11, 5u, 0xCu, 0x16u, traceGuid, _a1, *(_QWORD *)(v10 + 144), _a3);
  }
  v13 = 0;
  v14 = FxDeviceDescriptionEntry::Clone(Entry, FreeListHead);
  if ( v14 )
  {
    if ( this->m_EvtChildListDeviceReenumerated )
    {
      FxObject::GetObjectHandleUnchecked(*p_m_Pdo);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      if ( !v16(ObjectHandleUnchecked) )
      {
        Blink = FreeListHead->Blink;
        if ( Blink->Flink == FreeListHead )
        {
          v14->m_DescriptionLink.Flink = FreeListHead;
          v14->m_DescriptionLink.Blink = Blink;
          Blink->Flink = (_LIST_ENTRY *)v14;
          FreeListHead->Blink = (_LIST_ENTRY *)v14;
          goto LABEL_14;
        }
LABEL_11:
        __fastfail(3u);
      }
    }
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(*p_m_Pdo);
      WPP_IFR_SF_qqq(v20, 5u, 0xCu, 0x17u, WPP_FxChildList_cpp_Traceguids, v14, _a2, *(const void **)(v19 + 144));
    }
    v14->m_ModificationState = ModificationUnspecified;
    v14->m_DescriptionState = DescriptionPresentNeedsInstantiation;
    v21 = this->m_DescriptionListHead.Blink;
    if ( v21->Flink != &this->m_DescriptionListHead )
      goto LABEL_11;
    v14->m_DescriptionLink.Flink = &this->m_DescriptionListHead;
    v14->m_DescriptionLink.Blink = v21;
    v21->Flink = (_LIST_ENTRY *)v14;
    this->m_DescriptionListHead.Blink = (_LIST_ENTRY *)v14;
    if ( !(_BYTE)_a3 )
    {
      Entry->m_DescriptionState = DescriptionNotPresent;
      v13 = 1;
    }
  }
LABEL_14:
  Entry->m_ModificationState = ModificationUnspecified;
  return v13;
}
