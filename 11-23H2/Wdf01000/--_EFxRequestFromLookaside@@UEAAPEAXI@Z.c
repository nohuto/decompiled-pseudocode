/*
 * XREFs of ??_EFxRequestFromLookaside@@UEAAPEAXI@Z @ 0x1C003A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C0002EE8 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxRequestBase *__fastcall FxRequestFromLookaside::`vector deleting destructor'(FxRequestBase *this, unsigned int a2)
{
  char v2; // bl
  FxRequestBase *v4; // rcx

  v2 = a2;
  FxRequestBase::~FxRequestBase(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxRequestBase *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
