/*
 * XREFs of sub_1C005E6F8 @ 0x1C005E6F8
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

NTSTATUS __fastcall sub_1C005E6F8(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v4; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x28 )
  {
    if ( ((__int64)a2->AssociatedIrp.MasterIrp->MdlAddress & 1) != 0 )
    {
      ++a2->CurrentLocation;
      a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    }
    v4 = -1073741808;
  }
  else
  {
    v4 = -1073741820;
  }
  a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, v4);
}
