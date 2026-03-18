/*
 * XREFs of ??1FxPagedObject@@UEAA@XZ @ 0x1C00018D8
 * Callers:
 *     ??1FxRegKey@@UEAA@XZ @ 0x1C0001910 (--1FxRegKey@@UEAA@XZ.c)
 *     ??_GFxPagedObject@@UEAAPEAXI@Z @ 0x1C004CAF0 (--_GFxPagedObject@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004920 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxPagedObject::~FxPagedObject(FxPagedObject *this)
{
  MxPagedLock *m_Lock; // rcx

  this->__vftable = (FxPagedObject_vtbl *)FxPagedObject::`vftable';
  m_Lock = this->m_Lock;
  if ( m_Lock )
  {
    FxPoolFree(m_Lock);
    this->m_Lock = 0LL;
  }
  FxObject::~FxObject(this);
}
