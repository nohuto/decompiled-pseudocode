/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0010EF0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x1C004B9D0 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterSendPowerToMiniportWorkItemRoutine @ 0x1C004BE40 (RaidAdapterSendPowerToMiniportWorkItemRoutine.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRestartAdapter @ 0x1C001142C (RaidAdapterRestartAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012048 (RaidUnitProcessSetDevicePowerIrp.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00124B0 (StorUpdateCrashDumpPowerReady.c)
 *     RaidResumeAdapterQueue @ 0x1C00190A0 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C001921C (RaidAdapterRestartQueues.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     StorPortUnitIdleState @ 0x1C0024F60 (StorPortUnitIdleState.c)
 *     RaidAdapterReInitialize @ 0x1C003715C (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     McTemplateK0qpd_EtwWriteTransfer @ 0x1C004AB24 (McTemplateK0qpd_EtwWriteTransfer.c)
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
      &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids,
      a2,
      Irp,
      Irp->IoStatus.Status);
  }
  if ( StorEtwLoggingEnabled )
  {
    v15 = 0LL;
    IoGetActivityIdIrp(Irp, &v15);
    if ( (byte_1C0092A02 & 0x10) != 0 )
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
    LODWORD(v12) = *(_DWORD *)(a2 + 740);
    v13 = *(_QWORD *)(a2 + 728);
    IoReportInterruptActive(&v12);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 4952) )
    StorUpdateCrashDumpPowerReady(a2);
  RaidCompleteRequestEx(Irp, 0, Irp->IoStatus.Status);
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 4880));
    if ( !v8 )
      break;
    v9 = (__int64)&v8[-124];
    if ( *((_BYTE *)&v8[-2].Next + 9) )
    {
      v10 = *(IRP **)(v9 + 1968);
      *(_QWORD *)(v9 + 1968) = 0LL;
      *(_BYTE *)(v9 + 1961) = 0;
      RaidUnitProcessSetDevicePowerIrp(&v8[-124], v10);
      RaUnitReleaseRemoveLock(v9);
    }
    else if ( *(_BYTE *)(v9 + 1960) )
    {
      v11 = *(unsigned int *)(v9 + 1964);
      *(_BYTE *)(v9 + 1960) = 0;
      StorPortUnitIdleState(&v8[-124], 0LL, v11);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 296));
}
