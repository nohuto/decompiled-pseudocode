/*
 * XREFs of _CVirtualDesktopManager::GetViewsPerMonitor_::_1_::dtor$4 @ 0x180545F8B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::GetViewsPerMonitor_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 64));
}
