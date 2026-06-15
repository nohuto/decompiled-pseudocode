/*
 * XREFs of ?AreResourcesAvailableForStream@@YAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x18011CCE8
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     AudioServerIsFormatSupported @ 0x180123880 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z @ 0x18001761C (-GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AreResourcesAvailableForStream(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  int v9; // eax
  int AudioResourcePriority; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v9 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a1 + 56LL))(a1);
  AudioResourcePriority = GetAudioResourcePriority(
                            (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)(v9 != 0),
                            a4,
                            0,
                            a5);
  v12 = (__int128)*a2;
  return (*(__int64 (__fastcall **)(struct IAudioResourceManager *, struct CEndpointCharacteristics *, __int128 *, _QWORD, int))(*(_QWORD *)g_AudioResourceManager + 80LL))(
           g_AudioResourceManager,
           a1,
           &v12,
           a3,
           AudioResourcePriority);
}
