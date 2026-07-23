/*
 * XREFs of sub_1409A1604 @ 0x1409A1604
 * Callers:
 *     sub_1409A0D80 @ 0x1409A0D80 (sub_1409A0D80.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14036C0A0 @ 0x14036C0A0 (sub_14036C0A0.c)
 *     sub_14081B360 @ 0x14081B360 (sub_14081B360.c)
 */

__int64 sub_1409A1604()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  __int64 v2; // rdx

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
  v1 = &unk_140C1C1FC;
  v2 = 2LL;
  do
  {
    *v1 = 0;
    v1 += 192;
    --v2;
  }
  while ( v2 );
  sub_14081B360(v0, 4, 0, 0LL, 1);
  return sub_14036C0A0((ULONG_PTR)&stru_140C1C1E8);
}
