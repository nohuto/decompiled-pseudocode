/*
 * XREFs of ??_GCFilterEffect@@MEAAPEAXI@Z @ 0x1801C29F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x1801C19A8 (--1CFilterEffect@@MEAA@XZ.c)
 */

CFilterEffect *__fastcall CFilterEffect::`scalar deleting destructor'(CFilterEffect *this, char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
