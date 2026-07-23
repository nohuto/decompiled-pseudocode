/*
 * XREFs of sub_14068E564 @ 0x14068E564
 * Callers:
 *     sub_14068E4E0 @ 0x14068E4E0 (sub_14068E4E0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14068F4AC @ 0x14068F4AC (sub_14068F4AC.c)
 */

__int64 __fastcall sub_14068E564(__int64 a1)
{
  __int64 v1; // rsi
  signed __int64 *v5; // rdi
  volatile signed __int64 *v6; // rbx
  int v7; // esi

  v1 = a1 + 224;
  if ( (*(_DWORD *)(a1 + 256) & 4) != 0 )
  {
    v5 = (signed __int64 *)(a1 + 72);
    ExAcquirePushLockSharedEx(a1 + 72, 0LL);
    v6 = (volatile signed __int64 *)(a1 + 80);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
    v7 = sub_14068F4AC(v1);
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5);
    sub_1402AFC00((ULONG_PTR)v5);
    if ( v7 >= 0 )
      return 0;
    return (unsigned int)v7;
  }
  else
  {
    return 0;
  }
}
