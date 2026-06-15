/*
 * XREFs of ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800C9B74
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1800443EC (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x1800C9530 (-GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x1800C9850 (-GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z.c)
 *     ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x1800C99B0 (-NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMeterHardware@@UEAAXXZ @ 0x1800C9A40 (-ProviderFinalRelease@CMeterHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMeterSoftware@@UEAAXXZ @ 0x1800C9A90 (-ProviderFinalRelease@CMeterSoftware@@UEAAXXZ.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800CA220 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ @ 0x1800CA720 (-NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x1800CAB30 (-ProviderFinalRelease@CMuteHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x1800CABD0 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800CB0C0 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800CC5D0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ @ 0x1800CD3D0 (-NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x1800CD7C0 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x1800CD8E0 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800CEBC0 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18011F0DC (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180124120 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?GetDeviceByIdString@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x18015D3A0 (-GetDeviceByIdString@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x18015D590 (-GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComPtrBase<IPart>::Release(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
