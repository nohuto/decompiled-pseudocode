/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x14099C918
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x14099827C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     PopCalculateIdleInformation @ 0x1403C7F20 (PopCalculateIdleInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14099C8A8 (PopDripsWatchdogScheduleNextTimer.c)
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
  if ( (dword_140C398E8 & 2) != 0 )
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
      if ( (dword_140C399A4 & 1) != 0 )
      {
        dword_140C399B4 = 0;
        qword_140C399A8 = 0LL;
        xmmword_140C399D8 = v6;
        dword_140C399B8 = PopDripsWatchdogDebounceTickInterval;
        qword_140C399C0 = v3;
        qword_140C399C8 = v3;
        xmmword_140C399E8 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C398F0);
      }
      if ( (dword_140C39AAC & 1) != 0 )
      {
        memset(&unk_140C39AB0, 0, 0x50uLL);
        dword_140C39AD4 = dword_140C3D084;
        xmmword_140C39AE0 = v6;
        qword_140C39AD8 = qword_140CF7C68;
        xmmword_140C39AF0 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C399F8);
      }
      dword_140C398E8 |= 4u;
      qword_140C39B08 = v4;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
