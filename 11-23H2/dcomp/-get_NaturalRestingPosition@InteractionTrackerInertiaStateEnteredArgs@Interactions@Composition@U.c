/*
 * XREFs of ?get_NaturalRestingPosition@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x1800911D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::get_NaturalRestingPosition(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  *(_QWORD *)a2 = *((_QWORD *)this + 8);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 18);
  return 0LL;
}
