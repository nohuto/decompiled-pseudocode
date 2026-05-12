/*
 * XREFs of PortPassThroughExNormalize @ 0x1C007890C
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0078738 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExValidate @ 0x1C00789BC (PortPassThroughExValidate.c)
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 */

__int64 __fastcall PortPassThroughExNormalize(_OWORD *a1, PIRP Irp)
{
  _IRP *MasterIrp; // rbp
  unsigned int v5; // edi
  BOOLEAN v6; // al
  _IRP *v7; // rbx
  unsigned int v8; // eax

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v5 = 0;
  v6 = IoIs32bitProcess(Irp);
  v7 = Irp->AssociatedIrp.MasterIrp;
  if ( v6 )
  {
    *a1 = *(_OWORD *)&v7->Type;
    a1[1] = *(_OWORD *)&v7->Flags;
    *((_QWORD *)a1 + 4) = v7->ThreadListEntry.Flink;
    memmove((char *)a1 + 56, &v7->IoStatus, LODWORD(v7->MdlAddress));
    *((_QWORD *)a1 + 5) = LODWORD(v7->ThreadListEntry.Blink);
    *((_QWORD *)a1 + 6) = HIDWORD(v7->ThreadListEntry.Blink);
  }
  else
  {
    v8 = LODWORD(v7->MdlAddress) + 63;
    if ( v8 < 0x40 )
      return (unsigned int)-1073741675;
    else
      memmove(a1, MasterIrp, v8);
  }
  return v5;
}
