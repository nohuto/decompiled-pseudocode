/*
 * XREFs of ?GetBufferSize@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140095390
 * Callers:
 *     <none>
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096990 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetBufferSize(
        CCrossProcessBaseClientEndpoint *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 392);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 392));
  if ( a2 )
  {
    if ( *((_DWORD *)this - 88) )
      *a2 = *((_DWORD *)this - 64) / *((_DWORD *)this - 80);
    else
      v5 = -2005139437;
  }
  else
  {
    v5 = -2147467261;
  }
  LeaveCriticalSection(v2);
  if ( v5 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetBufferSize", 0x48Au, v5);
  return (unsigned int)v5;
}
