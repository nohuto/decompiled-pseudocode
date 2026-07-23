/*
 * XREFs of sub_140398CF0 @ 0x140398CF0
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140999930 @ 0x140999930 (sub_140999930.c)
 */

void sub_140398CF0()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C222D0, 0LL);
  for ( i = qword_140C23110; (__int64 *)i != &qword_140C23110; i = *(_QWORD *)i )
  {
    sub_1402D66A8(i + 400);
    sub_140999930(i);
    *(_BYTE *)(i + 200) = 1;
    sub_1402935D0(i + 400);
  }
  sub_1402935D0((ULONG_PTR)&qword_140C222D0);
}
