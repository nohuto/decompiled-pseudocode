/*
 * XREFs of sub_1403DEBE0 @ 0x1403DEBE0
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 */

__int64 sub_1403DEBE0()
{
  char v0; // al
  struct _KTHREAD *CurrentThread; // rax
  PIRP i; // rbx

  sub_1402D66A8((ULONG_PTR)&qword_140C22460);
  v0 = !byte_140C22451 || dword_140C232CC != 1;
  if ( dword_140C22268 && byte_140C22328 != v0 )
  {
    byte_140C22328 = v0;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C222D0, 0LL);
    for ( i = (PIRP)qword_140C23140; i != (PIRP)&qword_140C23140; i = *(PIRP *)&i->Type )
    {
      sub_1402D66A8((ULONG_PTR)&i[2].Flags);
      if ( i[1].AssociatedIrp.IrpCount || (i->PendingReturned & 1) != 0 && LODWORD(i->CancelRoutine) )
        IoCancelIrp((PIRP)i->IoStatus.Information);
      sub_1402935D0((ULONG_PTR)&i[2].Flags);
    }
    sub_1402935D0((ULONG_PTR)&qword_140C222D0);
  }
  sub_1402935D0((ULONG_PTR)&qword_140C22460);
  return 0LL;
}
