/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VInteractionRecord@SnapInteraction@@@std@@EEAAXXZ @ 0x18009D630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj2<SnapInteraction::InteractionRecord>::_Destroy(RTL_SRWLOCK *a1)
{
  SnapInteraction::InteractionRecord::~InteractionRecord(a1 + 2);
}
