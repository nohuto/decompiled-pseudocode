/*
 * XREFs of sub_1409D9A80 @ 0x1409D9A80
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14062C2E4 @ 0x14062C2E4 (sub_14062C2E4.c)
 */

__int64 __fastcall sub_1409D9A80(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // r14
  unsigned int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax

  v8 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2288LL);
  if ( a4 == -1 )
    return (unsigned int)-1073741811;
  if ( (a2 & 0xFFF) != 0 )
    return (unsigned int)-1073741811;
  if ( (a1 & 0xFFF) != 0 )
    return (unsigned int)-1073741811;
  v9 = 0;
  if ( !a3 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v8 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx(v8 + 88, 0LL);
    sub_14062C2E4((PEX_SPIN_LOCK)v8, a1 >> 12, a2 >> 12, a3, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 88), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v8 + 88));
    sub_1402AFC00(v8 + 88);
    sub_1402F9540((__int64)KeGetCurrentThread());
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return v9;
}
