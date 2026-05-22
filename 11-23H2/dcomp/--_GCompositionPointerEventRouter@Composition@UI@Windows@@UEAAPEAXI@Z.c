/*
 * XREFs of ??_GCompositionPointerEventRouter@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18008D650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CompositionPointerEventRouter@Composition@UI@Windows@@UEAA@XZ @ 0x18008D694 (--1CompositionPointerEventRouter@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionPointerEventRouter *__fastcall Windows::UI::Composition::CompositionPointerEventRouter::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionPointerEventRouter *this,
        char a2)
{
  Windows::UI::Composition::CompositionPointerEventRouter::~CompositionPointerEventRouter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xB8uLL);
    else
      operator delete(this);
  }
  return this;
}
