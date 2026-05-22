/*
 * XREFs of ?Thunk_Message_Vector4PropertyChanged_Callback_169@?$IPropertyChanged_Receive@VProxyObject@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18010C5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokePropertyChange_Callback@UVector4@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUVector4@Numerics@Foundation@3@@Z @ 0x1801467C4 (--$InvokePropertyChange_Callback@UVector4@Numerics@Foundation@Windows@@@ProxyObject@Composition@.c)
 */

__int64 __fastcall IPropertyChanged_Receive<Windows::UI::Composition::ProxyObject>::Thunk_Message_Vector4PropertyChanged_Callback_169(
        struct Windows::UI::Composition::ProxyObject *a1)
{
  Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<Windows::Foundation::Numerics::Vector4>(a1);
  return 0LL;
}
