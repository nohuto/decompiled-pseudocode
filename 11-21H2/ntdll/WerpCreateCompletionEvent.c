/*
 * XREFs of WerpCreateCompletionEvent @ 0x1800E8E30
 * Callers:
 *     RtlReportExceptionEx @ 0x1800E7F70 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E8440 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A4970 (ZwCreateEvent.c)
 */

__int64 __fastcall WerpCreateCompletionEvent(_QWORD *a1)
{
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  return ZwCreateEvent();
}
