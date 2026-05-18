/*
 * XREFs of ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180022AA8
 * Callers:
 *     ?Export3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD11@Z @ 0x180022910 (-Export3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD11.c)
 *     ?Import3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD111@Z @ 0x180023050 (-Import3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD111.c)
 *     ?LoadModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x180023650 (-LoadModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD.c)
 *     ?SerializeModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x180023DF0 (-SerializeModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23.c)
 * Callees:
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x180021B9C (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x180021C10 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x1800244C4 (-ValidateImpl@TraceLoggingCorrelationVector@@CA-AW4CvVersion@1@PEBD_N@Z.c)
 */

struct TraceLoggingCorrelationVector *__fastcall TraceLoggingCorrelationVector::Extend(const char *a1, __int64 a2)
{
  char v3; // al
  unsigned __int64 v4; // r8
  __int64 v5; // rdi
  void *v6; // rax
  __int64 v7; // rax
  void *v8; // rax
  _QWORD *v9; // rbx
  struct TraceLoggingCorrelationVector *result; // rax

  LOBYTE(a2) = 1;
  v3 = TraceLoggingCorrelationVector::ValidateImpl(a1, a2);
  if ( !v3 )
    return 0LL;
  v4 = 129LL;
  if ( v3 == 1 )
    v4 = 64LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a1[v5] );
  if ( v5 + 3 > v4 )
    return 0LL;
  if ( v3 == 1 )
  {
    v8 = _aligned_malloc(0xA0uLL, 8uLL);
    if ( v8 )
    {
      v7 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v8);
      goto LABEL_13;
    }
  }
  else
  {
    if ( v3 != 2 )
      return 0LL;
    v6 = _aligned_malloc(0xA0uLL, 8uLL);
    if ( v6 )
    {
      v7 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v6);
LABEL_13:
      v9 = (_QWORD *)v7;
      goto LABEL_15;
    }
  }
  v9 = 0LL;
LABEL_15:
  if ( v9 )
  {
    _o_strncpy_s(v9, 129LL, a1, v5);
    *((_BYTE *)v9 + v5) = 46;
    v9[17] = v5 + 1;
    result = (struct TraceLoggingCorrelationVector *)v9;
    v9[18] = (v5 + 3) << 32;
    *((_BYTE *)v9 + v9[17]) = 0;
    return result;
  }
  return 0LL;
}
