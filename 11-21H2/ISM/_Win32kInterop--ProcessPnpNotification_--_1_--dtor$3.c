/*
 * XREFs of _Win32kInterop::ProcessPnpNotification_::_1_::dtor$3 @ 0x180058265
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::ProcessPnpNotification_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(a2 + 80);
}
