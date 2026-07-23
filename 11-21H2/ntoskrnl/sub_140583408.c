/*
 * XREFs of sub_140583408 @ 0x140583408
 * Callers:
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void sub_140583408()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C55040, 0LL);
}
