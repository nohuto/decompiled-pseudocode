/*
 * XREFs of ??_ECompositionIsland@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18010E410
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompositionIsland@Composition@UI@Windows@@UEAA@XZ @ 0x18000C708 (--1CompositionIsland@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionIsland *__fastcall Windows::UI::Composition::CompositionIsland::`vector deleting destructor'(
        Windows::UI::Composition::CompositionIsland *this,
        char a2)
{
  Windows::UI::Composition::CompositionIsland::~CompositionIsland(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
