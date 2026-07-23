/*
 * XREFs of sub_14094A6B8 @ 0x14094A6B8
 * Callers:
 *     sub_1405616A0 @ 0x1405616A0 (sub_1405616A0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_14094A6B8(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
}
