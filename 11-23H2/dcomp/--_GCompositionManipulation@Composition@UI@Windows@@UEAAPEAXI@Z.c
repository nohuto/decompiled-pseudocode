/*
 * XREFs of ??_GCompositionManipulation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180153230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CompositionManipulation@Composition@UI@Windows@@UEAA@XZ @ 0x1801531DC (--1CompositionManipulation@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::CompositionManipulation *__fastcall Windows::UI::Composition::CompositionManipulation::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionManipulation *this,
        char a2)
{
  Windows::UI::Composition::CompositionManipulation::~CompositionManipulation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
