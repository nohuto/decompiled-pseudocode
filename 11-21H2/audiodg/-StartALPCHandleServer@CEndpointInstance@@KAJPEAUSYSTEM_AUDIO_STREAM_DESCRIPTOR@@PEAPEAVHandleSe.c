/*
 * XREFs of ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140028570
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x1400180DC (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14005CA88 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x140028714 (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     WPP_SF_dD @ 0x14005D278 (WPP_SF_dD.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CEndpointInstance::StartALPCHandleServer(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        struct HandleSendReceiveServer **a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r8d
  int v8; // ebx
  _QWORD *v9; // rcx
  unsigned __int16 *v11; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v12; // [rsp+50h] [rbp+18h]

  v11 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  if ( v4 )
  {
    v7 = *((_DWORD *)a1 + 3);
    v4[1] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    v4[6] = 0LL;
    *((_DWORD *)v4 + 14) = 0;
    *v4 = &HandleSendReceiveServer::`vftable';
    *((_DWORD *)v4 + 4) = v7;
    *((_BYTE *)v4 + 60) = 0;
    *a2 = (struct HandleSendReceiveServer *)v4;
    v8 = HandleSendReceiveServer::Initialize((HandleSendReceiveServer *)v4, &v11);
    if ( v8 >= 0 && v11 )
      *((_QWORD *)a1 + 18) = v11;
  }
  else
  {
    *a2 = 0LL;
    v8 = -2147024882;
  }
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v6, *((unsigned int *)a1 + 3), v8);
    v9 = WPP_GLOBAL_Control;
  }
  if ( v8 < 0 )
  {
    if ( v9 != &WPP_GLOBAL_Control && (*((_DWORD *)v9 + 7) & 0x20000) != 0 && *((_BYTE *)v9 + 25) >= 2u )
      WPP_SF_d(v9[2], 12LL, &WPP_d2de981987fa3fae783080b930bc1a00_Traceguids, (unsigned int)v8);
    AudDGTraceLoggingErrorHelper("CEndpointInstance::StartALPCHandleServer", 0x2B5u, v8);
  }
  return (unsigned int)v8;
}
