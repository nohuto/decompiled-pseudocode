/*
 * XREFs of ??_GCSubVisualTree@@UEAAPEAXI@Z @ 0x180258A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x18009FB34 (--1CVisualTree@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
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
      operator delete(this);
  }
  return this;
}
