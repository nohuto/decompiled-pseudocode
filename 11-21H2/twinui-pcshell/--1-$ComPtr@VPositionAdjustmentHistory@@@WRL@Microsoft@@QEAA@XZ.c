/*
 * XREFs of ??1?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@QEAA@XZ @ 0x1804997B8
 * Callers:
 *     _CMultitaskingViewHotKeyHandler_CreateInstance_::_1_::dtor$0 @ 0x18021E30D (_CMultitaskingViewHotKeyHandler_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CMultitaskingViewHotKeyHandler_CMultitaskingViewHotKeyHandler_IImmersiveWindowMessageService___&_IImmersiveMonitorManager___&_IApplicationTargetingTracker___&_IMultitaskingViewTaskScheduler___&_IApplicationViewCollection___&__::_1_::dtor$2 @ 0x18021E31F (_Microsoft--WRL--Details--MakeAndInitialize_CMultitaskingViewHotKeyHandler_CMultitaskingViewHotK.c)
 *     _PositionAdjustmentHistory::AddPositionAdjustment_::_1_::dtor$2 @ 0x18050E74F (_PositionAdjustmentHistory--AddPositionAdjustment_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::~ComPtr<PositionAdjustmentHistory>(
        volatile int **a1)
{
  return Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(a1);
}
