/*
 * XREFs of ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010FE90
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010F07C (--$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CAT.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800D6354 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x18010F96C (--$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualAudioStream::RuntimeClassInitialize(
        CVirtualAudioStream *this,
        struct IAudioProcess *a2,
        int a3,
        const unsigned __int16 *a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5)
{
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v8; // r13d
  char **v9; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v17; // [rsp+90h] [rbp+8h] BYREF
  struct IAudioProcess *v18; // [rsp+98h] [rbp+10h] BYREF
  bool v19; // [rsp+A0h] [rbp+18h] BYREF
  const unsigned __int16 *v20; // [rsp+A8h] [rbp+20h] BYREF

  v20 = a4;
  v18 = a2;
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this + 4, (__int64)a2);
  *((_DWORD *)this + 4) = a3;
  v8 = a5;
  *((_DWORD *)this + 10) = a5;
  v9 = (char **)((char *)this + 24);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 3,
    0LL);
  v10 = -1LL;
  do
    ++v10;
  while ( a4[v10] );
  *v9 = 0LL;
  v11 = v10 + 1;
  if ( v10 + 1 < v10 || !is_mul_ok(v11, 2uLL) )
  {
    v12 = -2147024362;
    goto LABEL_12;
  }
  v12 = CTCoAllocPolicy::Alloc(0LL, (v11 * (unsigned __int128)2uLL) >> 64, 2 * v11, (void **)this + 3);
  if ( v12 < 0 )
  {
LABEL_12:
    v14 = 26LL;
    goto LABEL_13;
  }
  StringCchCopyNExW(*v9, v10 + 1, a4, v10);
  v17 = 0;
  LOBYTE(a5) = a3 == 3;
  v19 = v8 == eCapture;
  v13 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v12 = Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioSessionInfo,VirtualAudioSessionInfo,IAudioProcess * &,unsigned short const * &,bool,bool,enum _AudioSessionState>(
          (VirtualAudioSessionInfo **)this + 6,
          &v18,
          &v20,
          &v19,
          (bool *)&a5,
          (enum _AudioSessionState *)&v17);
  if ( v12 >= 0 )
    return 0LL;
  v14 = 28LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp",
    (const char *)(unsigned int)v12);
  return (unsigned int)v12;
}
