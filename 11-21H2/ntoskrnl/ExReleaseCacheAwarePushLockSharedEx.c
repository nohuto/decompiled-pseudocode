/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x140359C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_140359D80 @ 0x140359D80 (sub_140359D80.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseCacheAwarePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v6; // rsi
  __int64 v7; // r8
  unsigned int v8; // r8d
  __int64 v9; // rbx
  int v10; // edx

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( v6 - qword_140C50630 < 0x8000000000LL )
      v7 = (unsigned int)sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v7 = 0xFFFFFFFFLL;
    _disable();
    result = sub_140359D80(CurrentThread, v6, v7);
    v9 = result;
    if ( result )
    {
      if ( *(__int64 *)result < 0 )
      {
        *(_BYTE *)result |= 2u;
        _enable();
        sub_14034EE30(result);
        _disable();
      }
      v10 = *(_DWORD *)(v9 + 88);
      *(_DWORD *)(v9 + 88) = 0;
      *(_BYTE *)(v9 + 17) = 0;
      *(_QWORD *)v9 = 0LL;
      result = *(unsigned __int8 *)(v9 + 16);
      *((_BYTE *)CurrentThread + 792) |= 1 << result;
      _enable();
      if ( v10 )
        return sub_14022B568((ULONG_PTR)CurrentThread, v6, v10);
    }
    else
    {
      if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, v8, 0LL);
      _enable();
    }
  }
  return result;
}
