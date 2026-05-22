/*
 * XREFs of ?get_PositionVelocityInPixelsPerSecond@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x180091210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::get_PositionVelocityInPixelsPerSecond(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  *(_QWORD *)a2 = *((_QWORD *)this + 6);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 14);
  return 0LL;
}
