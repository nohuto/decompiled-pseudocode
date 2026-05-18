/*
 * XREFs of ?CreateTelemetryTraceLogger@Utils@Spectre@@YA?AV?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@std@@XZ @ 0x1800210A4
 * Callers:
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ @ 0x1800219A8 (--0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Utils::CreateTelemetryTraceLogger(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x190uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::TelemetryTraceLoggerWin>::`vftable';
    Spectre::Utils::TelemetryTraceLoggerWin::TelemetryTraceLoggerWin((Spectre::Utils::TelemetryTraceLoggerWin *)(v2 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
