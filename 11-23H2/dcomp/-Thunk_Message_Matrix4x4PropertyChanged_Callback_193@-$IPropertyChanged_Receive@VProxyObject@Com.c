/*
 * XREFs of ?Thunk_Message_Matrix4x4PropertyChanged_Callback_193@?$IPropertyChanged_Receive@VProxyObject@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18010C500
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokePropertyChange_Callback@UMatrix4x4@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUMatrix4x4@Numerics@Foundation@3@@Z @ 0x1801465C4 (--$InvokePropertyChange_Callback@UMatrix4x4@Numerics@Foundation@Windows@@@ProxyObject@Compositio.c)
 */

__int64 __fastcall IPropertyChanged_Receive<Windows::UI::Composition::ProxyObject>::Thunk_Message_Matrix4x4PropertyChanged_Callback_193(
        struct Windows::UI::Composition::ProxyObject *a1)
{
  Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<Windows::Foundation::Numerics::Matrix4x4>(a1);
  return 0LL;
}
