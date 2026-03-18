/*
 * XREFs of ??_EFxWorkItem@@UEAAPEAXI@Z @ 0x1C0018930
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C0018970 (--1FxWorkItem@@UEAA@XZ.c)
 */

FxWorkItem *__fastcall FxWorkItem::`vector deleting destructor'(FxWorkItem *this, char a2)
{
  FX_POOL_TRACKER *p_m_Callback; // rcx

  FxWorkItem::~FxWorkItem(this);
  if ( (a2 & 1) != 0 )
  {
    p_m_Callback = (FX_POOL_TRACKER *)&this[-1].m_Callback;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_m_Callback = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_m_Callback);
  }
  return this;
}
