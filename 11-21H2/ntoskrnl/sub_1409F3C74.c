/*
 * XREFs of sub_1409F3C74 @ 0x1409F3C74
 * Callers:
 *     sub_14079D948 @ 0x14079D948 (sub_14079D948.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14088394C @ 0x14088394C (sub_14088394C.c)
 *     sub_1409F1FF4 @ 0x1409F1FF4 (sub_1409F1FF4.c)
 */

void __fastcall sub_1409F3C74(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( (int)sub_14088394C(&v8) < 0 )
    goto LABEL_8;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v6 = *(_QWORD *)(a1 + 2544);
    if ( !v6 )
      goto LABEL_8;
  }
  else
  {
    v6 = qword_140C15D78 + 752;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(v6 + 8, 0LL);
  *(_QWORD *)(v6 + 16) = KeGetCurrentThread();
  sub_1409F1FF4(v6, a2, a3);
  *(_QWORD *)(v6 + 16) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6 + 8);
  sub_1402AFC00(v6 + 8);
  KeLeaveCriticalRegion();
LABEL_8:
  if ( v8 )
  {
    sub_1402AD030(&stru_140C15D80);
    KeLeaveCriticalRegion();
  }
}
