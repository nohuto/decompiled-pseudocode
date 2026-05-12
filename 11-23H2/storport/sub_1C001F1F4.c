/*
 * XREFs of sub_1C001F1F4 @ 0x1C001F1F4
 * Callers:
 *     sub_1C001F11C @ 0x1C001F11C (sub_1C001F11C.c)
 *     sub_1C00266DA @ 0x1C00266DA (sub_1C00266DA.c)
 *     sub_1C00A2F90 @ 0x1C00A2F90 (sub_1C00A2F90.c)
 *     sub_1C00A3030 @ 0x1C00A3030 (sub_1C00A3030.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C001F1F4(PIRP Irp)
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
