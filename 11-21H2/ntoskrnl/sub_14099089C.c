/*
 * XREFs of sub_14099089C @ 0x14099089C
 * Callers:
 *     sub_1403A7580 @ 0x1403A7580 (sub_1403A7580.c)
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 */

void sub_14099089C()
{
  struct _KTHREAD *CurrentThread; // rax
  PIRP i; // rdi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C222D0, 0LL);
  for ( i = (PIRP)qword_140C23140; i != (PIRP)&qword_140C23140; i = *(PIRP *)&i->Type )
  {
    sub_1402D66A8((ULONG_PTR)&i[2].Flags);
    IoCancelIrp((PIRP)i->IoStatus.Information);
    sub_1402935D0((ULONG_PTR)&i[2].Flags);
  }
  sub_1402935D0((ULONG_PTR)&qword_140C222D0);
}
