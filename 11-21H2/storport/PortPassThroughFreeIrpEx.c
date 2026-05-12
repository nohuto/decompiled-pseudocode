/*
 * XREFs of PortPassThroughFreeIrpEx @ 0x1C0015538
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001EC4 (RaUnitAtaPassThroughIoctl.c)
 *     PortpCompleteRequestIrp @ 0x1C0022008 (PortpCompleteRequestIrp.c)
 *     PortPassThroughExSendAsync @ 0x1C008860C (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C00889F4 (PortPassThroughSendAsync.c)
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
