/*
 * XREFs of ?Thunk_Message_QuaternionPropertyChanged_Callback_181@?$IPropertyChanged_Receive@VProxyObject@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18010C530
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokePropertyChange_Callback@UQuaternion@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUQuaternion@Numerics@Foundation@3@@Z @ 0x1801466C4 (--$InvokePropertyChange_Callback@UQuaternion@Numerics@Foundation@Windows@@@ProxyObject@Compositi.c)
 */

__int64 __fastcall IPropertyChanged_Receive<Windows::UI::Composition::ProxyObject>::Thunk_Message_QuaternionPropertyChanged_Callback_181(
        struct Windows::UI::Composition::ProxyObject *a1)
{
  Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<Windows::Foundation::Numerics::Quaternion>(a1);
  return 0LL;
}
