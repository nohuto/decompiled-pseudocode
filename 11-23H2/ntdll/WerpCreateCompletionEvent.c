/*
 * XREFs of WerpCreateCompletionEvent @ 0x1800E8FF0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800E8110 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E8600 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A17B0 (ZwCreateEvent.c)
 */

__int64 __fastcall WerpCreateCompletionEvent(_QWORD *a1)
{
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  return ZwCreateEvent();
}
