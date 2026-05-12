/*
 * XREFs of sub_1C001F2A0 @ 0x1C001F2A0
 * Callers:
 *     sub_1C001EF40 @ 0x1C001EF40 (sub_1C001EF40.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C001F2A0(__int128 *a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rdi
  struct _IRP *v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  LIST_ENTRY v8; // xmm0
  __int64 v9; // xmm1_8

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LOBYTE(v5) = IoIs32bitProcess(a2);
  v6 = *a1;
  if ( (_BYTE)v5 )
  {
    v5 = a2->AssociatedIrp.MasterIrp;
    v9 = *((_QWORD *)a1 + 2);
    *(_OWORD *)&v5->Type = v6;
    *(_QWORD *)&v5->Flags = v9;
  }
  else
  {
    v7 = a1[1];
    *(_OWORD *)&MasterIrp->Type = v6;
    v8 = (LIST_ENTRY)a1[2];
    *(_OWORD *)&MasterIrp->Flags = v7;
    *(_QWORD *)&v7 = *((_QWORD *)a1 + 6);
    MasterIrp->ThreadListEntry = v8;
    MasterIrp->IoStatus.Pointer = (PVOID)v7;
  }
  return (char)v5;
}
