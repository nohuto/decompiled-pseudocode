/*
 * XREFs of IoCsqInsertIrpEx @ 0x14022F030
 * Callers:
 *     IoCsqInsertIrp @ 0x14022F010 (IoCsqInsertIrp.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

NTSTATUS __stdcall IoCsqInsertIrpEx(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_IRP_CONTEXT Context, PVOID InsertContext)
{
  NTSTATUS v4; // esi
  __int64 v9; // r8
  __int64 v10; // r8
  PIO_CSQ v11; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int8 v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v16 = 0;
  if ( Context )
  {
    Irp->Tail.Overlay.DriverContext[3] = Context;
    Context->Irp = Irp;
    Context->Csq = Csq;
    Context->Type = 1;
  }
  else
  {
    Irp->Tail.Overlay.DriverContext[3] = Csq;
  }
  Csq->ReservePointer = 0LL;
  sub_14042A5E0(Csq, &v16, Context);
  if ( Csq->Type == 3 )
  {
    v4 = sub_14042A5E0(Csq, Irp, InsertContext);
    if ( v4 < 0 )
    {
LABEL_6:
      v11 = Csq;
LABEL_7:
      sub_14042A5E0(v11, v16, v10);
      return v4;
    }
  }
  else
  {
    sub_14042A5E0(Csq, Irp, v9);
  }
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)sub_14025BB20);
  if ( !Irp->Cancel )
    goto LABEL_6;
  v11 = Csq;
  if ( !_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    goto LABEL_7;
  sub_14042A5E0(Csq, Irp, v10);
  if ( Context )
    Context->Irp = 0LL;
  v14 = v16;
  Irp->Tail.Overlay.DriverContext[3] = 0LL;
  sub_14042A5E0(Csq, v14, v13);
  sub_14042A5E0(Csq, Irp, v15);
  return v4;
}
