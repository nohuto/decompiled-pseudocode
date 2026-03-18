/*
 * XREFs of ??_ECSolidColorLegacyMilBrush@@UEAAPEAXI@Z @ 0x1800F67C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1?$CLegacyMilBrushGeneratedT@VCLegacyMilBrush@@VCResource@@@@MEAA@XZ @ 0x1800F68B4 (--1-$CLegacyMilBrushGeneratedT@VCLegacyMilBrush@@VCResource@@@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CSolidColorLegacyMilBrush *__fastcall CSolidColorLegacyMilBrush::`vector deleting destructor'(
        CSolidColorLegacyMilBrush *this,
        char a2)
{
  CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>::~CLegacyMilBrushGeneratedT<CLegacyMilBrush,CResource>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x70uLL);
    else
      operator delete(this);
  }
  return this;
}
