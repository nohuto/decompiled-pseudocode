/*
 * XREFs of WerpThreadId @ 0x1800E9288
 * Callers:
 *     RtlReportExceptionEx @ 0x1800E8110 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E8600 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 */

__int64 WerpThreadId()
{
  int InformationThread; // eax
  unsigned int v1; // ecx
  unsigned int v3; // [rsp+48h] [rbp-20h]

  InformationThread = ZwQueryInformationThread();
  v1 = v3;
  if ( InformationThread < 0 )
    return 0;
  return v1;
}
