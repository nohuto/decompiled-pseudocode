/*
 * XREFs of ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x18001CFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001350 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000C2D0 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E250 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F560 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800111BC (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DB0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x18001B4C0 (--$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessi.c)
 *     ??$MakeAndInitialize@VVirtualAudioStreamInfo@@UIAudioStreamInfo@@PEAVVirtualAudioSessionInfo@@AEAKW4SYSTEM_AUDIO_STREAM_TYPE@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioStreamInfo@@$$QEAPEAVVirtualAudioSessionInfo@@AEAK$$QEAW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18001B614 (--$MakeAndInitialize@VVirtualAudioStreamInfo@@UIAudioStreamInfo@@PEAVVirtualAudioSessionInfo@@AE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::NotifyVirtualStreamStateChange(
        __int64 a1,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rbx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  int v15; // r14d
  int v16; // edi
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rbx
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v24[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v25; // [rsp+48h] [rbp-20h] BYREF
  __int64 v26[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  __int64 v28; // [rsp+A0h] [rbp+38h] BYREF
  struct IAudioProcess *v29; // [rsp+A8h] [rbp+40h] BYREF
  const unsigned __int16 *v30; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+B8h] [rbp+50h] BYREF

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v7 = a4;
  v10 = AudioSrvPolicyManagerTelemetryProvider::Provider(a1);
  v14 = a7;
  v15 = a6;
  if ( *(_DWORD *)v10 > 4u )
  {
    LODWORD(v28) = a6;
    v25 = (__int64)off_180050500[v7];
    v26[0] = (__int64)a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      (unsigned __int8 *)dword_180056398,
      v12,
      v13,
      (void **)v26,
      (void **)&v25,
      (__int64)&v28,
      (__int64)&a7);
  }
  CApplicationManager::Lock(v11, v26);
  LODWORD(v28) = v14 == 1;
  LOBYTE(a7) = (_DWORD)v7 == 3;
  v16 = a5;
  LOBYTE(a5) = a5 == 1;
  v25 = 0LL;
  v17 = Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioSessionInfo,VirtualAudioSessionInfo,IAudioProcess * &,unsigned short const * &,bool,bool,enum _AudioSessionState>(
          (VirtualAudioSessionInfo **)&v25,
          &v29,
          &v30,
          (unsigned __int8 *)&a5,
          (unsigned __int8 *)&a7,
          (enum _AudioSessionState *)&v28);
  v18 = v17;
  if ( v17 >= 0 )
  {
    LODWORD(a7) = v16 != 0;
    v19 = v25;
    v28 = v25;
    *(_QWORD *)v24 = 0LL;
    v20 = Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioStreamInfo,IAudioStreamInfo,VirtualAudioSessionInfo *,unsigned long &,enum SYSTEM_AUDIO_STREAM_TYPE>(
            v24,
            &v28,
            (int *)&v31,
            (int *)&a7);
    v21 = v20;
    if ( v20 >= 0 )
    {
      v22 = CPlaybackManager::OnStreamStateChanged(
              *(CPlaybackManager **)(a1 + 16),
              v19,
              v15,
              v14,
              *(struct IAudioStreamInfo **)v24);
      v18 = v22;
      if ( v22 >= 0 )
      {
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)v24);
        v18 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E7,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
          (const char *)(unsigned int)v22);
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)v24);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E5,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)v20);
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)v24);
      v18 = v21;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E1,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v17);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v26);
  return v18;
}
