/*
 * XREFs of ??_EFxUsbDevice@@MEAAPEAXI@Z @ 0x1C005C550
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x1C005C440 (--1FxUsbDevice@@MEAA@XZ.c)
 */

FxUsbDevice *__fastcall FxUsbDevice::`vector deleting destructor'(FxUsbDevice *this, unsigned int a2)
{
  char v2; // bl
  FX_POOL_TRACKER *p_WaitListHead; // rcx

  v2 = a2;
  FxUsbDevice::~FxUsbDevice(this, a2);
  if ( (v2 & 1) != 0 )
  {
    p_WaitListHead = (FX_POOL_TRACKER *)&this[-1].m_InterfaceIterationLock.m_Event.m_Event.Header.WaitListHead;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_WaitListHead = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_WaitListHead);
  }
  return this;
}
