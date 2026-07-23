/*
 * XREFs of IoCsqRemoveIrp @ 0x1403A59A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PIRP __stdcall IoCsqRemoveIrp(PIO_CSQ Csq, PIO_CSQ_IRP_CONTEXT Context)
{
  __int64 v4; // rdx
  PIRP Irp; // rdi
  __int64 v6; // rdx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  Csq->ReservePointer = 0LL;
  v8 = 0;
  sub_14042A5E0(Csq, &v8);
  Irp = Context->Irp;
  if ( Irp && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
  {
    sub_14042A5E0(Csq, Irp);
    Context->Irp = 0LL;
    Irp->Tail.Overlay.DriverContext[3] = 0LL;
    LOBYTE(v6) = v8;
    sub_14042A5E0(Csq, v6);
    return Irp;
  }
  else
  {
    LOBYTE(v4) = v8;
    sub_14042A5E0(Csq, v4);
    return 0LL;
  }
}
