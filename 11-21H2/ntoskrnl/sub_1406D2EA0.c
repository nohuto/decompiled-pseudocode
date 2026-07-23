/*
 * XREFs of sub_1406D2EA0 @ 0x1406D2EA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 */

struct _KTHREAD *__fastcall sub_1406D2EA0(__int64 a1, char a2)
{
  ULONG_PTR v2; // rcx
  struct _KTHREAD *CurrentThread; // rax

  v2 = qword_140C5AE28 + 40;
  if ( !a2 )
    return sub_1402D66A8(v2);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  return (struct _KTHREAD *)ExAcquirePushLockSharedEx(v2, 0LL);
}
