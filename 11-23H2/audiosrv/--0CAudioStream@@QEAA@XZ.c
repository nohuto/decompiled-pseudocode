/*
 * XREFs of ??0CAudioStream@@QEAA@XZ @ 0x180010E90
 * Callers:
 *     ??$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioStream@@AEAPEAUIAudioProcess@@$$QEA_NAEAK$$QEAPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@@Z @ 0x1800102E4 (--$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4S.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioGraphCallback@@UIAudioStreamInfo@@UIAudioStreamPolicyVolumeClient@@UIDuckingController@@@WRL@Microsoft@@QEAA@XZ @ 0x180011668 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioGraphCallback@@UIAudioStreamInf.c)
 */

CAudioStream *__fastcall CAudioStream::CAudioStream(CAudioStream *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioGraphCallback,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioGraphCallback,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>();
  *((_DWORD *)this + 26) = 1065353216;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 1) = &CAudioStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 2) = &CAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 3) = &CAudioStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDuckingController>'};
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 35) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 144), 0, 0);
  *((_DWORD *)this + 65) = -1;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_BYTE *)this + 256) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 264), 0, 0);
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 255;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 100;
  *(_QWORD *)((char *)this + 348) = 0LL;
  *((_BYTE *)this + 356) = 0;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_BYTE *)this + 520) = 0;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_BYTE *)this + 544) = 0;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_DWORD *)this + 142) = 0;
  *((_QWORD *)this + 72) = 0LL;
  *((_BYTE *)this + 584) = 0;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 16, 0, 0);
  return this;
}
