/*
 * XREFs of sub_140764EC8 @ 0x140764EC8
 * Callers:
 *     sub_140764DB0 @ 0x140764DB0 (sub_140764DB0.c)
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_140555FAC @ 0x140555FAC (sub_140555FAC.c)
 *     sub_1405636A4 @ 0x1405636A4 (sub_1405636A4.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140764EC8(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  PIRP v5; // rdi
  struct _IRP *MasterIrp; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  PIRP v12; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v11 = 0LL;
  P = 0LL;
  v5 = Irp;
  v12 = Irp;
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_140555FAC(qword_140C03910, (const EVENT_DESCRIPTOR *)qword_14003B470);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( MasterIrp )
  {
    if ( CurrentStackLocation->Parameters.Read.Length < 0xC8 )
    {
      v7 = -1073741789;
    }
    else
    {
      v7 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v11);
      if ( v7 >= 0 )
      {
        NdrMesTypeDecode3(v11, "TP 3\a", &off_140A380F0, &off_140C02FC0, 0, &P);
        v7 = sub_140765DC0(P, Irp);
        v5 = 0LL;
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v5 )
  {
    v5->IoStatus.Status = v7;
    v5->IoStatus.Information = 0LL;
    IofCompleteRequest(v5, 0);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  v8 = v11;
  if ( v11 )
    MesHandleFree();
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_1405636A4(v8, (const EVENT_DESCRIPTOR *)qword_14003B200, a3, v7);
  return (unsigned int)v7;
}
