/*
 * XREFs of ??_GTelemetryTraceLoggerWin@Utils@Spectre@@UEAAPEAXI@Z @ 0x180021EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1TelemetryTraceLoggerWin@Utils@Spectre@@UEAA@XZ @ 0x180021D44 (--1TelemetryTraceLoggerWin@Utils@Spectre@@UEAA@XZ.c)
 */

void **__fastcall Spectre::Utils::TelemetryTraceLoggerWin::`scalar deleting destructor'(void **this, char a2)
{
  Spectre::Utils::TelemetryTraceLoggerWin::~TelemetryTraceLoggerWin(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
