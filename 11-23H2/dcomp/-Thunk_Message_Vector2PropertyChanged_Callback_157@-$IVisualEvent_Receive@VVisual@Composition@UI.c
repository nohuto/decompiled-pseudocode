/*
 * XREFs of ?Thunk_Message_Vector2PropertyChanged_Callback_157@?$IVisualEvent_Receive@VVisual@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180088BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokePropertyChange_Callback@UVector2@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUVector2@Numerics@Foundation@3@@Z @ 0x18002D428 (--$InvokePropertyChange_Callback@UVector2@Numerics@Foundation@Windows@@@ProxyObject@Composition@.c)
 */

__int64 __fastcall IVisualEvent_Receive<Windows::UI::Composition::Visual>::Thunk_Message_Vector2PropertyChanged_Callback_157(
        Windows::UI::Composition::CompositorCommon **a1,
        __int64 a2)
{
  Windows::UI::Composition::ProxyObject::InvokePropertyChange_Callback<Windows::Foundation::Numerics::Vector2>(
    a1,
    a2,
    **(_DWORD **)a2,
    *(_QWORD *)(a2 + 8));
  return 0LL;
}
