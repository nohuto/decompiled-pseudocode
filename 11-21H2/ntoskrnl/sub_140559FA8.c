/*
 * XREFs of sub_140559FA8 @ 0x140559FA8
 * Callers:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x14021DC00 (IoGetRequestorProcess.c)
 *     sub_140234D58 @ 0x140234D58 (sub_140234D58.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403476D0 @ 0x1403476D0 (sub_1403476D0.c)
 *     sub_1403488C0 @ 0x1403488C0 (sub_1403488C0.c)
 *     sub_1403489B0 @ 0x1403489B0 (sub_1403489B0.c)
 *     sub_140559E1C @ 0x140559E1C (sub_140559E1C.c)
 */

void __fastcall sub_140559FA8(PIRP Irp, KPRIORITY a2)
{
  PVOID UserApcContext; // rdi
  PEPROCESS RequestorProcess; // rax
  PFILE_OBJECT OriginalFileObject; // rbp
  __int64 v7; // r14

  UserApcContext = Irp->Overlay.AsynchronousParameters.UserApcContext;
  RequestorProcess = IoGetRequestorProcess(Irp);
  OriginalFileObject = Irp->Tail.Overlay.OriginalFileObject;
  v7 = (__int64)RequestorProcess;
  sub_140559E1C((__int64)UserApcContext, (__int64)Irp->UserIosb, &Irp->IoStatus.0, a2);
  ObfDereferenceObjectWithTag(UserApcContext, 0x49526F49u);
  Irp->Flags &= ~0x200000u;
  if ( OriginalFileObject )
    OriginalFileObject->FinalStatus = Irp->IoStatus.Status;
  if ( v7 )
    sub_1403488C0((__int64)Irp, v7);
  if ( (Irp->Flags & 0x2000) != 0 )
    sub_1403476D0((__int64)Irp, (__int64)OriginalFileObject);
  else
    sub_1403489B0(Irp);
  sub_140234D58(Irp, (ULONG_PTR)OriginalFileObject);
}
