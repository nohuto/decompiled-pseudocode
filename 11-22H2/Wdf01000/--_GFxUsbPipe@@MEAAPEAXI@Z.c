/*
 * XREFs of ??_GFxUsbPipe@@MEAAPEAXI@Z @ 0x1C0059AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x1C0059894 (--1FxUsbPipe@@MEAA@XZ.c)
 */

FxUsbPipe *__fastcall FxUsbPipe::`scalar deleting destructor'(FxUsbPipe *this, unsigned int a2)
{
  char v2; // bl
  FX_POOL_TRACKER *p_m_PipeInformation; // rcx

  v2 = a2;
  FxUsbPipe::~FxUsbPipe(this, a2);
  if ( (v2 & 1) != 0 )
  {
    p_m_PipeInformation = (FX_POOL_TRACKER *)&this[-1].m_PipeInformation;
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      p_m_PipeInformation = (FX_POOL_TRACKER *)this;
    FxPoolFree(p_m_PipeInformation);
  }
  return this;
}
