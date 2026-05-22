/*
 * XREFs of ??_EVisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18011CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x18011CA24 (--1VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Interactions::VisualInteractionSource *__fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::`vector deleting destructor'(
        Windows::UI::Composition::Interactions::VisualInteractionSource *this,
        char a2)
{
  Windows::UI::Composition::Interactions::VisualInteractionSource::~VisualInteractionSource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
