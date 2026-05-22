/*
 * XREFs of ??_ECompositionIslandTarget@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18010E460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CompositionIslandTarget@Composition@UI@Windows@@UEAA@XZ @ 0x18010E358 (--1CompositionIslandTarget@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::CompositionIslandTarget *__fastcall Windows::UI::Composition::CompositionIslandTarget::`vector deleting destructor'(
        Windows::UI::Composition::CompositionIslandTarget *this,
        __int64 a2)
{
  char v2; // di

  v2 = a2;
  Windows::UI::Composition::CompositionIslandTarget::~CompositionIslandTarget(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
