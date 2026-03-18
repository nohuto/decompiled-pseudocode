/*
 * XREFs of ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x1C0041CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0002D30 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxDisposeList *__fastcall FxDisposeList::`scalar deleting destructor'(FxDisposeList *this, unsigned int a2)
{
  char v2; // bl
  FxDisposeList *v4; // rcx

  v2 = a2;
  this->__vftable = (FxDisposeList_vtbl *)FxDisposeList::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxDisposeList *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
