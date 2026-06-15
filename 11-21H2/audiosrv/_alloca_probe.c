/*
 * XREFs of _alloca_probe @ 0x18006A600
 * Callers:
 *     _lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_::operator() @ 0x180008AF0 (_lambda_cbf6d06ac8f65fdd5bf72a52cf7f9da8_--operator().c)
 *     PubSebLevelEvent @ 0x18000E064 (PubSebLevelEvent.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013D50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180022970 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180023330 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800470E0 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800526A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXT.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x1800567E0 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18005695C (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800588F0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180059400 (--0AtmosCheck@@QEAA@XZ.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800675AC (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@P.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800BDD50 (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800BE000 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800BE2CC (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1800C0740 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 *     ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800C1F74 (--$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1800C3AE4 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800C64BC (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1800C7E48 (--$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800C8D64 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800D4F9C (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800D8CE4 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800E43DC (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800E4664 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180104E98 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ?GetActiveRenderEndpointWithFallbackToDefault@CAecAttributes@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAG@Z @ 0x18010553C (-GetActiveRenderEndpointWithFallbackToDefault@CAecAttributes@@QEAAJW4__MIDL___MIDL_itf_mmdevicea.c)
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18012ABE8 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013D7C4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFO.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18013E334 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSe.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      StackLimit -= 4096;
      *StackLimit = 0;
    }
    while ( v1 != StackLimit );
  }
  return result;
}
