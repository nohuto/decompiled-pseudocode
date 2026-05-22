/*
 * XREFs of _GazeDeviceCollection::Create_::_1_::dtor$0 @ 0x1800553F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeDeviceCollection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<GazeDeviceCollection>::~unique_ptr<GazeDeviceCollection>(a2 + 48);
}
