/*
 * XREFs of ExTryAcquirePushLockExclusiveEx @ 0x1402F62C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // eax

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    v5 = *((unsigned __int8 *)CurrentThread + 792);
    if ( *((_BYTE *)CurrentThread + 792) || (v5 = sub_14029F6A8(BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v6, v5);
      *((_BYTE *)CurrentThread + 792) = v5 & ~(1 << v6);
      _enable();
      v2 = (__int64)CurrentThread + 96 * v6 + 1696;
      if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        v7 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      else
        v7 = -1;
      *(_DWORD *)(v2 + 8) = v7;
      *(_QWORD *)v2 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    if ( v2 )
      sub_140353BB0(BugCheckParameter2);
    return 0;
  }
  else
  {
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
    return 1;
  }
}
