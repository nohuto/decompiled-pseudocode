/*
 * XREFs of ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180126960
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010CDD8 (--$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CAT.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x18000C918 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x1801263E4 (--$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualAudioStream::RuntimeClassInitialize(
        CVirtualAudioStream *this,
        struct IAudioProcess *a2,
        int a3,
        const unsigned __int16 *a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5)
{
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v18; // [rsp+70h] [rbp+8h] BYREF
  struct IAudioProcess *v19; // [rsp+78h] [rbp+10h] BYREF
  bool v20; // [rsp+80h] [rbp+18h] BYREF
  const unsigned __int16 *v21; // [rsp+88h] [rbp+20h] BYREF

  v21 = a4;
  v19 = a2;
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this + 4, (__int64)a2);
  *((_DWORD *)this + 4) = a3;
  v8 = a5;
  *((_DWORD *)this + 10) = a5;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 3,
    0LL);
  v11 = -1LL;
  do
    ++v11;
  while ( a4[v11] );
  v12 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, a4, v11, v16, (unsigned __int16 **)this + 3);
  if ( v12 < 0 )
  {
    v13 = 26LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  v18 = 0;
  LOBYTE(a5) = a3 == 3;
  v20 = v8 == eCapture;
  v15 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v12 = Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioSessionInfo,VirtualAudioSessionInfo,IAudioProcess * &,unsigned short const * &,bool,bool,enum _AudioSessionState>(
          (VirtualAudioSessionInfo **)this + 6,
          &v19,
          &v21,
          &v20,
          (bool *)&a5,
          (enum _AudioSessionState *)&v18);
  if ( v12 < 0 )
  {
    v13 = 28LL;
    goto LABEL_5;
  }
  return 0LL;
}
