/*
 * XREFs of ?get_HostRawElementProvider@CFallbackWindow@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1802EE380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CFallbackWindow::get_HostRawElementProvider(HWND *this, struct IRawElementProviderSimple **a2)
{
  return UiaHostProviderFromHwnd(*(this - 6), a2);
}
