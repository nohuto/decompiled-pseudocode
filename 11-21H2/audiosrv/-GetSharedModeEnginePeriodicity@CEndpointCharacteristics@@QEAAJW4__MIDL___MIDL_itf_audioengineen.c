/*
 * XREFs of ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x180001D70 (AudioServerGetDevicePeriod.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x180002138 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___M_ea_180002138.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18002BC80 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540C0 (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVCEndpointCharacteristics@@PEBUtWAV.c)
 *     ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800E80E4 (-ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800F1900 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800F2620 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x180100BC8 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z.c)
 *     ?GetConnectorProcessingModeForFormat@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@PEAU_GUID@@@Z @ 0x180115CB0 (-GetConnectorProcessingModeForFormat@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@.c)
 *     ?GetDefaultA2dpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x180115D90 (-GetDefaultA2dpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@.c)
 *     ?GetDefaultHfpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUSaDeviceParams@@@Z @ 0x180115FD0 (-GetDefaultHfpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@P.c)
 *     ?IsFormatSupported@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@PEBUtWAVEFORMATEX@@PEAPEAU4@@Z @ 0x180116970 (-IsFormatSupported@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREM.c)
 *     _lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator() @ 0x180144AB8 (_lambda_cc1fbeea7d61a5d688c074f297f6e07b_--operator().c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180145910 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL.c)
 *     ?IsFormatSupportedOnHostConnector@CEndpointCharacteristics@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18014AE68 (-IsFormatSupportedOnHostConnector@CEndpointCharacteristics@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000EA9C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18000EC78 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
        __int64 a1,
        unsigned int a2,
        const struct tWAVEFORMATEX *a3,
        __int128 *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // r13
  _QWORD *v15; // rcx
  __int64 v16; // rax
  const struct tWAVEFORMATEX ***v17; // rbx
  const struct tWAVEFORMATEX ***v18; // rsi
  const struct tWAVEFORMATEX **v20; // rax
  int v21; // eax
  __int128 v23; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-58h] BYREF

  v23 = *a4;
  CEndpointCharacteristics::GetAliasedDeviceConnectorMode(a1, v24, a2, &v23, 0);
  v11 = 248LL;
  if ( a2 != 3 )
    v11 = 224LL;
  v12 = a1 + v11;
  v13 = *(_QWORD **)v12;
  v14 = *(_QWORD **)(v12 + 8);
  while ( v13 != v14 )
  {
    v15 = (_QWORD *)*v13;
    v16 = *(_QWORD *)*v13 - v24[0];
    if ( !v16 )
      v16 = v15[1] - v24[1];
    if ( !v16 )
    {
      v17 = (const struct tWAVEFORMATEX ***)v15[2];
      v18 = (const struct tWAVEFORMATEX ***)v15[3];
      while ( v17 != v18 )
      {
        if ( (unsigned int)CompareWaveFormat(a3, **v17) )
        {
          if ( a6 )
            *a6 = *((_DWORD *)*v17 + 3);
          if ( a7 )
            *a7 = *((_DWORD *)*v17 + 2);
          if ( a8 )
            *a8 = *((_DWORD *)*v17 + 4);
          if ( a9 )
          {
            v20 = *v17;
            if ( a5 )
              v21 = *((_DWORD *)v20 + 6);
            else
              v21 = *((_DWORD *)v20 + 5);
            *a9 = v21;
          }
          return 0LL;
        }
        ++v17;
      }
    }
    ++v13;
  }
  return 2290679816LL;
}
