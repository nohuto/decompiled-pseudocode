/*
 * XREFs of PortPassThroughFreeIrpEx @ 0x1C001E544
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C001E46C (PortpCompleteRequestIrp.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C002531A (RaUnitAtaPassThroughIoctl.c)
 *     PortPassThroughExSendAsync @ 0x1C00A1DE0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C00A1E80 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughFreeIrpEx(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
    Irp->MdlAddress = 0LL;
  }
  IoFreeIrp(Irp);
}
