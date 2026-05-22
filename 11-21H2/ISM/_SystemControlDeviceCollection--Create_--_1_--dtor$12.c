/*
 * XREFs of _SystemControlDeviceCollection::Create_::_1_::dtor$12 @ 0x1800553C6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemControlDeviceCollection::Create_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return std::list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::~list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>(*(_QWORD *)(a2 + 40) + 8LL);
}
