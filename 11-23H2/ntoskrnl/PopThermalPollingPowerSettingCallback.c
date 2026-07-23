/*
 * XREFs of PopThermalPollingPowerSettingCallback @ 0x1403B6170
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140352030 (IoCancelIrp.c)
 */

__int64 PopThermalPollingPowerSettingCallback()
{
  char v0; // al
  struct _KTHREAD *CurrentThread; // rax
  PIRP i; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalLock);
  v0 = !PopPdcIdleResiliency || dword_140C3D96C != 1;
  if ( PopThermalPollingMode && PopThermalPollingWakesAllowed != v0 )
  {
    PopThermalPollingWakesAllowed = v0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    for ( i = (PIRP)PopThermal; i != (PIRP)&PopThermal; i = *(PIRP *)&i->Type )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&i[2].Flags);
      if ( i[1].AssociatedIrp.IrpCount || (i->PendingReturned & 1) != 0 && LODWORD(i->CancelRoutine) )
        IoCancelIrp((PIRP)i->IoStatus.Information);
      PopReleaseRwLock((__int64 *)&i[2].Flags);
    }
    PopReleaseRwLock((__int64 *)&PopPolicyDeviceLock);
  }
  PopReleaseRwLock(&PopThermalLock);
  return 0LL;
}
