/*
 * XREFs of ?GetBTLEAudio_StreamContextFromStreamCounts@CBtLeAudioResourceManager@@IEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FB68C
 * Callers:
 *     ?GetSaDeviceWrapper@CBtLeAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x1800FB8C0 (-GetSaDeviceWrapper@CBtLeAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUS.c)
 *     ?UpdateBtleStreamContextIfNecessary@CBtLeAudioResourceManager@@IEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FD578 (-UpdateBtleStreamContextIfNecessary@CBtLeAudioResourceManager@@IEAAXW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothLEAudioWave2@@@details@wil@@QEAA_NXZ @ 0x180073098 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BluetoothLEAudioWave2@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBtLeAudioResourceManager::GetBTLEAudio_StreamContextFromStreamCounts(__int64 a1, int a2)
{
  __int64 v2; // r12
  int v4; // ebp
  struct _RTL_CRITICAL_SECTION *v5; // r14
  int *v6; // rbx
  char IsEnabled; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  unsigned int v11; // ebx

  v2 = a2;
  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  v6 = (int *)(a1 + ((_DWORD)v2 != 0 ? 384LL : 288LL));
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_BluetoothLEAudioWave2>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_BluetoothLEAudioWave2>::GetImpl'::`2'::impl);
  v8 = 0LL;
  v9 = 24LL;
  if ( IsEnabled )
  {
    do
    {
      if ( *v6 > 0 )
        v4 |= dword_180188550[v8 + v2];
      ++v6;
      v8 += 2LL;
      --v9;
    }
    while ( v9 );
  }
  else
  {
    do
    {
      if ( *v6 > 0 )
        v4 |= dword_180188490[v8 + v2];
      ++v6;
      v8 += 2LL;
      --v9;
    }
    while ( v9 );
  }
  v10 = v4 | 8;
  if ( *(int *)(a1 + 484) <= 0 )
    v10 = v4;
  if ( v5 )
    LeaveCriticalSection(v5);
  v11 = v10;
  if ( *(int *)(a1 + 480) > 0 && (v10 & 1) != 0 )
    v11 = v10 | 2;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_BluetoothLEAudioWave2>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_BluetoothLEAudioWave2>::GetImpl'::`2'::impl) )
  {
    if ( (v11 & 1) == 0 )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( (v11 & 1) != 0 && !(_DWORD)v2 )
LABEL_21:
    v11 |= 4u;
LABEL_22:
  if ( !v11 )
    return 1;
  return v11;
}
