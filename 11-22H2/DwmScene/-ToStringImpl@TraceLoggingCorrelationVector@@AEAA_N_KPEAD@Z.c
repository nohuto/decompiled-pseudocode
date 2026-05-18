/*
 * XREFs of ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800241A0
 * Callers:
 *     ??0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ @ 0x1800219A8 (--0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ.c)
 *     ??0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z @ 0x180021C84 (--0_TlgCVGetter@@QEAA@PEAVTraceLoggingCorrelationVector@@@Z.c)
 *     ?Export3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD11@Z @ 0x180022910 (-Export3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD11.c)
 *     ?Import3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD111@Z @ 0x180023050 (-Import3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD111.c)
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x1800231E0 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 *     ?LoadModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x180023650 (-LoadModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD.c)
 *     ?SerializeModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x180023DF0 (-SerializeModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23.c)
 *     ?SetCorrelationVectorGUID@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXU_GUID@@@Z @ 0x1800240E0 (-SetCorrelationVectorGUID@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXU_GUID@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18000BF9A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     sprintf_s @ 0x18000C258 (sprintf_s.c)
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 */

bool __fastcall TraceLoggingCorrelationVector::ToStringImpl(TraceLoggingCorrelationVector *this, __int64 a2, char *a3)
{
  int v4; // esi
  size_t v6; // rax

  v4 = a2;
  if ( a3 )
  {
    *a3 = 0;
    v6 = *((_QWORD *)this + 19);
    if ( !WORD2(a2) )
      return sprintf_s(&a3[*((_QWORD *)this + 17)], *((_QWORD *)this + 19) - *((_QWORD *)this + 17), "%u", v4) != -1;
    if ( v6 >= WORD2(a2) )
    {
      memcpy_0(a3, this, WORD2(a2));
      return sprintf_s(&a3[*((_QWORD *)this + 17)], *((_QWORD *)this + 19) - *((_QWORD *)this + 17), "%u", v4) != -1;
    }
    memset_0(a3, 0, v6);
    *(_DWORD *)_o__errno() = 34;
    invalid_parameter_noinfo();
  }
  return 0;
}
