/*
 * XREFs of sub_14068B6FC @ 0x14068B6FC
 * Callers:
 *     sub_14020B1F8 @ 0x14020B1F8 (sub_14020B1F8.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

bool __fastcall sub_14068B6FC(__int64 a1)
{
  signed __int64 *v1; // rdi
  bool v3; // bl

  v1 = (signed __int64 *)(a1 + 56);
  ExAcquirePushLockSharedEx(a1 + 56, 0LL);
  v3 = *(_BYTE *)(a1 + 64) == 0;
  if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  sub_1402AFC00((ULONG_PTR)v1);
  return v3;
}
