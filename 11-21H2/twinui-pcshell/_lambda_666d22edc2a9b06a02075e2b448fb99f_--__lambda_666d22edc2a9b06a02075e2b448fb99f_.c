/*
 * XREFs of _lambda_666d22edc2a9b06a02075e2b448fb99f_::__lambda_666d22edc2a9b06a02075e2b448fb99f_ @ 0x1801AF42C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___::_CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___ @ 0x1801AF5E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___--_CTask.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180463360 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AED4 (--1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_666d22edc2a9b06a02075e2b448fb99f_::__lambda_666d22edc2a9b06a02075e2b448fb99f_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::~OnApplicationFramePositionChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)(a1 + 3));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1);
}
