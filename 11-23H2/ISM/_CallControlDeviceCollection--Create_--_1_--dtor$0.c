/*
 * XREFs of _CallControlDeviceCollection::Create_::_1_::dtor$0 @ 0x18006E1A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CallControlDeviceCollection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CallControlDeviceCollection>::~unique_ptr<CallControlDeviceCollection>(a2 + 48);
}
