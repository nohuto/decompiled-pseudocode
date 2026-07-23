/*
 * XREFs of sub_140B30800 @ 0x140B30800
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1409A01C0 @ 0x1409A01C0 (sub_1409A01C0.c)
 */

void sub_140B30800()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C222D0, 0LL);
  for ( i = (__int64 *)qword_140C23110; i != &qword_140C23110; i = (__int64 *)*i )
    sub_1409A01C0();
  sub_1402935D0((ULONG_PTR)&qword_140C222D0);
}
