/*
 * XREFs of ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0
 * Callers:
 *     ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800486F0 (-InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005A578 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x180082F90 (-GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x1800832C0 (-GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z.c)
 *     ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x18010FEF0 (-NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMeterHardware@@UEAAXXZ @ 0x18010FF80 (-ProviderFinalRelease@CMeterHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMeterSoftware@@UEAAXXZ @ 0x18010FFD0 (-ProviderFinalRelease@CMeterSoftware@@UEAAXXZ.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180110BD0 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ @ 0x1801110F0 (-NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x180111360 (-ProviderFinalRelease@CMuteHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x180111400 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x180111730 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180127640 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ @ 0x180128480 (-NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x180128770 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x180128880 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180129A90 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18012F360 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1801322E4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x1801638E0 (-GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
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
