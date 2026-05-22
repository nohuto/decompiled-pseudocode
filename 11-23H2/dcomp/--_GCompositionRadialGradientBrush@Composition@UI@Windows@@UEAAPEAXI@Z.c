/*
 * XREFs of ??_GCompositionRadialGradientBrush@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123C10
 * Callers:
 *     ??_ECompositionRadialGradientBrush@Composition@UI@Windows@@WLA@EAAPEAXI@Z @ 0x1800AE2D0 (--_ECompositionRadialGradientBrush@Composition@UI@Windows@@WLA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CompositionGradientBrush@Composition@UI@Windows@@UEAA@XZ @ 0x180012034 (--1CompositionGradientBrush@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Windows::UI::Composition::CompositionRadialGradientBrush::`scalar deleting destructor'(
        Microsoft::WRL2::NestableRuntimeClass **this,
        char a2)
{
  Windows::UI::Composition::CompositionGradientBrush::~CompositionGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
