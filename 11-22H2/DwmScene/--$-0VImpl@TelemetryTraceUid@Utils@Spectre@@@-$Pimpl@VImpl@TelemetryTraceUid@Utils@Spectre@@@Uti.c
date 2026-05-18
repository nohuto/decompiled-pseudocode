/*
 * XREFs of ??$?0VImpl@TelemetryTraceUid@Utils@Spectre@@@?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAA@$$QEAVImpl@TelemetryTraceUid@12@@Z @ 0x180021620
 * Callers:
 *     ??0TelemetryTraceUid@Utils@Spectre@@AEAA@$$QEAVImpl@012@@Z @ 0x180021B5C (--0TelemetryTraceUid@Utils@Spectre@@AEAA@$$QEAVImpl@012@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>(
        _QWORD *a1,
        __int64 a2)
{
  _OWORD *v4; // rax

  v4 = operator new(0x38uLL);
  if ( v4 )
  {
    *v4 = *(_OWORD *)a2;
    v4[1] = *(_OWORD *)(a2 + 16);
    v4[2] = *(_OWORD *)(a2 + 32);
    *((_QWORD *)v4 + 6) = *(_QWORD *)(a2 + 48);
  }
  *a1 = v4;
  return a1;
}
