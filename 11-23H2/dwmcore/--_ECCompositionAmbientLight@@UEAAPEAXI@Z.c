/*
 * XREFs of ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x180011670
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180011738 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CCompositionAmbientLight *__fastcall CCompositionAmbientLight::`vector deleting destructor'(
        CCompositionAmbientLight *this,
        char a2)
{
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x118uLL);
    else
      operator delete(this);
  }
  return this;
}
