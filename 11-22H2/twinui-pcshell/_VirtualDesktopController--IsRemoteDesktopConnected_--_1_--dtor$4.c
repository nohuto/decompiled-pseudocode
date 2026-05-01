/*
 * XREFs of _VirtualDesktopController::IsRemoteDesktopConnected_::_1_::dtor$4 @ 0x180542214
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopController::IsRemoteDesktopConnected_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((__int64 *)(a2 + 48));
}
