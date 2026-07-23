/*
 * XREFs of sub_1409D5C3C @ 0x1409D5C3C
 * Callers:
 *     sub_1409D8074 @ 0x1409D8074 (sub_1409D8074.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1409D5D4C @ 0x1409D5D4C (sub_1409D5D4C.c)
 *     sub_1409D5DE0 @ 0x1409D5DE0 (sub_1409D5DE0.c)
 *     sub_1409D5FA4 @ 0x1409D5FA4 (sub_1409D5FA4.c)
 */

__int64 __fastcall sub_1409D5C3C(signed __int64 *BugCheckParameter2, void *a2, void *a3, unsigned int a4)
{
  size_t v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  _PRIVILEGE_SET *v10; // rdi
  int v11; // edi

  v4 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
      v9 = sub_1409D5DE0(BugCheckParameter2, a2);
      v10 = (_PRIVILEGE_SET *)v9;
      if ( v9 )
        break;
      if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      sub_1402AFC00((ULONG_PTR)BugCheckParameter2);
      KeLeaveCriticalRegion();
      v11 = sub_1409D5FA4((ULONG_PTR)BugCheckParameter2, a2);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    if ( *(_DWORD *)(v9 + 32) == (_DWORD)v4 )
      break;
    if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2);
    sub_1402AFC00((ULONG_PTR)BugCheckParameter2);
    KeLeaveCriticalRegion();
    sub_1409D5D4C((ULONG_PTR)BugCheckParameter2, v10);
  }
  memmove(a3, *(const void **)(v9 + 24), v4);
  v11 = 0;
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  sub_1402AFC00((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
