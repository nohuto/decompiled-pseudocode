/*
 * XREFs of _BuildDeviceGraphForStream_::_1_::dtor$1 @ 0x18006FB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildDeviceGraphForStream_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CAppSubmixClient>::~unique_ptr<CAppSubmixClient>(a2 + 176);
}
