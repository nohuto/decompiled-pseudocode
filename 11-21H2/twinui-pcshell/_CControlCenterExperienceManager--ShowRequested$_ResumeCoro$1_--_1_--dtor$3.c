/*
 * XREFs of _CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$3 @ 0x180195C6A
 * Callers:
 *     <none>
 * Callees:
 *     ??1LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x180353538 (--1LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 */

void __fastcall CControlCenterExperienceManager::ShowRequested__ResumeCoro_1_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(a2 + 56) + 80LL;
  ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1::~LaunchControlCenterV1(*(ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1 **)(a2 + 96));
}
