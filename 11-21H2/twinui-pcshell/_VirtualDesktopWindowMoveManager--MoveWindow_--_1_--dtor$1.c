/*
 * XREFs of _VirtualDesktopWindowMoveManager::MoveWindow_::_1_::dtor$1 @ 0x180559FBA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopWindowMoveManager::MoveWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 40));
}
