/*
 * XREFs of sub_1409F27B0 @ 0x1409F27B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1409F39DC @ 0x1409F39DC (sub_1409F39DC.c)
 */

void __fastcall sub_1409F27B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // si
  int v7; // eax

  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0;
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D60, 0LL);
    qword_140C15D68 = (__int64)KeGetCurrentThread();
    v7 = *(_DWORD *)(a2 + 1216);
    if ( (v7 & 1) == 0 )
    {
      v5 = 1;
      *(_DWORD *)(a2 + 1216) = v7 | 1;
    }
    qword_140C15D68 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C15D60);
    sub_1402AFC00((ULONG_PTR)&qword_140C15D60);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v5 )
      sub_1409F39DC(a2);
  }
}
