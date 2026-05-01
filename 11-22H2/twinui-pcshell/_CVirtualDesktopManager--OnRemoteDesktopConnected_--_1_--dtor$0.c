/*
 * XREFs of _CVirtualDesktopManager::OnRemoteDesktopConnected_::_1_::dtor$0 @ 0x1806028DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::OnRemoteDesktopConnected_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((__int64 *)(a2 + 32));
}
