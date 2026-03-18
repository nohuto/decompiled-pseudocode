/*
 * XREFs of ??_EFxDmaEnabler@@UEAAPEAXI@Z @ 0x1C001AC30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDmaEnabler@@UEAA@XZ @ 0x1C001AB5C (--1FxDmaEnabler@@UEAA@XZ.c)
 */

FxDmaEnabler *__fastcall FxDmaEnabler::`vector deleting destructor'(FxDmaEnabler *this, unsigned int a2)
{
  char v2; // bl
  FxDmaEnabler *v4; // rcx

  v2 = a2;
  FxDmaEnabler::~FxDmaEnabler(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxDmaEnabler *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
