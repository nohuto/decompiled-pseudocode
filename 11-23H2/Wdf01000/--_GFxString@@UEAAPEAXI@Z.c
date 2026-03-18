/*
 * XREFs of ??_GFxString@@UEAAPEAXI@Z @ 0x1C004F2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxString@@UEAA@XZ @ 0x1C004F2A8 (--1FxString@@UEAA@XZ.c)
 */

FxString *__fastcall FxString::`scalar deleting destructor'(FxString *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxString *v5; // rcx

  v3 = a2;
  FxString::~FxString(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxString *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree((FX_POOL_TRACKER *)v5);
  }
  return this;
}
