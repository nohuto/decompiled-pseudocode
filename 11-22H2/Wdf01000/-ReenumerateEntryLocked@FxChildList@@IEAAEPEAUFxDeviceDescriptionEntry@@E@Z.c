/*
 * XREFs of ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C002625C
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00255CC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C00261C4 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 */

unsigned __int8 __fastcall FxChildList::ReenumerateEntryLocked(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  _LIST_ENTRY *p_m_ModificationLink; // r9
  FxDeviceDescriptionEntry *Flink; // rdi
  char v6; // bl
  const void *_a1; // rax
  FxDeviceDescriptionEntry *v8; // r9
  __int64 v9; // r8
  unsigned int _a4; // r10d
  _FX_DRIVER_GLOBALS *v11; // r11
  _LIST_ENTRY *p_m_ModificationListHead; // rax
  _LIST_ENTRY *Blink; // rcx
  const void *ObjectHandleUnchecked; // rax
  __int64 v15; // r8
  _FX_DRIVER_GLOBALS *v16; // r11

  p_m_ModificationLink = &Entry->m_ModificationLink;
  Flink = (FxDeviceDescriptionEntry *)Entry->m_ModificationLink.Flink;
  if ( Flink == (FxDeviceDescriptionEntry *)&Entry->m_ModificationLink
    && (unsigned int)(Entry->m_DescriptionState - 1) <= 1 )
  {
    if ( !FromQDR )
    {
      p_m_ModificationListHead = &this->m_ModificationListHead;
      Entry->m_ModificationState = ModificationClone;
      Blink = this->m_ModificationListHead.Blink;
      if ( Blink->Flink != p_m_ModificationListHead )
        __fastfail(3u);
      p_m_ModificationLink->Flink = p_m_ModificationListHead;
      Entry->m_ModificationLink.Blink = Blink;
      Blink->Flink = p_m_ModificationLink;
      p_m_ModificationListHead->Blink = p_m_ModificationLink;
    }
    if ( this->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Entry->m_Pdo);
      WPP_IFR_SF_qq(
        v16,
        5u,
        0xCu,
        0x14u,
        WPP_FxChildList_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v15 + 144));
    }
    return 1;
  }
  else
  {
    v6 = 0;
    if ( this->m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Entry->m_Pdo);
      WPP_IFR_SF_qqdd(
        v11,
        5u,
        0xCu,
        0x15u,
        WPP_FxChildList_cpp_Traceguids,
        _a1,
        *(const void **)(v9 + 144),
        Flink == v8,
        _a4);
    }
  }
  return v6;
}
