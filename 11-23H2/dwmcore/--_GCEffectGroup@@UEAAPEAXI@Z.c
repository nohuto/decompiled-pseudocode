/*
 * XREFs of ??_GCEffectGroup@@UEAAPEAXI@Z @ 0x1800ECE20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ??1?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAA@XZ @ 0x1800ECE64 (--1-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CEffectGroup *__fastcall CEffectGroup::`scalar deleting destructor'(CEffectGroup *this, char a2)
{
  CEffectGroupGeneratedT<CEffectGroup,CEffect>::~CEffectGroupGeneratedT<CEffectGroup,CEffect>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x60uLL);
    else
      operator delete(this);
  }
  return this;
}
