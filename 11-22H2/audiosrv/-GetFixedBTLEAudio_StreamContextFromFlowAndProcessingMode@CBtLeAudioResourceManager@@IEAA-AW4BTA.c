/*
 * XREFs of ?GetFixedBTLEAudio_StreamContextFromFlowAndProcessingMode@CBtLeAudioResourceManager@@IEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@U_GUID@@@Z @ 0x1800FB8AC
 * Callers:
 *     ?GetSaDeviceWrapper@CBtLeAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x1800FB910 (-GetSaDeviceWrapper@CBtLeAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUS.c)
 *     ?UpdateBtleStreamContextIfNecessary@CBtLeAudioResourceManager@@IEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FD5C8 (-UpdateBtleStreamContextIfNecessary@CBtLeAudioResourceManager@@IEAAXW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtLeAudioResourceManager::GetFixedBTLEAudio_StreamContextFromFlowAndProcessingMode(
        __int64 a1,
        int a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a2 == 1 )
    return 2LL;
  v3 = *a3 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
  if ( *a3 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
    v3 = a3[1] - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
  if ( !v3 )
    return 4LL;
  v5 = *a3 - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
  if ( *a3 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
    v5 = a3[1] - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
  result = 1LL;
  if ( !v5 )
    return 2LL;
  return result;
}
