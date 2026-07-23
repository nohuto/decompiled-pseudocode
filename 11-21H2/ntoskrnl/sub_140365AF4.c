/*
 * XREFs of sub_140365AF4 @ 0x140365AF4
 * Callers:
 *     sub_14020DB50 @ 0x14020DB50 (sub_14020DB50.c)
 *     sub_1402314B0 @ 0x1402314B0 (sub_1402314B0.c)
 *     sub_140236A00 @ 0x140236A00 (sub_140236A00.c)
 *     sub_14023CDE0 @ 0x14023CDE0 (sub_14023CDE0.c)
 *     sub_14023D6AC @ 0x14023D6AC (sub_14023D6AC.c)
 *     sub_1402491D0 @ 0x1402491D0 (sub_1402491D0.c)
 *     sub_14025BC50 @ 0x14025BC50 (sub_14025BC50.c)
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 *     sub_140362714 @ 0x140362714 (sub_140362714.c)
 *     sub_14036424C @ 0x14036424C (sub_14036424C.c)
 *     sub_140364860 @ 0x140364860 (sub_140364860.c)
 *     sub_1403650F0 @ 0x1403650F0 (sub_1403650F0.c)
 *     sub_140365834 @ 0x140365834 (sub_140365834.c)
 *     sub_140365AC8 @ 0x140365AC8 (sub_140365AC8.c)
 *     sub_140367E68 @ 0x140367E68 (sub_140367E68.c)
 *     sub_14036F04C @ 0x14036F04C (sub_14036F04C.c)
 *     sub_14037039C @ 0x14037039C (sub_14037039C.c)
 *     sub_140371248 @ 0x140371248 (sub_140371248.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall sub_140365AF4(volatile LONG *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
    return ExAcquireSpinLockExclusive(a1);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  return -1;
}
