/*
 * XREFs of ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14063C300
 * Callers:
 *     <none>
 * Callees:
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquireCacheAwarePushLockExclusiveEx(
        volatile signed __int32 **BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v3; // rbp
  volatile signed __int32 **v4; // rdi
  unsigned __int64 v5; // rsi
  volatile signed __int32 *v7; // rcx

  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  v3 = (ULONG_PTR)(BugCheckParameter2 + 32);
  v4 = BugCheckParameter2;
  if ( (BugCheckParameter1 & 2) != 0 )
    v5 = 0LL;
  else
    v5 = sub_140347C10((__int64)BugCheckParameter2, 0LL);
  if ( (unsigned __int64)BugCheckParameter2 >= v3 )
  {
LABEL_9:
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    return 1;
  }
  else
  {
    while ( !_interlockedbittestandset64(*v4, 0LL) )
    {
      if ( (unsigned __int64)++v4 >= v3 )
        goto LABEL_9;
    }
    while ( v4 != BugCheckParameter2 )
    {
      v7 = *--v4;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)*v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7);
    }
    if ( v5 )
      sub_140353BB0((ULONG_PTR)BugCheckParameter2, v5);
    return 0;
  }
}
