/*
 * XREFs of ??_GLayerVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180086180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1LayerVisual@Composition@UI@Windows@@UEAA@XZ @ 0x1800861C4 (--1LayerVisual@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::LayerVisual *__fastcall Windows::UI::Composition::LayerVisual::`scalar deleting destructor'(
        Windows::UI::Composition::LayerVisual *this,
        char a2)
{
  Windows::UI::Composition::LayerVisual::~LayerVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x170uLL);
    else
      operator delete(this);
  }
  return this;
}
