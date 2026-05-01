/*
 * XREFs of ??1?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x18054C404
 * Callers:
 *     _MultitaskingViewGestureHandler_CreateInstance_::_1_::dtor$0 @ 0x1802BCCBE (_MultitaskingViewGestureHandler_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::~ComPtr<MultitaskingViewGestureHandler>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(a1);
}
