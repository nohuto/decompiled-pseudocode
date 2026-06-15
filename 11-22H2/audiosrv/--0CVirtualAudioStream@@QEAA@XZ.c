/*
 * XREFs of ??0CVirtualAudioStream@@QEAA@XZ @ 0x18010CFEC
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010CDD8 (--$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CAT.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

CVirtualAudioStream *__fastcall CVirtualAudioStream::CVirtualAudioStream(CVirtualAudioStream *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioStreamInfo>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVirtualAudioStream::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 44) = 0;
  *((_QWORD *)this + 6) = 0LL;
  return this;
}
