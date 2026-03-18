/*
 * XREFs of ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x1C005E3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxWmiInstanceInternal *__fastcall FxWmiInstanceExternal::`vector deleting destructor'(
        FxWmiInstanceInternal *this,
        unsigned int a2)
{
  char v2; // bl
  FxWmiInstanceInternal *v4; // rcx

  v2 = a2;
  this->__vftable = (FxWmiInstanceInternal_vtbl *)FxWmiInstance::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxWmiInstanceInternal *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
