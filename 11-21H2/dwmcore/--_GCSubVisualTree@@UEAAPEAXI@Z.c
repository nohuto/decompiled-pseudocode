/*
 * XREFs of ??_GCSubVisualTree@@UEAAPEAXI@Z @ 0x180246590
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualTree@@UEAA@XZ @ 0x180063EB4 (--1CVisualTree@@UEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CSubVisualTree *__fastcall CSubVisualTree::`scalar deleting destructor'(CSubVisualTree *this, char a2)
{
  *((_QWORD *)this + 8) = 0LL;
  --CSubVisualTree::s_cSubTrees;
  *(_QWORD *)this = &CSubVisualTree::`vftable';
  CVisualTree::~CVisualTree(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
