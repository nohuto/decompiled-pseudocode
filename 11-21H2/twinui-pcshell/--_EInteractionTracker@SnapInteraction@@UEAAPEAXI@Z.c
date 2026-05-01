/*
 * XREFs of ??_EInteractionTracker@SnapInteraction@@UEAAPEAXI@Z @ 0x180592344
 * Callers:
 *     ??_EInteractionTracker@SnapInteraction@@WBI@EAAPEAXI@Z @ 0x18020EC70 (--_EInteractionTracker@SnapInteraction@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1InteractionTracker@SnapInteraction@@UEAA@XZ @ 0x180591CA0 (--1InteractionTracker@SnapInteraction@@UEAA@XZ.c)
 */

SnapInteraction::InteractionTracker *__fastcall SnapInteraction::InteractionTracker::`vector deleting destructor'(
        SnapInteraction::InteractionTracker *this,
        char a2)
{
  SnapInteraction::InteractionTracker::~InteractionTracker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
