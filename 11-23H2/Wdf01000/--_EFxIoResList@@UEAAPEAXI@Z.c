/*
 * XREFs of ??_EFxIoResList@@UEAAPEAXI@Z @ 0x1C0048B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1C004F03C (--1FxCollection@@UEAA@XZ.c)
 */

FxCollection *__fastcall FxIoResList::`vector deleting destructor'(FxCollection *this, char a2)
{
  FxCollection *v4; // rcx

  FxCollection::~FxCollection(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxCollection *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
