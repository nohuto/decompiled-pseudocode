/*
 * XREFs of ??1_WaitTask@@QEAA@XZ @ 0x1800D2D70
 * Callers:
 *     ??_ECAudioStream@@UEAAPEAXI@Z @ 0x180012910 (--_ECAudioStream@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAA@XZ @ 0x1800D2B68 (--1-$unique_ptr@U_WaitTask@@U-$default_delete@U_WaitTask@@@std@@@std@@QEAA@XZ.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800D2BC0 (--1AudioEffectsWatcher@@UEAA@XZ.c)
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x1800D396C (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAXXZ @ 0x1800CB2B0 (-reset@-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAXXZ.c)
 */

void __fastcall _WaitTask::~_WaitTask(PTP_WAIT *this)
{
  struct _TP_WAIT *v2; // rcx
  PTP_WAIT v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = *this;
  if ( v2 )
  {
    WaitForThreadpoolWaitCallbacks(v2, 1);
    if ( *this )
    {
      SetThreadpoolWait(*this, 0LL, 0LL);
      CloseThreadpoolWait(*this);
      *this = 0LL;
    }
  }
  v3 = this[3];
  if ( v3 )
  {
    CloseHandle(v3);
    this[3] = 0LL;
  }
  std::shared_ptr<std::function<void (void)>>::reset(this + 1);
  v4 = this[2];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
