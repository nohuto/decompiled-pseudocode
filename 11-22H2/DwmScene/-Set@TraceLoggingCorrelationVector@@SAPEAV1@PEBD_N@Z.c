/*
 * XREFs of ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x180023F44
 * Callers:
 *     ?Export3DModelAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD1@Z @ 0x180022510 (-Export3DModelAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD1@.c)
 *     ?Export3DModelEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0_NPEBDH22_K33_J44IIIM2@Z @ 0x180022670 (-Export3DModelEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0_NPEBDH2.c)
 *     ?Export3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD11@Z @ 0x180022910 (-Export3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD11.c)
 *     ?Import3DModelAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBDI1@Z @ 0x180022C60 (-Import3DModelAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBDI1@.c)
 *     ?Import3DModelEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_NPEBDH22_K33_J44IIIMI2@Z @ 0x180022DC0 (-Import3DModelEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_NPEBDH22.c)
 *     ?Import3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD111@Z @ 0x180023050 (-Import3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD111.c)
 *     ?LoadModelSessionAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x1800232B0 (-LoadModelSessionAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD.c)
 *     ?LoadModelSessionEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_NPEBDV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEBULoaderStats@TelemetryTraceLogger@23@AEBUAnimationStats@923@@Z @ 0x1800233E0 (-LoadModelSessionEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_NPEBD.c)
 *     ?LoadModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x180023650 (-LoadModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD.c)
 *     ?PerformanceUpdateSummary@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXMMMMIII_J00000PEB_W_KII2AEBUCpuProfileData@TelemetryTraceLogger@23@AEBUGpuProfileData@523@@Z @ 0x1800237B0 (-PerformanceUpdateSummary@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXMMMMIII_J00000PEB_W_KII2AE.c)
 *     ?SerializeModelSessionAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x180023B20 (-SerializeModelSessionAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23.c)
 *     ?SerializeModelSessionEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_NPEBDV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEBUAnimationStats@TelemetryTraceLogger@23@@Z @ 0x180023C50 (-SerializeModelSessionEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_.c)
 *     ?SerializeModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x180023DF0 (-SerializeModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23.c)
 * Callees:
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x180021B9C (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x180021C10 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x1800244C4 (-ValidateImpl@TraceLoggingCorrelationVector@@CA-AW4CvVersion@1@PEBD_N@Z.c)
 */

struct TraceLoggingCorrelationVector *__fastcall TraceLoggingCorrelationVector::Set(const char *Str, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  char *v7; // rax
  char *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rbp
  void *v11; // rax
  __int64 v12; // rax
  void *v13; // rax
  struct TraceLoggingCorrelationVector *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  struct TraceLoggingCorrelationVector *result; // rax

  LOBYTE(a2) = 1;
  v3 = TraceLoggingCorrelationVector::ValidateImpl(Str, a2);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = 129LL;
  if ( v3 == 1 )
    v5 = 64LL;
  v6 = -1LL;
  do
    ++v6;
  while ( Str[v6] );
  if ( v6 >= v5 )
    return 0LL;
  v7 = strrchr(Str, 46);
  if ( !v7 )
    return 0LL;
  v8 = v7 + 1;
  _o__set_errno(0LL);
  v9 = strtol(v8, 0LL, 10);
  v10 = v9;
  if ( !v9 && *v8 != 48 && v8[1] )
    return 0LL;
  if ( *(_DWORD *)_o__errno() == 34 )
    return 0LL;
  if ( v4 == 1 )
  {
    v13 = _aligned_malloc(0xA0uLL, 8uLL);
    if ( v13 )
    {
      v12 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v13);
      goto LABEL_18;
    }
  }
  else
  {
    if ( v4 != 2 )
      return 0LL;
    v11 = _aligned_malloc(0xA0uLL, 8uLL);
    if ( v11 )
    {
      v12 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v11);
LABEL_18:
      v14 = (struct TraceLoggingCorrelationVector *)v12;
      goto LABEL_20;
    }
  }
  v14 = 0LL;
LABEL_20:
  if ( v14 )
  {
    v15 = v8 - Str;
    _o_strncpy_s(v14, 129LL, Str, v15);
    *((_QWORD *)v14 + 17) = v15;
    v16 = *((_QWORD *)v14 + 17);
    result = v14;
    *((_QWORD *)v14 + 18) = v10 | ((v15 + 2) << 32);
    *((_BYTE *)v14 + v16) = 0;
    return result;
  }
  return 0LL;
}
