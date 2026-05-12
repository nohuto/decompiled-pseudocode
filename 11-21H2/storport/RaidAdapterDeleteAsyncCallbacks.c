/*
 * XREFs of RaidAdapterDeleteAsyncCallbacks @ 0x1C0034284
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C008C850 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C008CBD0 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterCancelPauseTimer @ 0x1C00339A0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDisConnectMSIInterrupt @ 0x1C008C3F8 (RaidAdapterDisConnectMSIInterrupt.c)
 *     RaidAdapterDisConnectNonMSIInterrupt @ 0x1C008C444 (RaidAdapterDisConnectNonMSIInterrupt.c)
 */

void __fastcall RaidAdapterDeleteAsyncCallbacks(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  void *v5; // rcx
  __int64 v6; // rcx
  unsigned int i; // ebx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  char v11; // al

  KeCancelTimer((PKTIMER)(a1 + 1456));
  if ( *(_DWORD *)(a1 + 5400) )
    KeCancelTimer((PKTIMER)(a1 + 5264));
  v2 = KfRaiseIrql(2u);
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 1648));
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 4008));
  KeLowerIrql(v2);
  if ( *(_DWORD *)(a1 + 840) > 1u )
    KeCancelTimer((PKTIMER)(a1 + 5640));
  KeFlushQueuedDpcs();
  if ( *(_BYTE *)(a1 + 4241) )
  {
    RaidAdapterDisConnectMSIInterrupt(a1);
    *(_BYTE *)(a1 + 4241) = 0;
    *(_QWORD *)(a1 + 4224) = 0LL;
  }
  else if ( *(_QWORD *)(a1 + 720) )
  {
    RaidAdapterDisConnectNonMSIInterrupt(a1);
  }
  v5 = *(void **)(a1 + 4840);
  if ( v5 )
  {
    PoUnregisterPowerSettingCallback(v5);
    *(_QWORD *)(a1 + 4840) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 4856);
  if ( v6 )
  {
    PoUnregisterCoalescingCallback(v6, v3, v4);
    *(_QWORD *)(a1 + 4856) = 0LL;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4672); ++i )
    PoUnregisterPowerSettingCallback(*(PVOID *)(*(_QWORD *)(a1 + 4688) + 8LL * i));
  v8 = *(void **)(a1 + 4680);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x45416152u);
    *(_DWORD *)(a1 + 4672) = 0;
    *(_QWORD *)(a1 + 4680) = 0LL;
    *(_QWORD *)(a1 + 4688) = 0LL;
  }
  v9 = *(void **)(a1 + 4864);
  if ( v9 )
  {
    PoUnregisterPowerSettingCallback(v9);
    *(_QWORD *)(a1 + 4864) = 0LL;
  }
  v10 = *(void **)(a1 + 5920);
  if ( v10 )
  {
    PoUnregisterPowerSettingCallback(v10);
    *(_QWORD *)(a1 + 5920) = 0LL;
  }
  v11 = *(_BYTE *)(a1 + 108);
  if ( (v11 & 0x10) != 0 )
  {
    *(_BYTE *)(a1 + 108) = v11 & 0xEF;
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4872), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 4872));
  }
}
