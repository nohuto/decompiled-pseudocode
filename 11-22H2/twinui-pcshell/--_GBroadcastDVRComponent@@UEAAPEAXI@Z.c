/*
 * XREFs of ??_GBroadcastDVRComponent@@UEAAPEAXI@Z @ 0x1801653A4
 * Callers:
 *     ??_EBroadcastDVRComponent@@WDI@EAAPEAXI@Z @ 0x180293010 (--_EBroadcastDVRComponent@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1BroadcastDVRComponent@@UEAA@XZ @ 0x1801653E0 (--1BroadcastDVRComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

BroadcastDVRComponent *__fastcall BroadcastDVRComponent::`scalar deleting destructor'(
        BroadcastDVRComponent *this,
        char a2)
{
  BroadcastDVRComponent::~BroadcastDVRComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x238uLL);
  return this;
}
