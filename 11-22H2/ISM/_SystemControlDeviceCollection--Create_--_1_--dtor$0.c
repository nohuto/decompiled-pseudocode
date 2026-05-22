/*
 * XREFs of _SystemControlDeviceCollection::Create_::_1_::dtor$0 @ 0x180080843
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemControlDeviceCollection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<SystemControlDeviceCollection>::~unique_ptr<SystemControlDeviceCollection>(a2 + 48);
}
