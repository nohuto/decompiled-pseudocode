/*
 * XREFs of ?Thunk_Message_ScalarPropertyChanged_Callback_149@?$IPropertyChanged_Receive@VProxyObject@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18010C560
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokePropertyChange_Callback@M@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBM@Z @ 0x1801463C4 (--$InvokePropertyChange_Callback@M@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRE.c)
 */

__int64 __fastcall IPropertyChanged_Receive<Windows::UI::Composition::ProxyObject>::Thunk_Message_ScalarPropertyChanged_Callback_149(
        struct Windows::UI::Composition::ProxyObject *a1)
{
  Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<float>(a1);
  return 0LL;
}
