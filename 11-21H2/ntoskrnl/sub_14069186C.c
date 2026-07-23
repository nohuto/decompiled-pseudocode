/*
 * XREFs of sub_14069186C @ 0x14069186C
 * Callers:
 *     sub_140690CFC @ 0x140690CFC (sub_140690CFC.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_14069186C(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
}
