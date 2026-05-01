/*
 * XREFs of _lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_ @ 0x18020664C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___::_CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___ @ 0x180206820 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___--_CTask.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802DC070 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18050C53C (--1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::~OnApplicationFramePositionChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)(a1 + 3));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
