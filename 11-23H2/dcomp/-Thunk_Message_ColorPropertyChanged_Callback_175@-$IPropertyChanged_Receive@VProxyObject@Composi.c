/*
 * XREFs of ?Thunk_Message_ColorPropertyChanged_Callback_175@?$IPropertyChanged_Receive@VProxyObject@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18010C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokePropertyChange_Callback@U_D3DCOLORVALUE@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBU_D3DCOLORVALUE@@@Z @ 0x1801468C4 (--$InvokePropertyChange_Callback@U_D3DCOLORVALUE@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DC.c)
 */

__int64 __fastcall IPropertyChanged_Receive<Windows::UI::Composition::ProxyObject>::Thunk_Message_ColorPropertyChanged_Callback_175(
        struct Windows::UI::Composition::ProxyObject *a1)
{
  Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<_D3DCOLORVALUE>(a1);
  return 0LL;
}
