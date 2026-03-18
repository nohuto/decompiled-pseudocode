/*
 * XREFs of ??_ECInteractionTrackerBindingManager@@UEAAPEAXI@Z @ 0x18021F790
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CInteractionTrackerBindingManager@@UEAA@XZ @ 0x18021F6CC (--1CInteractionTrackerBindingManager@@UEAA@XZ.c)
 */

CInteractionTrackerBindingManager *__fastcall CInteractionTrackerBindingManager::`vector deleting destructor'(
        CInteractionTrackerBindingManager *this,
        char a2)
{
  CInteractionTrackerBindingManager::~CInteractionTrackerBindingManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
