/*
 * XREFs of ?ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ @ 0x140094A80
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140090784 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x140091350 (-CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::ProcessComplete(
        CSpatialCrossProcessClientOutputEndpoint *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( *((_BYTE *)this + 80) )
  {
    if ( *((_BYTE *)this + 1464) )
    {
      CSpatialCrossProcessBaseEndpoint::CommitWrite(
        (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
        *((_DWORD *)this + 362),
        *((_DWORD *)this + 333),
        a4);
      *((_BYTE *)this + 1464) = 0;
      *((_DWORD *)this + 365) = 0;
    }
  }
  else
  {
    v4 = -2005139437;
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::ProcessComplete", 226, 2289827859LL, a4);
  }
  return v4;
}
