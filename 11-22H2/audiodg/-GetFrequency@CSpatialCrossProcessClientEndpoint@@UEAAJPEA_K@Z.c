/*
 * XREFs of ?GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z @ 0x14009F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C964 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::GetFrequency(
        CSpatialCrossProcessClientEndpoint *this,
        unsigned __int64 *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 1296);
  v3 = 0;
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !a2 )
  {
    v3 = -2147467261;
LABEL_5:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientEndpoint::GetFrequency", 243, v3, v5);
    goto LABEL_7;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this - 308, 1, 1) )
  {
    v3 = -2005139437;
    goto LABEL_5;
  }
  *a2 = *((unsigned int *)this - 255);
LABEL_7:
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
