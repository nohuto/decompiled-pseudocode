/*
 * XREFs of ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x1C0084E10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgGeneral@@UEAA@XZ @ 0x1C0084DA4 (--1FxPkgGeneral@@UEAA@XZ.c)
 */

FxPkgGeneral *__fastcall FxPkgGeneral::`vector deleting destructor'(FxPkgGeneral *this, unsigned int a2)
{
  char v2; // bl
  FxPkgGeneral *v4; // rcx

  v2 = a2;
  FxPkgGeneral::~FxPkgGeneral(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxPkgGeneral *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
