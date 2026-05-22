/*
 * XREFs of ??_GVisualIslandSite@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180010F30
 * Callers:
 *     <none>
 * Callees:
 *     ??1VisualIslandSite@Composition@UI@Windows@@UEAA@XZ @ 0x180010F74 (--1VisualIslandSite@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::VisualIslandSite *__fastcall Windows::UI::Composition::VisualIslandSite::`scalar deleting destructor'(
        Windows::UI::Composition::VisualIslandSite *this,
        char a2)
{
  Windows::UI::Composition::VisualIslandSite::~VisualIslandSite(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x138uLL);
    else
      operator delete(this);
  }
  return this;
}
