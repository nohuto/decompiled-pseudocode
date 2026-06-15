/*
 * XREFs of ??1_WaitTask@@QEAA@XZ @ 0x1800140DC
 * Callers:
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x18000D5DC (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x180014170 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x180016988 (--1CAudioStream@@UEAA@XZ.c)
 *     ??1?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAA@XZ @ 0x1800D574C (--1-$unique_ptr@U_WaitTask@@U-$default_delete@U_WaitTask@@@std@@@std@@QEAA@XZ.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800D577C (--1AudioEffectsWatcher@@UEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAXXZ @ 0x18001905C (-reset@-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAXXZ.c)
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
