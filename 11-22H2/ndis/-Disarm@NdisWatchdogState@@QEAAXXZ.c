/*
 * XREFs of ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C0116BF0
 * Callers:
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C010F788 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ??1NdisWatchdogState@@QEAA@XZ @ 0x1C0116B84 (--1NdisWatchdogState@@QEAA@XZ.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0135C20 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C013965C (-ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 * Callees:
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C00227FC (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall NdisWatchdogState::Disarm(struct _KEVENT *this)
{
  struct _KEVENT *v1; // rbx

  v1 = this + 7;
  if ( !KeReadStateEvent(this + 7) && !NdisWatchdogState::CancelTimer((NdisWatchdogState *)this) )
    ndisWaitForKernelObject(v1);
}
