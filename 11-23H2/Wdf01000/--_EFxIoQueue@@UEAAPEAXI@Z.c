/*
 * XREFs of ??_EFxIoQueue@@UEAAPEAXI@Z @ 0x1C00634B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C006344C (--1FxIoQueue@@UEAA@XZ.c)
 */

FxIoQueue *__fastcall FxIoQueue::`vector deleting destructor'(FxIoQueue *this, char a2)
{
  FxIoQueue *v4; // rcx

  FxIoQueue::~FxIoQueue(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxIoQueue *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
