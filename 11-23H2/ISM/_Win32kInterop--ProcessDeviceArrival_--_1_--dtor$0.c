/*
 * XREFs of _Win32kInterop::ProcessDeviceArrival_::_1_::dtor$0 @ 0x18006EA73
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::ProcessDeviceArrival_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(a2 + 48);
}
