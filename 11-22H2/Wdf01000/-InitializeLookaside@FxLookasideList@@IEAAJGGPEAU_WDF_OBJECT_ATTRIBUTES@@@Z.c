/*
 * XREFs of ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0042F1C
 * Callers:
 *     ?Initialize@FxNPagedLookasideList@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0041480 (-Initialize@FxNPagedLookasideList@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxNPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0041510 (-Initialize@FxNPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0041AF0 (-Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00027D8 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00028FC (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x1C003E0C8 (-FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z.c)
 */

__int64 __fastcall FxLookasideList::InitializeLookaside(
        FxLookasideList *this,
        unsigned __int16 BufferSize,
        unsigned __int16 MemoryObjectSize,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes)
{
  _WDF_OBJECT_ATTRIBUTES *p_m_MemoryAttributes; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int64 ContextSize; // rax
  unsigned __int16 v8; // r11
  __int64 result; // rax
  unsigned __int64 size; // [rsp+40h] [rbp+8h] BYREF

  size = 0LL;
  p_m_MemoryAttributes = &this->m_MemoryAttributes;
  v6 = BufferSize;
  if ( MemoryAttributes )
  {
    *p_m_MemoryAttributes = *MemoryAttributes;
  }
  else
  {
    *(_OWORD *)&p_m_MemoryAttributes->Size = 0LL;
    *(_OWORD *)&p_m_MemoryAttributes->EvtDestroyCallback = 0LL;
    *(_OWORD *)&p_m_MemoryAttributes->ParentObject = 0LL;
    p_m_MemoryAttributes->ContextTypeInfo = 0LL;
  }
  ContextSize = FxGetContextSize(p_m_MemoryAttributes);
  result = FxCalculateObjectTotalSize2(this->m_Globals, v8, v6, ContextSize, &size);
  if ( (int)result >= 0 )
  {
    result = FxPoolAddHeaderSize(this->m_Globals, size, &size);
    if ( (int)result >= 0 )
    {
      this->m_MemoryObjectSize = size;
      result = (unsigned int)result;
      this->m_BufferSize = v6;
    }
  }
  return result;
}
