/*
 * XREFs of _VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor$6 @ 0x1805599E7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 104));
}
