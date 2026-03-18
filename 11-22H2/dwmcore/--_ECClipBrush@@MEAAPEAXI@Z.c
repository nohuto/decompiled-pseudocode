/*
 * XREFs of ??_ECClipBrush@@MEAAPEAXI@Z @ 0x180220FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x180220F18 (--1CClipBrush@@MEAA@XZ.c)
 */

CClipBrush *__fastcall CClipBrush::`vector deleting destructor'(CClipBrush *this, char a2)
{
  CClipBrush::~CClipBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
