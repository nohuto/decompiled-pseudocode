/*
 * XREFs of ??_EFxUsbInterface@@MEAAPEAXI@Z @ 0x1C005EA00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C005E93C (--1FxUsbInterface@@MEAA@XZ.c)
 */

FxUsbInterface *__fastcall FxUsbInterface::`vector deleting destructor'(FxUsbInterface *this, char a2)
{
  FX_POOL_TRACKER *p_m_NPLock; // rcx

  FxUsbInterface::~FxUsbInterface(this);
  if ( (a2 & 1) != 0 )
  {
    p_m_NPLock = (FX_POOL_TRACKER *)&this[-1].m_NPLock;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_m_NPLock = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_m_NPLock);
  }
  return this;
}
