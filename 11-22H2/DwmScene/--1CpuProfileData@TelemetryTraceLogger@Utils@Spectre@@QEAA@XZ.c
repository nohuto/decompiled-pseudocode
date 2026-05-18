/*
 * XREFs of ??1CpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ @ 0x180031C20
 * Callers:
 *     _Spectre::dtor$31::Engine::Engine_::_1_::dtor$31 @ 0x1800E5720 (_Spectre--dtor$31--Engine--Engine_--_1_--dtor$31.c)
 *     _Spectre::dtor$28::Engine::_Engine_::_1_::dtor$28 @ 0x1800E5A23 (_Spectre--dtor$28--Engine--_Engine_--_1_--dtor$28.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Utils::TelemetryTraceLogger::CpuProfileData::~CpuProfileData(
        Spectre::Utils::TelemetryTraceLogger::CpuProfileData *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 24);
}
