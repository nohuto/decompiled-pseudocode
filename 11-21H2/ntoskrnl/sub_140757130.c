/*
 * XREFs of sub_140757130 @ 0x140757130
 * Callers:
 *     sub_140702604 @ 0x140702604 (sub_140702604.c)
 *     sub_140756AD4 @ 0x140756AD4 (sub_140756AD4.c)
 *     sub_140B30EE0 @ 0x140B30EE0 (sub_140B30EE0.c)
 *     sub_140B533E0 @ 0x140B533E0 (sub_140B533E0.c)
 * Callees:
 *     sub_14027A950 @ 0x14027A950 (sub_14027A950.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1405C5DA0 @ 0x1405C5DA0 (sub_1405C5DA0.c)
 */

unsigned __int64 __fastcall sub_140757130(signed __int64 *a1)
{
  unsigned __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rbp

  v2 = sub_14027A950(a1);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
    v2 = sub_1405C5DA0(a1, 0x64537350u);
    if ( _InterlockedCompareExchange64(a1 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 1);
    sub_1402AFC00((ULONG_PTR)(a1 + 1));
    sub_1402F9540((__int64)CurrentThread);
  }
  return v2;
}
