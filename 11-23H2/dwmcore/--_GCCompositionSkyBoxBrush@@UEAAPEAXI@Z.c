/*
 * XREFs of ??_GCCompositionSkyBoxBrush@@UEAAPEAXI@Z @ 0x180224E40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x180224D54 (--1CCompositionSkyBoxBrush@@UEAA@XZ.c)
 */

CCompositionSkyBoxBrush *__fastcall CCompositionSkyBoxBrush::`scalar deleting destructor'(
        CCompositionSkyBoxBrush *this,
        char a2)
{
  CCompositionSkyBoxBrush::~CCompositionSkyBoxBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
