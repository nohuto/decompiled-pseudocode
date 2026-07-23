/*
 * XREFs of sub_140311C70 @ 0x140311C70
 * Callers:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402127F0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     sub_140212E00 @ 0x140212E00 (sub_140212E00.c)
 *     sub_14021A7D0 @ 0x14021A7D0 (sub_14021A7D0.c)
 *     sub_14021CA70 @ 0x14021CA70 (sub_14021CA70.c)
 *     ExReleaseResourceForThreadLite @ 0x140220DF0 (ExReleaseResourceForThreadLite.c)
 *     sub_140221790 @ 0x140221790 (sub_140221790.c)
 *     sub_140224210 @ 0x140224210 (sub_140224210.c)
 *     IoAcquireCancelSpinLock @ 0x14022A5C0 (IoAcquireCancelSpinLock.c)
 *     PoQueryWatchdogTime @ 0x14022DFC0 (PoQueryWatchdogTime.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     sub_1402A4C30 @ 0x1402A4C30 (sub_1402A4C30.c)
 *     sub_1402A6E00 @ 0x1402A6E00 (sub_1402A6E00.c)
 *     sub_1402A6FB0 @ 0x1402A6FB0 (sub_1402A6FB0.c)
 *     sub_1402A7190 @ 0x1402A7190 (sub_1402A7190.c)
 *     sub_1402A7720 @ 0x1402A7720 (sub_1402A7720.c)
 *     sub_1402A7910 @ 0x1402A7910 (sub_1402A7910.c)
 *     sub_1402AE9D0 @ 0x1402AE9D0 (sub_1402AE9D0.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1402F8040 @ 0x1402F8040 (sub_1402F8040.c)
 *     sub_1402F8420 @ 0x1402F8420 (sub_1402F8420.c)
 *     sub_1402FDBE0 @ 0x1402FDBE0 (sub_1402FDBE0.c)
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032BD70 @ 0x14032BD70 (sub_14032BD70.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

__int64 __fastcall sub_140311C70(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(a1 + 8) |= 1uLL;
  *a2 = a1;
  v6 = 0;
  do
    sub_1402F32E0(&v6, (__int64)a2, a3, a4);
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return v6;
}
