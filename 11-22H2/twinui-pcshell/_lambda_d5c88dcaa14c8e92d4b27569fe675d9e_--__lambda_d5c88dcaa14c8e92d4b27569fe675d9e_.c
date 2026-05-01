/*
 * XREFs of _lambda_d5c88dcaa14c8e92d4b27569fe675d9e_::__lambda_d5c88dcaa14c8e92d4b27569fe675d9e_ @ 0x1802067C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5c88dcaa14c8e92d4b27569fe675d9e___::_CTaskWrapper__lambda_d5c88dcaa14c8e92d4b27569fe675d9e___ @ 0x180206988 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d5c88dcaa14c8e92d4b27569fe675d9e___--_CTask.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18020AD94 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 * Callees:
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DA9B2 (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_d5c88dcaa14c8e92d4b27569fe675d9e_::__lambda_d5c88dcaa14c8e92d4b27569fe675d9e_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)(a1 + 24));
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 8));
}
