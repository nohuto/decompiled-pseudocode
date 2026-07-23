/*
 * XREFs of sub_1407F02CC @ 0x1407F02CC
 * Callers:
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     sub_1407EFC00 @ 0x1407EFC00 (sub_1407EFC00.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall sub_1407F02CC(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( a1 )
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1F5F0, 0LL);
  else
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C1F5F0, 0LL);
}
