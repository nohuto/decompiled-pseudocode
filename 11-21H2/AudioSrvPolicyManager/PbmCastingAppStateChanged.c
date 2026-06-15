/*
 * XREFs of PbmCastingAppStateChanged @ 0x1800286E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001108 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

__int64 __fastcall PbmCastingAppStateChanged(void *a1, int a2)
{
  int Process; // ebx
  __int64 v5; // rdx
  struct CProcess *v6; // rdx
  signed __int32 v7; // eax
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-1h] BYREF
  int v13; // [rsp+58h] [rbp+Fh]
  _QWORD *v14; // [rsp+80h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  __int64 v16; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+C0h] [rbp+77h] BYREF
  struct CProcess *v18; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( a2 > 1 )
  {
    Process = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FB,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)Process;
  }
  if ( g_ApplicationManager )
  {
    v18 = 0LL;
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v18);
    if ( Process < 0 )
    {
      v5 = 512LL;
      goto LABEL_7;
    }
    v6 = v18;
    if ( v18 )
    {
      do
        v7 = *((_DWORD *)v6 + 5);
      while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)v6 + 5, v7 + 1, v7) );
    }
    v12[1] = v6;
    v12[0] = off_1800487C8;
    v13 = a2;
    v14 = v12;
    Process = QueueGenericWorkItem(v12);
    if ( Process < 0 )
    {
      v5 = 517LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
        (const char *)(unsigned int)Process);
      if ( v18 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v18);
      return (unsigned int)Process;
    }
    v8 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *v8 > 4u )
    {
      LODWORD(v16) = a2 == 0;
      LODWORD(v17) = *((_DWORD *)v18 + 40);
      v11 = *((_QWORD *)v18 + 22);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v8,
        (int)&dword_180051193,
        v9,
        v10,
        (void **)&v11,
        (__int64)&v17,
        (__int64)&v16);
    }
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v18);
  }
  return 0LL;
}
