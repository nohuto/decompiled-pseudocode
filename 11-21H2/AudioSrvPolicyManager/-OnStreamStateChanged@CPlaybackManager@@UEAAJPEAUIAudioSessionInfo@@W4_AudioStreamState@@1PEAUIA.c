/*
 * XREFs of ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180026EB0
 * Callers:
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x18000A990 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000AE20 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStrea.c)
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000B470 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001A7C (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWrit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180027084 (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180027324 (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPlaybackManager::OnStreamStateChanged(
        CPlaybackManager *a1,
        __int64 a2,
        int a3,
        int a4,
        struct IAudioStreamInfo *a5)
{
  struct IAudioStreamInfo *v8; // rbx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  __int64 v21; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v23; // [rsp+A0h] [rbp+20h] BYREF

  if ( !*((_BYTE *)a1 + 16) )
  {
    v8 = a5;
    if ( a4 == 1 )
    {
      v9 = CPlaybackManager::QueueStreamStartedWorkItem(a1, a5);
      if ( v9 < 0 )
      {
        v10 = (unsigned int)(a4 + 33);
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    else if ( !a4 )
    {
      v9 = CPlaybackManager::QueueStreamStoppedWorkItem(a1, a5);
      if ( v9 < 0 )
      {
        v10 = 38LL;
        goto LABEL_5;
      }
    }
    v12 = *(_QWORD *)v8;
    v17 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v12 + 24))(v8, &v17) >= 0 )
    {
      v13 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
      if ( *v13 > 4u )
      {
        v18 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v8 + 80LL))(v8);
        LODWORD(v23) = a4;
        LODWORD(v16) = a3;
        v19 = (__int64)off_180049050[(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v8 + 48LL))(v8)];
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 72LL))(v17);
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (__int64)v13,
          (unsigned __int8 *)dword_180051136,
          v14,
          v15,
          (void **)&v21,
          (void **)&v20,
          (void **)&v19,
          (__int64)&v16,
          (__int64)&v23,
          (__int64)&v18);
      }
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return 0LL;
}
