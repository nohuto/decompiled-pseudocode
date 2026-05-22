/*
 * XREFs of ?Thunk_Message_BooleanPropertyChanged_Callback_153@?$IPropertyChanged_Receive@VProxyObject@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18010C470
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokePropertyChange_Callback@_N@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEB_N@Z @ 0x1801469C4 (--$InvokePropertyChange_Callback@_N@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPR.c)
 */

__int64 __fastcall IPropertyChanged_Receive<Windows::UI::Composition::ProxyObject>::Thunk_Message_BooleanPropertyChanged_Callback_153(
        struct Windows::UI::Composition::ProxyObject *a1)
{
  Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<bool>(a1);
  return 0LL;
}
