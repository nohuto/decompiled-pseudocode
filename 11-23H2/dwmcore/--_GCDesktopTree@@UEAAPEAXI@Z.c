/*
 * XREFs of ??_GCDesktopTree@@UEAAPEAXI@Z @ 0x1801C29A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CDesktopTree@@UEAA@XZ @ 0x18020F6D4 (--1CDesktopTree@@UEAA@XZ.c)
 */

CDesktopTree *__fastcall CDesktopTree::`scalar deleting destructor'(CDesktopTree *this, char a2)
{
  CDesktopTree::~CDesktopTree(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
