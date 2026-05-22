/*
 * XREFs of ??_GCompositionPath@Composition@UI@Windows@@MEAAPEAXI@Z @ 0x180012950
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompositionPath@Composition@UI@Windows@@MEAA@XZ @ 0x180012994 (--1CompositionPath@Composition@UI@Windows@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionPath *__fastcall Windows::UI::Composition::CompositionPath::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionPath *this,
        char a2)
{
  Windows::UI::Composition::CompositionPath::~CompositionPath(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x88uLL);
    else
      operator delete(this);
  }
  return this;
}
