/*
 * XREFs of ?Thunk_Message_Vector3PropertyChanged_Callback_163@?$IVisualEvent_Receive@VVisual@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1800802D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokePropertyChange_Callback@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUVector3@Numerics@Foundation@3@@Z @ 0x18004DD40 (--$InvokePropertyChange_Callback@UVector3@Numerics@Foundation@Windows@@@ProxyObject@Composition@.c)
 */

__int64 __fastcall IVisualEvent_Receive<Windows::UI::Composition::Visual>::Thunk_Message_Vector3PropertyChanged_Callback_163(
        __int64 a1,
        __int64 a2)
{
  Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<Windows::Foundation::Numerics::Vector3>(
    a1,
    a2,
    **(_DWORD **)a2,
    *(_QWORD *)(a2 + 8));
  return 0LL;
}
