/*
 * XREFs of PopDripsWatchdogCallbackWorker @ 0x14099C240
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14035DF84 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14035DFE8 (PopDirectedDripsClearDisengageReason.c)
 *     PopCalculateIdleInformation @ 0x1403C76E0 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogCallbackHandler @ 0x14099C0A0 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14099C758 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

_QWORD *__fastcall PopDripsWatchdogCallbackWorker(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _OWNER_ENTRY *v3; // rsi
  ULONG v4; // r15d
  __int128 v5; // xmm0
  int v6; // eax
  OWNER_ENTRY v7; // xmm1
  unsigned int Flink; // eax
  int Reserved2_high; // eax
  int Flink_high; // r12d
  unsigned int SpinLock; // r13d
  __int64 v12; // rbp
  unsigned __int64 v13; // r14
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *v19; // rax
  __int64 v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h]
  __int128 v23; // [rsp+30h] [rbp-58h] BYREF
  OWNER_ENTRY v24; // [rsp+40h] [rbp-48h]
  char ActiveCount; // [rsp+90h] [rbp+8h]
  __int64 v26; // [rsp+98h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  --CurrentThread->KernelApcDisable;
  v24 = 0LL;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0 && (HIDWORD(Resource[2].Reserved2) & 2) != 0 )
  {
    ++LODWORD(Resource[6].OwnerTable);
    ++HIDWORD(Resource[2].SpinLock);
    PopDripsWatchdogScheduleNextTimer(&Resource[1].SystemResourcesList.Blink);
    v3 = (struct _OWNER_ENTRY *)MEMORY[0xFFFFF78000000008];
    PopCalculateIdleInformation((__int64)&v23);
    v4 = v24.TableSize - Resource[3].OwnerEntry.TableSize;
    if ( v24.TableSize != Resource[3].OwnerEntry.TableSize )
    {
      v5 = v23;
      v6 = PopDripsWatchdogDebounceTickInterval;
      v7 = v24;
      HIDWORD(Resource[2].SpinLock) = 0;
      *(_OWORD *)&Resource[3].SharedWaiters = v5;
      Resource[3].OwnerTable = v3;
      Resource[3].OwnerEntry = v7;
      LODWORD(Resource[3].SystemResourcesList.Flink) = v6;
      Resource[3].SystemResourcesList.Blink = (struct _LIST_ENTRY *)v3;
    }
    Flink = (unsigned int)Resource[3].SystemResourcesList.Flink;
    if ( Flink )
    {
      if ( HIDWORD(Resource[2].SpinLock) < Flink )
      {
        PopDirectedDripsClearDisengageReason(0);
      }
      else
      {
        PopDirectedDripsSetDisengageReason(0);
        LODWORD(Resource[3].SystemResourcesList.Flink) = PopDripsWatchdogDebounceTickInterval
                                                       + HIDWORD(Resource[2].SpinLock);
      }
    }
    Reserved2_high = HIDWORD(Resource[2].Reserved2);
    if ( (Reserved2_high & 4) == 0 )
    {
      Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
      SpinLock = Resource[2].SpinLock;
      v12 = (char *)v3 - (char *)Resource[3].SystemResourcesList.Blink;
      v13 = (char *)v3 - (char *)Resource[3].OwnerTable;
      v26 = *(_QWORD *)&Resource[6].ActiveCount;
      ActiveCount = Resource[3].ActiveCount;
      HIDWORD(Resource[2].Reserved2) = Reserved2_high | 4;
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      PopAcquirePolicyLock(v14);
      if ( v4 || qword_140CF7D18 )
      {
        PopReleasePolicyLock(v16, v15, v17, v18, v21, v22);
      }
      else
      {
        PopReleasePolicyLock(v16, v15, v17, v18, v21, v22);
        PopDripsWatchdogCallbackHandler(Flink_high, SpinLock, v12, v13, v26, ActiveCount);
      }
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      ExAcquireResourceExclusiveLite(Resource, 1u);
      Resource[3].SystemResourcesList.Blink = (struct _LIST_ENTRY *)v3;
      HIDWORD(Resource[2].Reserved2) &= ~4u;
    }
  }
  ExReleaseResourceLite(Resource);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
