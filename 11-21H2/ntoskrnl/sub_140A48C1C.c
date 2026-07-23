/*
 * XREFs of sub_140A48C1C @ 0x140A48C1C
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_140989CC0 @ 0x140989CC0 (sub_140989CC0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *sub_140A48C1C()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23198, 0LL);
  result = KeGetCurrentThread();
  qword_140C22290 = (__int64)result;
  return result;
}
