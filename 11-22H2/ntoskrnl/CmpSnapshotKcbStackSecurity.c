/*
 * XREFs of CmpSnapshotKcbStackSecurity @ 0x140A1BDB0
 * Callers:
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x14022CF0C (CmpAllocatePool.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D5730 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpSnapshotKcbStackSecurity(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 SecurityCacheEntryForKcbStack; // rdi
  void *Pool; // rax
  unsigned int v8; // ebx
  void *v9; // rsi

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL);
  Pool = (void *)CmpAllocatePool(256LL, *(unsigned int *)(SecurityCacheEntryForKcbStack + 24), a3);
  v8 = 0;
  v9 = Pool;
  if ( Pool )
  {
    memmove(
      Pool,
      (const void *)(SecurityCacheEntryForKcbStack + 32),
      *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
    *a4 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
