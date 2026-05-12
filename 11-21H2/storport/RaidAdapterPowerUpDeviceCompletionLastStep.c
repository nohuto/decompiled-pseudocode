/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001DD00
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C001DC30 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x1C0048A10 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterSendPowerToMiniportWorkItemRoutine @ 0x1C0048DE0 (RaidAdapterSendPowerToMiniportWorkItemRoutine.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000C7B4 (StorUpdateCrashDumpPowerReady.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0016C00 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterRestartQueues @ 0x1C001DEE0 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C001E01C (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartAdapter @ 0x1C001E07C (RaidAdapterRestartAdapter.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     StorPortUnitIdleState @ 0x1C0025000 (StorPortUnitIdleState.c)
 *     RaidAdapterReInitialize @ 0x1C0035EFC (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     McTemplateK0qpd_EtwWriteTransfer @ 0x1C0047D1C (McTemplateK0qpd_EtwWriteTransfer.c)
 */

void __fastcall RaidAdapterPowerUpDeviceCompletionLastStep(PIRP Irp, __int64 a2)
{
  KIRQL v4; // bl
  unsigned int LowPart; // ebx
  int v6; // edx
  int v7; // ecx
  PSLIST_ENTRY v8; // rax
  __int64 v9; // rbx
  IRP *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v15; // [rsp+58h] [rbp-18h] BYREF

  v12 = 0LL;
  LODWORD(v13) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned int)RaidIsAdapterControlSupported(a2, 2) )
    RaidAdapterRestartAdapter(a2);
  else
    RaidAdapterReInitialize(a2);
  RaidResumeAdapterQueue(a2, 0LL);
  v4 = KfRaiseIrql(2u);
  RaidAdapterRestartQueues(a2, 0LL);
  KeLowerIrql(v4);
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 80), &LockHandle);
  *(_DWORD *)(a2 + 308) = LowPart;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 8), DevicePowerState, (POWER_STATE)LowPart);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
      a2,
      Irp,
      Irp->IoStatus.Status);
  }
  if ( StorEtwLoggingEnabled )
  {
    v15 = 0LL;
    IoGetActivityIdIrp(Irp, &v15);
    if ( (byte_1C00799E2 & 0x10) != 0 )
      McTemplateK0qpd_EtwWriteTransfer(
        v7,
        v6,
        (unsigned int)&v15,
        *(_DWORD *)(a2 + 56),
        (char)Irp,
        Irp->IoStatus.Status);
  }
  if ( (*(_BYTE *)(a2 + 109) & 1) != 0 )
  {
    LODWORD(v12) = *(_DWORD *)(a2 + 732);
    v13 = *(_QWORD *)(a2 + 720);
    IoReportInterruptActive(&v12);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 4888) )
    StorUpdateCrashDumpPowerReady(a2);
  RaidCompleteRequestEx(Irp, 0, Irp->IoStatus.Status);
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 4816));
    if ( !v8 )
      break;
    v9 = (__int64)&v8[-121];
    if ( *((_BYTE *)&v8[-2].Next + 9) )
    {
      v10 = *(IRP **)(v9 + 1920);
      *(_QWORD *)(v9 + 1920) = 0LL;
      *(_BYTE *)(v9 + 1913) = 0;
      RaidUnitProcessSetDevicePowerIrp((__int64)&v8[-121], v10);
      RaUnitReleaseRemoveLock(v9);
    }
    else if ( *(_BYTE *)(v9 + 1912) )
    {
      v11 = *(unsigned int *)(v9 + 1916);
      *(_BYTE *)(v9 + 1912) = 0;
      StorPortUnitIdleState(&v8[-121], 0LL, v11);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 296));
}
