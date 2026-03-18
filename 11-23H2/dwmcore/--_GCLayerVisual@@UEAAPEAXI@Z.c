/*
 * XREFs of ??_GCLayerVisual@@UEAAPEAXI@Z @ 0x1800244F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLayerVisual@@UEAA@XZ @ 0x180024534 (--1CLayerVisual@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CLayerVisual *__fastcall CLayerVisual::`scalar deleting destructor'(CLayerVisual *this, char a2)
{
  CLayerVisual::~CLayerVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x2E0uLL);
    else
      operator delete(this);
  }
  return this;
}
