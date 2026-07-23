/*
 * XREFs of ExAcquireCacheAwarePushLockSharedEx @ 0x14029EFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

volatile signed __int64 *__fastcall ExAcquireCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  volatile signed __int64 *v9; // rdi

  v2 = 0LL;
  v3 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    v6 = *((unsigned __int8 *)CurrentThread + 792);
    if ( *((_BYTE *)CurrentThread + 792) || (v6 = sub_14029F6A8(BugCheckParameter2, CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v7, v6);
      *((_BYTE *)CurrentThread + 792) = v6 & ~(1 << v7);
      _enable();
      v2 = (__int64)CurrentThread + 96 * v7 + 1696;
      if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        v8 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      else
        v8 = -1;
      *(_DWORD *)(v2 + 8) = v8;
      *(_QWORD *)v2 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
  }
  v9 = *(volatile signed __int64 **)(BugCheckParameter2 + 8LL * (HIDWORD(KeGetPcr()[1].LockArray) & 0x1F));
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    sub_14029F350(v9, v3, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return v9;
}
