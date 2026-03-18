/*
 * XREFs of ??_ECGlobalManipulationManager@@EEAAPEAXI@Z @ 0x1802725E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x180272368 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 */

CGlobalManipulationManager *__fastcall CGlobalManipulationManager::`vector deleting destructor'(
        CGlobalManipulationManager *this,
        char a2)
{
  CGlobalManipulationManager::~CGlobalManipulationManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
