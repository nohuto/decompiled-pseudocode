/*
 * XREFs of ??$?0$$V@?$Pimpl@VImpl@TelemetryTraceUid@Utils@Spectre@@@Utils@Spectre@@QEAA@XZ @ 0x1800215E0
 * Callers:
 *     ??0TelemetryTraceUid@Utils@Spectre@@AEAA@XZ @ 0x180021B7C (--0TelemetryTraceUid@Utils@Spectre@@AEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall Spectre::Utils::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>::Pimpl<Spectre::Utils::TelemetryTraceUid::Impl>(
        _QWORD *a1)
{
  _OWORD *v2; // rax

  v2 = operator new(0x38uLL);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
  }
  *a1 = v2;
  return a1;
}
