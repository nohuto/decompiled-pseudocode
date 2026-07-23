/*
 * XREFs of sub_140419E30 @ 0x140419E30
 * Callers:
 *     sub_1406595AC @ 0x1406595AC (sub_1406595AC.c)
 *     sub_140659708 @ 0x140659708 (sub_140659708.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_140419E30(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
}
