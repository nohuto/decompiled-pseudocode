/*
 * XREFs of sub_140A6AD80 @ 0x140A6AD80
 * Callers:
 *     sub_140986E88 @ 0x140986E88 (sub_140986E88.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140376830 @ 0x140376830 (sub_140376830.c)
 */

void __fastcall sub_140A6AD80(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E970, 0LL);
  sub_140376830(dword_140C4E96C == 0, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E970, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4E970);
  sub_1402AFC00((ULONG_PTR)&qword_140C4E970);
  KeLeaveCriticalRegion();
}
