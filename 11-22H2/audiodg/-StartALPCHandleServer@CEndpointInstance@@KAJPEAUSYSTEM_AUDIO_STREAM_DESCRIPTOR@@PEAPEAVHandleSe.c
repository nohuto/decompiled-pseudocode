/*
 * XREFs of ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140023054
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140019128 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140060A84 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x14002310C (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CEndpointInstance::StartALPCHandleServer(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        struct HandleSendReceiveServer **a2)
{
  _QWORD *v4; // rax
  int v5; // r8d
  int v6; // ebx
  unsigned __int16 *v8; // [rsp+38h] [rbp+10h] BYREF
  _QWORD *v9; // [rsp+40h] [rbp+18h]

  v8 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( !v4 )
  {
    *a2 = 0LL;
    v6 = -2147024882;
    goto LABEL_7;
  }
  v5 = *((_DWORD *)a1 + 3);
  v4[1] = 0LL;
  v4[3] = 0LL;
  v4[4] = 0LL;
  v4[5] = 0LL;
  v4[6] = 0LL;
  *((_DWORD *)v4 + 14) = 0;
  *v4 = &HandleSendReceiveServer::`vftable';
  *((_DWORD *)v4 + 4) = v5;
  *((_BYTE *)v4 + 60) = 0;
  *a2 = (struct HandleSendReceiveServer *)v4;
  v6 = HandleSendReceiveServer::Initialize((HandleSendReceiveServer *)v4, &v8);
  if ( v6 < 0 )
  {
LABEL_7:
    AudDGTraceLoggingErrorHelper("CEndpointInstance::StartALPCHandleServer", 0x2B3u, v6);
    return (unsigned int)v6;
  }
  if ( v8 )
    *((_QWORD *)a1 + 18) = v8;
  return (unsigned int)v6;
}
