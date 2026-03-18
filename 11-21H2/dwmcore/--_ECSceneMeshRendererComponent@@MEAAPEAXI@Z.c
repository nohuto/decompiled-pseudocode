/*
 * XREFs of ??_ECSceneMeshRendererComponent@@MEAAPEAXI@Z @ 0x18023C3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x18023C328 (--1CSceneMeshRendererComponent@@MEAA@XZ.c)
 */

CSceneMeshRendererComponent *__fastcall CSceneMeshRendererComponent::`vector deleting destructor'(
        CSceneMeshRendererComponent *this,
        char a2)
{
  CSceneMeshRendererComponent::~CSceneMeshRendererComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
