/*
 * XREFs of ??_EFxPkgFdo@@MEAAPEAXI@Z @ 0x1C0077AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgFdo@@MEAA@XZ @ 0x1C00779D4 (--1FxPkgFdo@@MEAA@XZ.c)
 */

FxPkgFdo *__fastcall FxPkgFdo::`vector deleting destructor'(FxPkgFdo *this, char a2)
{
  FxPkgFdo *v4; // rcx

  FxPkgFdo::~FxPkgFdo(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxPkgFdo *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
