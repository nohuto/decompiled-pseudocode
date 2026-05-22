/*
 * XREFs of ??_EVisualTreeIsland@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000C670
 * Callers:
 *     <none>
 * Callees:
 *     ??1VisualTreeIsland@Composition@UI@Windows@@UEAA@XZ @ 0x18000C6B4 (--1VisualTreeIsland@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::VisualTreeIsland *__fastcall Windows::UI::Composition::VisualTreeIsland::`vector deleting destructor'(
        Windows::UI::Composition::VisualTreeIsland *this,
        char a2)
{
  Windows::UI::Composition::VisualTreeIsland::~VisualTreeIsland(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x238uLL);
    else
      operator delete(this);
  }
  return this;
}
