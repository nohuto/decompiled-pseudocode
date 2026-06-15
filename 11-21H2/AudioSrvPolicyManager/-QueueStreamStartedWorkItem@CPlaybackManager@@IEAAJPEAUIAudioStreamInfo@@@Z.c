/*
 * XREFs of ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180027084
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180026EB0 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x18001FB24 (-GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032708 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPlaybackManager::QueueStreamStartedWorkItem(CPlaybackManager *this, struct IAudioStreamInfo *a2)
{
  __int64 v3; // rax
  int v4; // eax
  CApplicationManager *v5; // rcx
  unsigned int v6; // edi
  int ProcessFromStreamInfo; // eax
  struct CProcess *v9; // rdi
  signed __int32 v10; // eax
  CPlaybackManager *v11; // rsi
  int v12; // eax
  struct CProcess *v13; // [rsp+20h] [rbp-29h]
  _QWORD v14[13]; // [rsp+38h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  CPlaybackManager *v16; // [rsp+B0h] [rbp+67h] BYREF
  struct CProcess *v17; // [rsp+B8h] [rbp+6Fh] BYREF
  struct IAudioStreamInfo *v18; // [rsp+C0h] [rbp+77h]

  v16 = this;
  v18 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  v3 = *(_QWORD *)a2;
  v16 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, CPlaybackManager **))(v3 + 32))(a2, &v16);
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
      (const char *)(unsigned int)v4);
    if ( v16 )
      (*(void (__fastcall **)(CPlaybackManager *))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_6:
    (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 16LL))(a2);
    return v6;
  }
  v17 = 0LL;
  ProcessFromStreamInfo = CApplicationManager::GetProcessFromStreamInfo(v5, a2, &v17);
  v6 = ProcessFromStreamInfo;
  if ( ProcessFromStreamInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
      (const char *)(unsigned int)ProcessFromStreamInfo);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v17);
    if ( v16 )
      (*(void (__fastcall **)(CPlaybackManager *))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_6;
  }
  v9 = v17;
  v13 = v17;
  if ( v17 )
  {
    do
      v10 = *((_DWORD *)v9 + 5);
    while ( v10 != 0x7FFFFFFF && v10 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 5, v10 + 1, v10) );
    v9 = v13;
  }
  v11 = v16;
  if ( v16 )
    (*(void (__fastcall **)(CPlaybackManager *))(*(_QWORD *)v16 + 8LL))(v16);
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  v14[0] = off_180048738;
  v14[1] = v9;
  v14[2] = v11;
  v14[3] = a2;
  v14[7] = v14;
  v12 = QueueGenericWorkItem(v14);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
      (const char *)(unsigned int)v12);
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v17);
    if ( v16 )
      (*(void (__fastcall **)(CPlaybackManager *))(*(_QWORD *)v16 + 16LL))(v16);
    (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 16LL))(a2);
    return v6;
  }
  if ( v17 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v17);
  if ( v16 )
    (*(void (__fastcall **)(CPlaybackManager *))(*(_QWORD *)v16 + 16LL))(v16);
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 16LL))(a2);
  return 0LL;
}
