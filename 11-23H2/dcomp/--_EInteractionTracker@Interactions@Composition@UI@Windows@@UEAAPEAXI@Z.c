/*
 * XREFs of ??_EInteractionTracker@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180136750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InteractionTracker@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x1801363D8 (--1InteractionTracker@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Interactions::InteractionTracker *__fastcall Windows::UI::Composition::Interactions::InteractionTracker::`vector deleting destructor'(
        Windows::UI::Composition::Interactions::InteractionTracker *this,
        char a2)
{
  Windows::UI::Composition::Interactions::InteractionTracker::~InteractionTracker(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
