/*
 * XREFs of sub_1409D9740 @ 0x1409D9740
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14062AE30 @ 0x14062AE30 (sub_14062AE30.c)
 */

__int64 __fastcall sub_1409D9740(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rbp
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax

  v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2288LL);
  if ( a5 == -1 || (a2 & 0xFFF) != 0 || (a1 & 0xFFF) != 0 || !a3 || (a4 & 0xFFFFFFF8) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx(v9 + 88, 0LL);
    v10 = sub_14062AE30((PEX_SPIN_LOCK)v9, a1 >> 12, a2 >> 12, a3, a4, a5);
    if ( v10 >= 0 )
      v10 = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 88), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v9 + 88));
    sub_1402AFC00(v9 + 88);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return (unsigned int)v10;
}
