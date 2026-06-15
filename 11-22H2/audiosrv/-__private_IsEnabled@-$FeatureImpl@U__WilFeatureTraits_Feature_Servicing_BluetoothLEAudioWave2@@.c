/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothLEAudioWave2@@@details@wil@@QEAA_NXZ @ 0x1800730C8
 * Callers:
 *     ?GetBTLEAudio_StreamContextFromStreamCounts@CBtLeAudioResourceManager@@IEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FB6DC (-GetBTLEAudio_StreamContextFromStreamCounts@CBtLeAudioResourceManager@@IEAA-AW4BTAudio_StreamCon.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothLEAudioWave2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180071420 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothLEAud.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_BluetoothLEAudioWave2>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  signed __int32 v2; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_BluetoothLEAudioWave2>::GetCachedFeatureEnabledState(
    a1,
    &v2);
  return v2 & 1;
}
