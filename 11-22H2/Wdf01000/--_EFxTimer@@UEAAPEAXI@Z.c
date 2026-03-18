/*
 * XREFs of ??_EFxTimer@@UEAAPEAXI@Z @ 0x1C0040E60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x1C0040DE4 (--1FxTimer@@UEAA@XZ.c)
 */

FxTimer *__fastcall FxTimer::`vector deleting destructor'(FxTimer *this, __int64 a2)
{
  char v2; // bl
  FxTimer *v4; // rcx

  v2 = a2;
  FxTimer::~FxTimer(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxTimer *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
