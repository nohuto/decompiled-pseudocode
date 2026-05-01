/*
 * XREFs of ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1802D506C
 * Callers:
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$2 @ 0x1805B6F96 (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$2.c)
 *     _CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor$4 @ 0x180662AC6 (_CShellSnapComponent--OnWindowArrangementEvent_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<tagRECT>::~vector<tagRECT>(__int64 *a1)
{
  return std::vector<tagRECT>::_Tidy(a1);
}
