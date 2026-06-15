/*
 * XREFs of ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000C2D0
 * Callers:
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x18001CFE0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18001D1B0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStrea.c)
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18001D680 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001C24 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWrit.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000E9E0 (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicyManagerTelemetryProvider@@P6AXXZ@Z @ 0x180011580 (-get@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicy.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180030A4C (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPlaybackManager::OnStreamStateChanged(
        CPlaybackManager *a1,
        __int64 a2,
        int a3,
        int a4,
        struct IAudioStreamInfo *a5)
{
  struct IAudioStreamInfo *v8; // rdi
  int v9; // eax
  unsigned int v10; // esi
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+20h] [rbp-78h]
  __int64 v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h] BYREF
  __int64 v22; // [rsp+60h] [rbp-38h] BYREF
  __int64 v23; // [rsp+68h] [rbp-30h] BYREF
  __int64 v24; // [rsp+70h] [rbp-28h] BYREF
  __int64 v25; // [rsp+78h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v27; // [rsp+A0h] [rbp+8h] BYREF

  if ( !*((_BYTE *)a1 + 16) )
  {
    v8 = a5;
    if ( a4 == 1 )
    {
      v9 = CPlaybackManager::QueueStreamStartedWorkItem(a1, a5);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x22,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
          (const char *)(unsigned int)v9,
          v19);
        return v10;
      }
    }
    else if ( !a4 )
    {
      v12 = CPlaybackManager::QueueStreamStoppedWorkItem(a1, a5);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
          (const char *)(unsigned int)v12,
          v19);
        return v13;
      }
    }
    v14 = *(_QWORD *)v8;
    v21 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v14 + 24))(v8, &v21) >= 0 )
    {
      v16 = *(_DWORD **)(wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::get(
                           v15,
                           _lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v16 > 4u )
      {
        v22 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v8 + 80LL))(v8);
        LODWORD(v27) = a4;
        LODWORD(v20) = a3;
        v23 = (__int64)off_180050500[(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v8 + 48LL))(v8)];
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 72LL))(v21);
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (__int64)v16,
          (unsigned __int8 *)dword_18005695A,
          v17,
          v18,
          (void **)&v25,
          (void **)&v24,
          (void **)&v23,
          (__int64)&v20,
          (__int64)&v27,
          (__int64)&v22);
      }
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return 0LL;
}
