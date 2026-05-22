/*
 * XREFs of ?Thunk_Message_Matrix3x2PropertyChanged_Callback_187@?$IPropertyChanged_Receive@VProxyObject@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18010C4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokePropertyChange_Callback@UMatrix3x2@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUMatrix3x2@Numerics@Foundation@3@@Z @ 0x1801464C4 (--$InvokePropertyChange_Callback@UMatrix3x2@Numerics@Foundation@Windows@@@ProxyObject@Compositio.c)
 */

__int64 __fastcall IPropertyChanged_Receive<Windows::UI::Composition::ProxyObject>::Thunk_Message_Matrix3x2PropertyChanged_Callback_187(
        struct Windows::UI::Composition::ProxyObject *a1)
{
  Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<Windows::Foundation::Numerics::Matrix3x2>(a1);
  return 0LL;
}
