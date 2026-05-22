/*
 * XREFs of ??_GCompositionLinearGradientBrush@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180011FF0
 * Callers:
 *     ??_ECompositionLinearGradientBrush@Composition@UI@Windows@@WLA@EAAPEAXI@Z @ 0x1800AE2B0 (--_ECompositionLinearGradientBrush@Composition@UI@Windows@@WLA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CompositionGradientBrush@Composition@UI@Windows@@UEAA@XZ @ 0x180012034 (--1CompositionGradientBrush@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionLinearGradientBrush *__fastcall Windows::UI::Composition::CompositionLinearGradientBrush::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionLinearGradientBrush *this,
        char a2)
{
  Windows::UI::Composition::CompositionGradientBrush::~CompositionGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x110uLL);
    else
      operator delete(this);
  }
  return this;
}
