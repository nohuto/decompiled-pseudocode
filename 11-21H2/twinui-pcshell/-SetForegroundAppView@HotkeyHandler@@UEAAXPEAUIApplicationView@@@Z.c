/*
 * XREFs of ?SetForegroundAppView@HotkeyHandler@@UEAAXPEAUIApplicationView@@@Z @ 0x1805AA5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HotkeyHandler::SetForegroundAppView(HotkeyHandler *this, struct IApplicationView *a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 5, (__int64)a2);
}
