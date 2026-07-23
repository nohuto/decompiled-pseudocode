/*
 * XREFs of sub_140364760 @ 0x140364760
 * Callers:
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 *     sub_140362C48 @ 0x140362C48 (sub_140362C48.c)
 *     sub_1403644A4 @ 0x1403644A4 (sub_1403644A4.c)
 *     sub_1403645A4 @ 0x1403645A4 (sub_1403645A4.c)
 *     sub_1403650F0 @ 0x1403650F0 (sub_1403650F0.c)
 *     sub_1405F3924 @ 0x1405F3924 (sub_1405F3924.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall sub_140364760(volatile LONG *a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( (_DWORD)a2 )
    return ExAcquireSpinLockShared(a1);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)a1, a2);
  return -1;
}
