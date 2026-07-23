/*
 * XREFs of sub_14081BF30 @ 0x14081BF30
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14036C0A0 @ 0x14036C0A0 (sub_14036C0A0.c)
 *     sub_14081BF60 @ 0x14081BF60 (sub_14081BF60.c)
 */

__int64 sub_14081BF30()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C3B8, 0LL);
  sub_14081BF60();
  return sub_14036C0A0((ULONG_PTR)&stru_140C1C3B8);
}
