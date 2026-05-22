/*
 * XREFs of ??_EShapeVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000DB50
 * Callers:
 *     ??_EShapeVisual@Composition@UI@Windows@@WBDI@EAAPEAXI@Z @ 0x1800AE310 (--_EShapeVisual@Composition@UI@Windows@@WBDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ShapeVisual@Composition@UI@Windows@@UEAA@XZ @ 0x18000DB94 (--1ShapeVisual@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::ShapeVisual *__fastcall Windows::UI::Composition::ShapeVisual::`vector deleting destructor'(
        Windows::UI::Composition::ShapeVisual *this,
        char a2)
{
  Windows::UI::Composition::ShapeVisual::~ShapeVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x178uLL);
    else
      operator delete(this);
  }
  return this;
}
