/*
 * XREFs of ??_EFxRequestMemory@@UEAAPEAXI@Z @ 0x1C0042410
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C0042360 (--1FxRequestMemory@@UEAA@XZ.c)
 */

FxRequestMemory *__fastcall FxRequestMemory::`vector deleting destructor'(
        FxRequestMemory *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxRequestMemory *v5; // rcx

  v3 = a2;
  FxRequestMemory::~FxRequestMemory(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxRequestMemory *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
