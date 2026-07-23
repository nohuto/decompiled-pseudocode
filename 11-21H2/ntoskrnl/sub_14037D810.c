/*
 * XREFs of sub_14037D810 @ 0x14037D810
 * Callers:
 *     sub_14037BC58 @ 0x14037BC58 (sub_14037BC58.c)
 * Callees:
 *     sub_1402A1124 @ 0x1402A1124 (sub_1402A1124.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14035F464 @ 0x14035F464 (sub_14035F464.c)
 */

__int64 __fastcall sub_14037D810(signed __int64 *BugCheckParameter2, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // esi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = -1;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v7 = sub_1402A1124((ULONG_PTR)BugCheckParameter2, &v10, 0LL, 1);
  v8 = v7;
  if ( v7 )
  {
    sub_14035F464(a2, *(unsigned __int16 *)(v7 + 16));
    v4 = *(unsigned __int16 *)(v8 + 16);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  sub_1402AFC00((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
