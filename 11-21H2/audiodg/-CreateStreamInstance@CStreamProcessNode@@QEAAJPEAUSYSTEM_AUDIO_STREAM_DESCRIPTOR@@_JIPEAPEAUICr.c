/*
 * XREFs of ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002A274
 * Callers:
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002A16C (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProce.c)
 * Callees:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x1400180DC (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14005CA88 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CStreamProcessNode::CreateStreamInstance(
        CStreamProcessNode *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        __int64 a3,
        unsigned int a4,
        struct ICrossProcessMemory **a5,
        struct ICrossProcessEvent **a6,
        struct SYSTEM_AUDIO_STREAM *a7)
{
  int v8; // eax
  unsigned int v9; // ebx
  struct CEndpointInstance *v11; // [rsp+58h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a2 + 34) & 0x800000) != 0 )
    v8 = CEndpointInstance::CreateSpatialStreamEndpointInstance(a2, a3, a4, a7, a5, a6, &v11);
  else
    v8 = CEndpointInstance::CreateStreamEndpointInstance(a2, a3, a4, a7, a5, a6, &v11);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17LL,
        &WPP_459a70a20f2b395031111be1427f992c_Traceguids,
        (unsigned int)v8);
    }
    AudDGTraceLoggingErrorHelper("CStreamProcessNode::CreateStreamInstance", 0x1E7u, v9);
  }
  else
  {
    *((_QWORD *)this + 4) = v11;
  }
  return v9;
}
