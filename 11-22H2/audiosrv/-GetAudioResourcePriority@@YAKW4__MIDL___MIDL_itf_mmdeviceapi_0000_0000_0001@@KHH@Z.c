/*
 * XREFs of ?GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z @ 0x18001761C
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180017510 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?AreResourcesAvailableForStream@@YAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x18011CCE8 (-AreResourcesAvailableForStream@@YAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAudioResourcePriority(
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a1,
        unsigned int a2,
        int a3,
        int a4)
{
  __int64 v4; // r10
  int v5; // edx
  int v6; // ecx

  v4 = a2;
  v5 = 0;
  if ( a1 )
    v6 = dword_18019C030[v4];
  else
    v6 = dword_180188410[v4];
  LOBYTE(v5) = a3 == 0;
  return v5 + 2 * (v6 + (a4 != 0 ? 0x10 : 0));
}
