/*
 * XREFs of ?GetAttributes@TelemetryTraceLoggerWin@Utils@Spectre@@UEAA?BV?$shared_ptr@UTelemTraceLoggerAttributes@Utils@Spectre@@@std@@XZ @ 0x180022BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Spectre::Utils::TelemetryTraceLoggerWin::GetAttributes(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a2 = *(_QWORD *)(a1 + 32);
  a2[1] = *(_QWORD *)(a1 + 40);
  return a2;
}
