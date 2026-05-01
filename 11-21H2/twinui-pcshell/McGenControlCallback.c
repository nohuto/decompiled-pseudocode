/*
 * XREFs of McGenControlCallback @ 0x1805E6CD0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

__int64 __fastcall McGenControlCallback(
        WMIDPREQUESTCODE RequestCode,
        void **RequestContext,
        ULONG *BufferSize,
        PVOID Buffer)
{
  int v5; // r14d
  int v6; // ecx
  TRACEHANDLE TraceLoggerHandle; // rsi
  ULONG TraceEnableFlags; // edi
  UCHAR TraceEnableLevel; // bp
  unsigned int v11; // r9d
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  bool v14; // r10
  _DWORD *v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // r8d

  *BufferSize = 0;
  v5 = 0;
  v6 = RequestCode - 4;
  if ( v6 )
  {
    if ( v6 != 1 )
      return 87LL;
    TraceLoggerHandle = 0LL;
    TraceEnableFlags = 0;
    TraceEnableLevel = 0;
    if ( *((_WORD *)RequestContext + 21) )
      memset_0(RequestContext[6], 0, 4LL * ((*((unsigned __int16 *)RequestContext + 21) - 1) / 32 + 1));
  }
  else
  {
    TraceLoggerHandle = GetTraceLoggerHandle(Buffer);
    TraceEnableLevel = GetTraceEnableLevel(TraceLoggerHandle);
    TraceEnableFlags = GetTraceEnableFlags(TraceLoggerHandle);
    v5 = 1;
    if ( !TraceEnableFlags )
      TraceEnableFlags = -1;
  }
  v11 = 0;
  RequestContext[1] = (void *)TraceLoggerHandle;
  *((_BYTE *)RequestContext + 40) = TraceEnableLevel;
  *((_DWORD *)RequestContext + 8) = TraceEnableFlags;
  for ( *((_DWORD *)RequestContext + 9) = v5; v11 < *((unsigned __int16 *)RequestContext + 21); ++v11 )
  {
    v12 = *((_BYTE *)RequestContext + 40);
    v14 = 0;
    if ( *((_BYTE *)RequestContext[8] + v11) <= v12 || !v12 )
    {
      v13 = *((_QWORD *)RequestContext[7] + v11);
      if ( !v13
        || (v13 & (unsigned __int64)RequestContext[2]) != 0
        && (void *)(v13 & (unsigned __int64)RequestContext[3]) == RequestContext[3] )
      {
        v14 = 1;
      }
    }
    v15 = RequestContext[6];
    v16 = (unsigned __int64)v11 >> 5;
    v17 = 1 << (v11 & 0x1F);
    if ( v14 )
      v15[v16] |= v17;
    else
      v15[v16] &= ~v17;
  }
  return 0LL;
}
