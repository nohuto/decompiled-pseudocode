/*
 * XREFs of ?Log@?$LogarithmicLogger@$1?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z$0?HHIDPPJO@@@QEAAXPEBDIJ@Z @ 0x14009E650
 * Callers:
 *     ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14009DB44 (-GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C964 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall LogarithmicLogger<&void SpatialCPTraceLoggingErrorHelper(char const *,unsigned int,long),-2005139358>::Log(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8
  int v6; // eax

  if ( (int)a4 >= 0 )
  {
    *a1 = 0;
    a1[1] = 1;
    return;
  }
  v5 = 2289827938LL;
  if ( (_DWORD)a4 != -2005139358 )
  {
    v5 = (unsigned int)a4;
LABEL_9:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex", 665, v5, a4);
    return;
  }
  v6 = *a1 + 1;
  *a1 = v6;
  if ( v6 == a1[1] )
  {
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex", 665, 2289827938LL, a4);
    a1[1] *= 2;
    return;
  }
  if ( !(_BYTE)v6 )
    goto LABEL_9;
}
