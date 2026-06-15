/*
 * XREFs of ??1_RecurringTask@@QEAA@XZ @ 0x1800C9FF0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180007600 (-FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioS.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x180011630 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001ACB0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001F7D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18001F8F0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x1800261BC (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x1800263C0 (--1CAudioSession@@MEAA@XZ.c)
 *     ??1?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAA@XZ @ 0x1800C9EB4 (--1-$unique_ptr@U_RecurringTask@@U-$default_delete@U_RecurringTask@@@std@@@std@@QEAA@XZ.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x1800C9F88 (--1CMuteSoftware@@EEAA@XZ.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800CACE0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x1800CBABC (--1CVolumeSoftware@@EEAA@XZ.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x1800D7640 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800DAF40 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ??1CEndpointStore@@UEAA@XZ @ 0x180113274 (--1CEndpointStore@@UEAA@XZ.c)
 *     ??1CBtAudioResourceManager@@UEAA@XZ @ 0x18011397C (--1CBtAudioResourceManager@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAXXZ @ 0x1800CB2B0 (-reset@-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAXXZ.c)
 */

void __fastcall _RecurringTask::~_RecurringTask(PTP_TIMER *this)
{
  struct _TP_TIMER *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *this;
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*this, 1);
    CloseThreadpoolTimer(*this);
  }
  std::shared_ptr<std::function<void (void)>>::reset(this + 1);
  v3 = this[2];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
