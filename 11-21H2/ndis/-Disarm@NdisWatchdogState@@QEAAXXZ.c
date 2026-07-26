/*
 * XREFs of ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C010B998
 * Callers:
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C0105370 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ??1NdisWatchdogState@@QEAA@XZ @ 0x1C010B90C (--1NdisWatchdogState@@QEAA@XZ.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0129F54 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C012D83C (-ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 * Callees:
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C00239B0 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall NdisWatchdogState::Disarm(struct _KEVENT *this)
{
  struct _KEVENT *v1; // rbx

  v1 = this + 7;
  if ( !KeReadStateEvent(this + 7) && !NdisWatchdogState::CancelTimer((NdisWatchdogState *)this) )
    ndisWaitForKernelObject(v1);
}
