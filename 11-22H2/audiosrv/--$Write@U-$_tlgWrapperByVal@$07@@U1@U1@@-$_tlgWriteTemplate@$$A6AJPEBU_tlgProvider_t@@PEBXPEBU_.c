/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180016538
 * Callers:
 *     ?RefreshAposEffectStates@CSharedStreamGroupProxy@@AEAAXXZ @ 0x18000B960 (-RefreshAposEffectStates@CSharedStreamGroupProxy@@AEAAXXZ.c)
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180016090 (-OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180016400 (-DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800186B0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@@Z @ 0x1800438F0 (-ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@@Z.c)
 *     ?OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180044860 (-OnConnectedToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x180045CC0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800D2B50 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800ED584 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 *     ?ConnectToRightSubmix@CBridgeStreamInstanceProxy@@UEAAJPEAUISubmixProxy@@@Z @ 0x180105E60 (-ConnectToRightSubmix@CBridgeStreamInstanceProxy@@UEAAJPEAUISubmixProxy@@@Z.c)
 *     ?DisconnectFromRightSubmix@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x180106F60 (-DisconnectFromRightSubmix@CBridgeStreamInstanceProxy@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // eax
  unsigned __int16 *v8; // rdx
  __int64 v9; // rax
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  _DWORD v13[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v14; // [rsp+40h] [rbp-31h]
  unsigned __int16 *v15; // [rsp+50h] [rbp-21h] BYREF
  int v16; // [rsp+58h] [rbp-19h]
  int v17; // [rsp+5Ch] [rbp-15h]
  unsigned __int16 *v18; // [rsp+60h] [rbp-11h]
  int v19; // [rsp+68h] [rbp-9h]
  int v20; // [rsp+6Ch] [rbp-5h]
  __int64 v21; // [rsp+70h] [rbp-1h]
  __int64 v22; // [rsp+78h] [rbp+7h]
  __int64 v23; // [rsp+80h] [rbp+Fh]
  __int64 v24; // [rsp+88h] [rbp+17h]
  __int64 v25; // [rsp+90h] [rbp+1Fh]
  __int64 v26; // [rsp+98h] [rbp+27h]

  v25 = a7;
  v23 = a6;
  v21 = a5;
  v13[0] = *a2 << 24;
  v7 = *(unsigned __int16 *)(a2 + 1);
  v8 = (unsigned __int16 *)(a2 + 3);
  v13[1] = v7;
  v26 = 8LL;
  v24 = 8LL;
  v9 = *(_QWORD *)v8;
  v8 += 4;
  v14 = v9;
  v10 = *(unsigned __int16 **)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 32);
  v15 = v10;
  v22 = 8LL;
  v16 = *v10;
  v19 = *v8;
  v18 = v8;
  v17 = 2;
  v20 = 1;
  return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
           v11,
           v13,
           0LL,
           0LL,
           5,
           &v15,
           (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata);
}
