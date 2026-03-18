/*
 * XREFs of ??_ECLinearGradientBrush@@UEAAPEAXI@Z @ 0x1800A4150
 * Callers:
 *     ??_ECLinearGradientBrush@@WFI@EAAPEAXI@Z @ 0x18011DC90 (--_ECLinearGradientBrush@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1800A4194 (--1CGradientBrush@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::`vector deleting destructor'(
        CLinearGradientBrush *this,
        char a2)
{
  CGradientBrush::~CGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x120uLL);
    else
      operator delete(this);
  }
  return this;
}
