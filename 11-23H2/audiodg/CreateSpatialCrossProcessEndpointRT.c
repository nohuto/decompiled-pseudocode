/*
 * XREFs of CreateSpatialCrossProcessEndpointRT @ 0x14009AB34
 * Callers:
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140060A34 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     privateCreateSpatialCrossProcessEndpoint @ 0x14009A9E4 (privateCreateSpatialCrossProcessEndpoint.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14009C968 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 */

__int64 __fastcall CreateSpatialCrossProcessEndpointRT(struct _GUID *a1, __int128 *a2, _QWORD *a3)
{
  struct _GUID v6; // xmm1
  __int64 v7; // r8
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  struct _GUID v10; // [rsp+40h] [rbp-18h] BYREF

  SpatialCPTraceLoggingTracer("CreateSpatialCrossProcessEndpointRT", 0x80u);
  v6 = *a1;
  v9 = *a2;
  v10 = v6;
  return privateCreateSpatialCrossProcessEndpoint(&v10, &v9, v7, a3);
}
