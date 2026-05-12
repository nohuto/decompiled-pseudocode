/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x1C0021A54
 * Callers:
 *     RaidUnitLogSenseCommandSrb @ 0x1C002141C (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0021860 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaUnitSmartDataIoctl @ 0x1C0052728 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C0052C4C (RaUnitSmartReturnStatus.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0054540 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitResetTarget @ 0x1C0055598 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C0055850 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C0055B6C (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeSynchronousScsiRequest(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
  }
  IoFreeIrp(Irp);
}
