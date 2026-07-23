/*
 * XREFs of sub_140419D3C @ 0x140419D3C
 * Callers:
 *     sub_1406596A0 @ 0x1406596A0 (sub_1406596A0.c)
 *     sub_14065994C @ 0x14065994C (sub_14065994C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void sub_140419D3C()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3CB70, 0LL);
}
