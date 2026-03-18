/*
 * XREFs of ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C0033DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxWmiIrpHandler@@UEAA@XZ @ 0x1C0033E10 (--1FxWmiIrpHandler@@UEAA@XZ.c)
 */

FxWmiIrpHandler *__fastcall FxWmiIrpHandler::`scalar deleting destructor'(FxWmiIrpHandler *this, char a2)
{
  FxWmiIrpHandler *v4; // rcx

  FxWmiIrpHandler::~FxWmiIrpHandler(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxWmiIrpHandler *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
