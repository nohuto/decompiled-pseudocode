/*
 * XREFs of ??1FxNPagedLookasideList@@MEAA@XZ @ 0x1C0041344
 * Callers:
 *     ??_EFxNPagedLookasideList@@MEAAPEAXI@Z @ 0x1C0041400 (--_EFxNPagedLookasideList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 */

void __fastcall FxNPagedLookasideList::~FxNPagedLookasideList(
        FxNPagedLookasideList *this,
        unsigned int a2,
        unsigned int a3)
{
  bool v3; // zf

  v3 = this->m_MemoryObjectSize == 0;
  this->__vftable = (FxNPagedLookasideList_vtbl *)FxNPagedLookasideList::`vftable';
  if ( !v3 )
    ExDeleteNPagedLookasideList(&this->m_ObjectLookaside);
  this->__vftable = (FxNPagedLookasideList_vtbl *)FxLookasideList::`vftable';
  FxObject::~FxObject(this, a2, a3);
}
