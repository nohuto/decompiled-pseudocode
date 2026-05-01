/*
 * XREFs of _CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$12 @ 0x1801DED00
 * Callers:
 *     <none>
 * Callees:
 *     ??1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18041DE5C (--1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 */

void __fastcall CControlCenterExperienceManager::DismissRequested__ResumeCoro_1_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a2 + 40) + 176LL;
  ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1(*(ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 **)(a2 + 136));
}
