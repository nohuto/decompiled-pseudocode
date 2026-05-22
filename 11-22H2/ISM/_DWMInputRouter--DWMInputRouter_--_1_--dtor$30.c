/*
 * XREFs of _DWMInputRouter::DWMInputRouter_::_1_::dtor$30 @ 0x180083384
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::DWMInputRouter_::_1_::dtor_30(__int64 a1, __int64 a2)
{
  return std::list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::~list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>(*(_QWORD *)(a2 + 104) + 8LL);
}
