/*
 * XREFs of ??1_RecurringTask@@QEAA@XZ @ 0x180018FE8
 * Callers:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x180018E8C (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180018F50 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001C1C4 (--1CAudioSession@@MEAA@XZ.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x180021FA0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180024110 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004767C (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ??1?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAA@XZ @ 0x1800D86C4 (--1-$unique_ptr@U_RecurringTask@@U-$default_delete@U_RecurringTask@@@std@@@std@@QEAA@XZ.c)
 *     ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800F54C0 (--1CBtAudioResourceManagerBase@@QEAA@XZ.c)
 *     ??1CBtLeAudioResourceManager@@UEAA@XZ @ 0x1800F5590 (--1CBtLeAudioResourceManager@@UEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_61c5e62474d0286cbc3b24e8797afd30__void_::_Do_call @ 0x1800FD6E0 (std--_Func_impl_no_alloc__lambda_61c5e62474d0286cbc3b24e8797afd30__void_--_Do_call.c)
 *     ??1CEndpointStore@@UEAA@XZ @ 0x18010F040 (--1CEndpointStore@@UEAA@XZ.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x1801109F0 (--1CMuteSoftware@@EEAA@XZ.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x180127024 (--1CVolumeSoftware@@EEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAXXZ @ 0x18001905C (-reset@-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAXXZ.c)
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
