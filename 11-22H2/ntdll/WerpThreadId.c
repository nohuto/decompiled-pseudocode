/*
 * XREFs of WerpThreadId @ 0x1800E7F58
 * Callers:
 *     RtlReportExceptionEx @ 0x1800E6DE0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E72D0 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009F290 (ZwQueryInformationThread.c)
 */

__int64 __fastcall WerpThreadId(void *a1)
{
  NTSTATUS InformationThread; // eax
  unsigned int v2; // ecx
  _BYTE ThreadInformation[24]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+48h] [rbp-20h]

  InformationThread = ZwQueryInformationThread(a1, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
  v2 = v5;
  if ( InformationThread < 0 )
    return 0;
  return v2;
}
