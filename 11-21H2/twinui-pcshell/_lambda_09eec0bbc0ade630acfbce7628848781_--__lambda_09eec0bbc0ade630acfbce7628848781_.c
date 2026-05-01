/*
 * XREFs of _lambda_09eec0bbc0ade630acfbce7628848781_::__lambda_09eec0bbc0ade630acfbce7628848781_ @ 0x1801AF380
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___::_CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___ @ 0x1801AF518 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_09eec0bbc0ade630acfbce7628848781___--_CTask.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x180462D8C (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 * Callees:
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AF00 (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_09eec0bbc0ade630acfbce7628848781_::__lambda_09eec0bbc0ade630acfbce7628848781_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)(a1 + 24));
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 8));
}
