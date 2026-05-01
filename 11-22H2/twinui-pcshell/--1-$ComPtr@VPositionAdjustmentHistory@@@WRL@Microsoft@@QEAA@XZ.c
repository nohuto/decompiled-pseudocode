/*
 * XREFs of ??1?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@QEAA@XZ @ 0x180552DE4
 * Callers:
 *     _CMultitaskingViewHotKeyHandler_CreateInstance_::_1_::dtor$0 @ 0x1802B3802 (_CMultitaskingViewHotKeyHandler_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CMultitaskingViewHotKeyHandler_CMultitaskingViewHotKeyHandler_IImmersiveWindowMessageService___&_IImmersiveMonitorManager___&_IMultitaskingViewTaskScheduler___&_IApplicationViewCollection___&__::_1_::dtor$2 @ 0x1802B3826 (_Microsoft--WRL--Details--MakeAndInitialize_CMultitaskingViewHotKeyHandler_CMultitaskingViewHotK.c)
 *     _PositionAdjustmentHistory::AddPositionAdjustment_::_1_::dtor$2 @ 0x1805C6BFD (_PositionAdjustmentHistory--AddPositionAdjustment_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::~ComPtr<PositionAdjustmentHistory>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(a1);
}
