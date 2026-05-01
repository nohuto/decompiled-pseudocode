/*
 * XREFs of ?GetRuntimeClassName@ScreenClippingBrokerImpl@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1805F7EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ScreenClippingBrokerImpl::GetRuntimeClassName(ScreenClippingBrokerImpl *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ScreenClippingBrokerImpl", 0x18u, a2);
}
