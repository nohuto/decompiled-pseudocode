/*
 * XREFs of WerpWaitForCrashReporting @ 0x1800E92C0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800E8110 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800E8600 (RtlReportExceptionHelper.c)
 * Callees:
 *     WerpProcessId @ 0x18005198C (WerpProcessId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtWaitForMultipleObjects @ 0x1800A1A00 (NtWaitForMultipleObjects.c)
 */

__int64 __fastcall WerpWaitForCrashReporting(void *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v7; // esi
  int UniqueProcess; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  _QWORD v13[3]; // [rsp+30h] [rbp-48h]

  v3 = 0;
  v7 = 0;
  if ( a1 )
  {
    UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
    if ( (unsigned int)WerpProcessId(a1) != UniqueProcess )
    {
      v13[0] = a1;
      v7 = 1;
    }
  }
  if ( a2 )
  {
    v9 = v7++;
    v13[v9] = a2;
  }
  if ( a3 )
  {
    v10 = v7++;
    v13[v10] = a3;
  }
  if ( v7 )
  {
    if ( v7 <= 3 )
    {
      do
      {
        v11 = NtWaitForMultipleObjects();
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( v11 < v7 )
          return v3;
      }
      while ( v11 != 258 );
      return (unsigned int)-1073741823;
    }
    else
    {
      return (unsigned int)-1073741684;
    }
  }
  return v3;
}
