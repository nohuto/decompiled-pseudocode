/*
 * XREFs of ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C006B1FC
 * Callers:
 *     ?Initialize@FxNPagedLookasideList@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C006A290 (-Initialize@FxNPagedLookasideList@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxNPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C006A320 (-Initialize@FxNPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C006A8B0 (-Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C00216DC (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 *     ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x1C00243A0 (-FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z.c)
 */

int __fastcall FxLookasideList::InitializeLookaside(
        FxLookasideList *this,
        unsigned __int16 BufferSize,
        unsigned __int16 MemoryObjectSize,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes)
{
  unsigned __int64 v5; // rdi
  _WDF_OBJECT_ATTRIBUTES *p_m_MemoryAttributes; // r9
  int result; // eax
  unsigned __int64 size; // [rsp+40h] [rbp+8h] BYREF

  size = 0LL;
  v5 = BufferSize;
  p_m_MemoryAttributes = &this->m_MemoryAttributes;
  if ( MemoryAttributes )
  {
    *(_OWORD *)&p_m_MemoryAttributes->Size = *(_OWORD *)&MemoryAttributes->Size;
    *(_OWORD *)&this->m_MemoryAttributes.EvtDestroyCallback = *(_OWORD *)&MemoryAttributes->EvtDestroyCallback;
    *(_OWORD *)&this->m_MemoryAttributes.ParentObject = *(_OWORD *)&MemoryAttributes->ParentObject;
    this->m_MemoryAttributes.ContextTypeInfo = MemoryAttributes->ContextTypeInfo;
  }
  else
  {
    *(_OWORD *)&p_m_MemoryAttributes->Size = 0LL;
    *(_OWORD *)&this->m_MemoryAttributes.EvtDestroyCallback = 0LL;
    *(_OWORD *)&this->m_MemoryAttributes.ParentObject = 0LL;
    this->m_MemoryAttributes.ContextTypeInfo = 0LL;
  }
  result = FxCalculateObjectTotalSize(this->m_Globals, MemoryObjectSize, BufferSize, p_m_MemoryAttributes, &size);
  if ( result >= 0 )
  {
    result = FxPoolAddHeaderSize(this->m_Globals, size, &size);
    if ( result >= 0 )
    {
      this->m_MemoryObjectSize = size;
      this->m_BufferSize = v5;
    }
  }
  return result;
}
