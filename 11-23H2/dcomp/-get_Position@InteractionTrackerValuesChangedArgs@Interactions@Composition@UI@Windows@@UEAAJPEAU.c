/*
 * XREFs of ?get_Position@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z @ 0x180091110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::get_Position(
        Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *this,
        struct Windows::Foundation::Numerics::Vector3 *a2)
{
  *(_QWORD *)a2 = *((_QWORD *)this + 4);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 10);
  return 0LL;
}
