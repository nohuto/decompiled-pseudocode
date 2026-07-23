/*
 * XREFs of sub_14078C5BC @ 0x14078C5BC
 * Callers:
 *     sub_14078C520 @ 0x14078C520 (sub_14078C520.c)
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1406E6124 @ 0x1406E6124 (sub_1406E6124.c)
 *     sub_14078C678 @ 0x14078C678 (sub_14078C678.c)
 *     sub_14078D764 @ 0x14078D764 (sub_14078D764.c)
 *     sub_1407FBA68 @ 0x1407FBA68 (sub_1407FBA68.c)
 */

__int64 __fastcall sub_14078C5BC(PIRP Irp, __int64 a2, int a3, int a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v6; // eax
  unsigned int v7; // edi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x470800u:
      v6 = sub_14078D764(
             CurrentStackLocation->FileObject,
             Irp->AssociatedIrp.MasterIrp,
             CurrentStackLocation->Parameters.Create.Options,
             CurrentStackLocation->Parameters.Read.Length,
             (__int64)&Irp->IoStatus);
      break;
    case 0x470804u:
      v6 = sub_14078C678(
             CurrentStackLocation->FileObject,
             Irp->AssociatedIrp.MasterIrp,
             a3,
             CurrentStackLocation->Parameters.Read.Length,
             (__int64)&Irp->IoStatus);
      break;
    case 0x470808u:
      v6 = sub_1407FBA68(
             CurrentStackLocation->FileObject,
             Irp->AssociatedIrp.MasterIrp,
             CurrentStackLocation->Parameters.Create.Options,
             a4,
             (__int64)&Irp->IoStatus);
      break;
    case 0x47080Cu:
      v6 = sub_1406E6124((__int64)CurrentStackLocation->FileObject);
      break;
    default:
      v7 = -1073741637;
      goto LABEL_5;
  }
  v7 = v6;
LABEL_5:
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  return v7;
}
