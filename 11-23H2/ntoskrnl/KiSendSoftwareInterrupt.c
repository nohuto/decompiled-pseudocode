/*
 * XREFs of KiSendSoftwareInterrupt @ 0x140318944
 * Callers:
 *     KiReadyDeferredReadyList @ 0x140249C90 (KiReadyDeferredReadyList.c)
 *     KiSignalThreadForApc @ 0x14030B308 (KiSignalThreadForApc.c)
 *     KiRequestTimer2Expiration @ 0x1403188A0 (KiRequestTimer2Expiration.c)
 *     KeUpdateThreadTag @ 0x140366BD0 (KeUpdateThreadTag.c)
 * Callees:
 *     HalSendSoftwareInterrupt @ 0x140254730 (HalSendSoftwareInterrupt.c)
 */

__int64 __fastcall KiSendSoftwareInterrupt(int a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  return HalSendSoftwareInterrupt(a1, a2);
}
