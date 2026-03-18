/*
 * XREFs of ??_EFxPkgIo@@UEAAPEAXI@Z @ 0x1C00620B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x1C0061FD8 (--1FxPkgIo@@UEAA@XZ.c)
 */

FxPkgIo *__fastcall FxPkgIo::`vector deleting destructor'(FxPkgIo *this, unsigned int a2)
{
  char v2; // bl
  FxPkgIo *v4; // rcx

  v2 = a2;
  FxPkgIo::~FxPkgIo(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxPkgIo *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
