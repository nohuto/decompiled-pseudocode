/*
 * XREFs of Endpoint_SM_SendStopEndpointCommand @ 0x1C000C6A8
 * Callers:
 *     ESM_StoppingEndpoint @ 0x1C000C680 (ESM_StoppingEndpoint.c)
 * Callees:
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

__int64 __fastcall Endpoint_SM_SendStopEndpointCommand(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int v4; // edx
  unsigned int v5; // edx
  char v6; // cl

  v1 = a1 + 160;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  memset((void *)(a1 + 160), 0, 0x60uLL);
  v4 = *(_DWORD *)(v1 + 36);
  *(_QWORD *)(v1 + 40) = Endpoint_OnCancelStopCompletion;
  v5 = v4 & 0xFFFF03FF | 0x3C00;
  *(_QWORD *)(v1 + 48) = a1;
  *(_DWORD *)(v1 + 36) = v5;
  *(_DWORD *)(v1 + 36) = v5 ^ (v5 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  v6 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_BYTE *)(v1 + 39) = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1 + 80),
      v5,
      13,
      116,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      v6,
      *(_BYTE *)(v1 + 38) & 0x1F);
  }
  return Command_SendCommand(v3, v1);
}
