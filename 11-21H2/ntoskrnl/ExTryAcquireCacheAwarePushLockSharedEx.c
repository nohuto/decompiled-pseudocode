/*
 * XREFs of ExTryAcquireCacheAwarePushLockSharedEx @ 0x14063C3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140220664 @ 0x140220664 (sub_140220664.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ExTryAcquireCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  volatile signed __int64 *v3; // rsi
  unsigned __int64 v4; // r11
  bool v5; // bl

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v3 = *(volatile signed __int64 **)(BugCheckParameter2 + 8LL * (HIDWORD(KeGetPcr()[1].LockArray) & 0x1F));
  if ( (BugCheckParameter1 & 2) != 0 )
    v4 = 0LL;
  else
    v4 = sub_140347C10(BugCheckParameter2, 0LL);
  v5 = !_InterlockedCompareExchange64(v3, 17LL, 0LL) || sub_140220664((signed __int64 *)v3, 2);
  if ( v4 )
  {
    if ( v5 )
      *(_BYTE *)(v4 + 18) = 1;
    else
      sub_140353BB0(BugCheckParameter2, v4);
  }
  return (unsigned __int64)v3 & -(__int64)v5;
}
