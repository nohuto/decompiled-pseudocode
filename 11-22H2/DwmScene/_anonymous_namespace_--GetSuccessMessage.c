/*
 * XREFs of _anonymous_namespace_::GetSuccessMessage @ 0x180022C40
 * Callers:
 *     ?LoadModelSessionEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_NPEBDV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEBULoaderStats@TelemetryTraceLogger@23@AEBUAnimationStats@923@@Z @ 0x1800233E0 (-LoadModelSessionEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_NPEBD.c)
 *     ?SerializeModelSessionEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_NPEBDV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEBUAnimationStats@TelemetryTraceLogger@23@@Z @ 0x180023C50 (-SerializeModelSessionEnd@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@_.c)
 * Callees:
 *     <none>
 */

const char *__fastcall anonymous_namespace_::GetSuccessMessage(char a1)
{
  const char *result; // rax

  result = "success";
  if ( !a1 )
    return "fail";
  return result;
}
