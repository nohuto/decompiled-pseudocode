/*
 * XREFs of _lambda_78d65514523b09204dbef74fe9d00fb5_::__lambda_78d65514523b09204dbef74fe9d00fb5_ @ 0x1801AF45C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_78d65514523b09204dbef74fe9d00fb5___::_CTaskWrapper__lambda_78d65514523b09204dbef74fe9d00fb5___ @ 0x1801AF608 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_78d65514523b09204dbef74fe9d00fb5___--_CTask.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x180462F1C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ??1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AF2C (--1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_78d65514523b09204dbef74fe9d00fb5_::__lambda_78d65514523b09204dbef74fe9d00fb5_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::~OnInputAppRequestedResizeActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *)(a1 + 40));
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 24));
}
