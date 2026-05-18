/*
 * XREFs of ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x180024678
 * Callers:
 *     ??0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ @ 0x1800219A8 (--0TelemetryTraceLoggerWin@Utils@Spectre@@QEAA@XZ.c)
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
 *     ?SetCorrelationVectorGUID@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXU_GUID@@@Z @ 0x1800240E0 (-SetCorrelationVectorGUID@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::unique_ptr<TraceLoggingCorrelationVector>::reset(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    _aligned_free(v2);
}
