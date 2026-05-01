/*
 * XREFs of ?SetCallback@XamlSnapAssistViewHost@@UEAAJPEAUISnapAssistCallback@@@Z @ 0x1806030C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UISnapAssistCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUISnapAssistCallback@@@Z @ 0x1804B3E7C (--4-$ComPtr@UISnapAssistCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUISnapAssistCallback@@@Z.c)
 */

__int64 __fastcall XamlSnapAssistViewHost::SetCallback(XamlSnapAssistViewHost *this, struct ISnapAssistCallback *a2)
{
  Microsoft::WRL::ComPtr<ISnapAssistCallback>::operator=((__int64 *)this + 29, (__int64)a2);
  return 0LL;
}
