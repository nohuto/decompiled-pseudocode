/*
 * XREFs of ??1TelemetryTraceUid@Utils@Spectre@@QEAA@XZ @ 0x180021DD0
 * Callers:
 *     ??1TelemetryTraceLoggerWin@Utils@Spectre@@UEAA@XZ @ 0x180021D44 (--1TelemetryTraceLoggerWin@Utils@Spectre@@UEAA@XZ.c)
 *     _Spectre::Utils::TelemetryTraceLoggerWin::TelemetryTraceLoggerWin_::_1_::dtor$0 @ 0x1800E4A5C (_Spectre--Utils--TelemetryTraceLoggerWin--TelemetryTraceLoggerWin_--_1_--dtor$0.c)
 *     _Spectre::Utils::TelemetryTraceLoggerWin::TelemetryTraceLoggerWin_::_1_::dtor$1 @ 0x1800E4A72 (_Spectre--Utils--TelemetryTraceLoggerWin--TelemetryTraceLoggerWin_--_1_--dtor$1.c)
 *     _Spectre::Utils::TelemetryTraceLoggerWin::TelemetryTraceLoggerWin_::_1_::dtor$2 @ 0x1800E4A88 (_Spectre--Utils--TelemetryTraceLoggerWin--TelemetryTraceLoggerWin_--_1_--dtor$2.c)
 *     _dynamic_atexit_destructor_for__Spectre::Utils::TelemetryTraceUid::Zero__ @ 0x1800F2540 (_dynamic_atexit_destructor_for__Spectre--Utils--TelemetryTraceUid--Zero__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Utils::TelemetryTraceUid::~TelemetryTraceUid(Spectre::Utils::TelemetryTraceUid *this)
{
  Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::~Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>();
}
