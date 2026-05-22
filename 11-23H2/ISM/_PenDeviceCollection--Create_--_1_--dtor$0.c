/*
 * XREFs of _PenDeviceCollection::Create_::_1_::dtor$0 @ 0x18006E17E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenDeviceCollection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<PenDeviceCollection>::~unique_ptr<PenDeviceCollection>(a2 + 48);
}
