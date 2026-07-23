/*
 * XREFs of PiSwIrpStartCreate @ 0x14081AEA8
 * Callers:
 *     PiSwDispatch @ 0x14079C810 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1402C9C10 (IofCompleteRequest.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140554FFC (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14055FC5C (McTemplateK0d_EtwWriteTransfer.c)
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpStartCreate(__int64 Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *v4; // rbx
  PIRP v5; // rdi
  struct _IRP *v6; // rcx
  int Worker; // ebx
  __int64 v8; // rcx
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  v4 = *(struct _IO_STACK_LOCATION **)(Irp + 184);
  v11 = 0LL;
  P = 0LL;
  v5 = (PIRP)Irp;
  v12 = Irp;
  if ( (byte_140C0E20C & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(
      MS_KernelPnP_Provider_Context,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_IrpCreate_Start);
  v6 = *(struct _IRP **)(Irp + 24);
  if ( v6 )
  {
    if ( v4->Parameters.Read.Length < 0xC8 )
    {
      Worker = -1073741789;
    }
    else
    {
      Worker = MesDecodeBufferHandleCreate(v6, v4->Parameters.Create.Options, &v11);
      if ( Worker >= 0 )
      {
        NdrMesTypeDecode3(v11, "TP 3\a", &off_140A780E8, &off_140C02F50, 0, &P);
        Worker = PiSwIrpStartCreateWorker((__int64)P, Irp);
        v5 = 0LL;
      }
    }
  }
  else
  {
    Worker = -1073741811;
  }
  if ( v5 )
  {
    v5->IoStatus.Status = Worker;
    v5->IoStatus.Information = 0LL;
    IofCompleteRequest(v5, 0);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  v8 = v11;
  if ( v11 )
    MesHandleFree();
  if ( (byte_140C0E20C & 8) != 0 )
    McTemplateK0d_EtwWriteTransfer(v8, (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_IrpCreate_Stop, a3, Worker);
  return (unsigned int)Worker;
}
