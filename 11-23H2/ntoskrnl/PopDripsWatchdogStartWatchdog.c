/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x14099C718
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x14099807C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     PopCalculateIdleInformation @ 0x1403C7D40 (PopCalculateIdleInformation.c)
 *     memset @ 0x140435A00 (memset.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14099C6A8 (PopDripsWatchdogScheduleNextTimer.c)
 */

_QWORD *PopDripsWatchdogStartWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = 0LL;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140C39968 & 2) != 0 )
  {
    _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
    v1 = PopDirectedDripsUmTestDeviceCount;
    do
    {
      v2 = v1;
      v1 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v1, v1);
    }
    while ( v2 != v1 );
    if ( !v1 )
    {
      v3 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)&v6);
      v4 = PopWdiCurrentScenarioInstanceId;
      if ( (dword_140C39A24 & 1) != 0 )
      {
        dword_140C39A34 = 0;
        qword_140C39A28 = 0LL;
        xmmword_140C39A58 = v6;
        dword_140C39A38 = PopDripsWatchdogDebounceTickInterval;
        qword_140C39A40 = v3;
        qword_140C39A48 = v3;
        xmmword_140C39A68 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C39970);
      }
      if ( (dword_140C39B2C & 1) != 0 )
      {
        memset(&unk_140C39B30, 0, 0x50uLL);
        dword_140C39B54 = dword_140C3CEE4;
        xmmword_140C39B60 = v6;
        qword_140C39B58 = qword_140CF7C68;
        xmmword_140C39B70 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C39A78);
      }
      dword_140C39968 |= 4u;
      qword_140C39B88 = v4;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
