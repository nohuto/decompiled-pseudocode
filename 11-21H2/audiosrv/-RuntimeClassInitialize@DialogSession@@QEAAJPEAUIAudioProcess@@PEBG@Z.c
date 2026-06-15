/*
 * XREFs of ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x18010F6B8
 * Callers:
 *     ??$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVDialogSession@@$$QEAPEAUIAudioProcess@@AEAPEBG@Z @ 0x18010F198 (--$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800D6354 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800ED518 (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 *     ??$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010F07C (--$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CAT.c)
 *     _lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_::operator() @ 0x18010FB78 (_lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DialogSession::RuntimeClassInitialize(
        DialogSession *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IAudioProcess *v16; // [rsp+88h] [rbp+38h] BYREF
  const unsigned __int16 *v17; // [rsp+90h] [rbp+40h] BYREF
  int v18; // [rsp+98h] [rbp+48h] BYREF

  v17 = a3;
  v16 = a2;
  v14[0] = 0LL;
  v5 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                             + 24LL))(
         g_pEndpointCharacteristicsCache,
         a3,
         0LL,
         0LL,
         v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14[0] + 56LL))(v14[0]) != 0;
    v12 = 18;
    v8 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualAudioStream,CVirtualAudioStream,IAudioProcess * &,enum _AUDIO_STREAM_EXTENDED_CATEGORY,unsigned short const * &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 &>(
           (CVirtualAudioStream **)this + 2,
           &v16,
           &v12,
           &v17,
           (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *)&v18);
    v6 = v5;
    if ( v5 >= 0 )
    {
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this + 3, (__int64)a2);
      v13 = 0LL;
      wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>(v9, (__int64)&v13);
      LOBYTE(v10) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 80LL))(v13, *((_QWORD *)this + 3), v10);
      v17 = (const unsigned __int16 *)*((_QWORD *)this + 2);
      lambda_57c23b66a2da1f9f48bc4bba55b0b5a2_::operator()(&v17);
      *((_DWORD *)this + 8) = 1;
      v6 = 0;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
      goto LABEL_9;
    }
    v7 = 26LL;
  }
  else
  {
    v7 = 23LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\dialogsession.cpp",
    (const char *)(unsigned int)v5);
LABEL_9:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v14);
  return v6;
}
