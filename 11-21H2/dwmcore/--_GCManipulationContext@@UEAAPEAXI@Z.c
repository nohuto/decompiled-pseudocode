/*
 * XREFs of ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x180181E08
 * Callers:
 *     ??_ECManipulationContext@@W7EAAPEAXI@Z @ 0x1801051F0 (--_ECManipulationContext@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CManipulationContext@@UEAA@XZ @ 0x180181C00 (--1CManipulationContext@@UEAA@XZ.c)
 */

CManipulationContext *__fastcall CManipulationContext::`scalar deleting destructor'(
        CManipulationContext *this,
        char a2)
{
  CManipulationContext::~CManipulationContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
