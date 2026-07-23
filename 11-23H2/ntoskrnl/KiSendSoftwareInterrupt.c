/*
 * XREFs of KiSendSoftwareInterrupt @ 0x140318BD4
 * Callers:
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiSignalThreadForApc @ 0x14030B598 (KiSignalThreadForApc.c)
 *     KiRequestTimer2Expiration @ 0x140318B30 (KiRequestTimer2Expiration.c)
 *     KeUpdateThreadTag @ 0x140366D70 (KeUpdateThreadTag.c)
 * Callees:
 *     HalSendSoftwareInterrupt @ 0x1402547F0 (HalSendSoftwareInterrupt.c)
 */

__int64 __fastcall KiSendSoftwareInterrupt(int a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  return HalSendSoftwareInterrupt(a1, a2);
}
