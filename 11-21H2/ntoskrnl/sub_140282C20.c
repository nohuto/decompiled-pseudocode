/*
 * XREFs of sub_140282C20 @ 0x140282C20
 * Callers:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140212E00 @ 0x140212E00 (sub_140212E00.c)
 *     sub_14021A7D0 @ 0x14021A7D0 (sub_14021A7D0.c)
 *     sub_14021CA70 @ 0x14021CA70 (sub_14021CA70.c)
 *     sub_140221790 @ 0x140221790 (sub_140221790.c)
 *     sub_140224210 @ 0x140224210 (sub_140224210.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     IoReleaseCancelSpinLock @ 0x1402A23F0 (IoReleaseCancelSpinLock.c)
 *     sub_1402A4C30 @ 0x1402A4C30 (sub_1402A4C30.c)
 *     sub_1402A6E00 @ 0x1402A6E00 (sub_1402A6E00.c)
 *     sub_1402A7190 @ 0x1402A7190 (sub_1402A7190.c)
 *     sub_1402A7720 @ 0x1402A7720 (sub_1402A7720.c)
 *     sub_1402A7910 @ 0x1402A7910 (sub_1402A7910.c)
 *     sub_1402AE9D0 @ 0x1402AE9D0 (sub_1402AE9D0.c)
 *     sub_1402B02B0 @ 0x1402B02B0 (sub_1402B02B0.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     sub_1402B1170 @ 0x1402B1170 (sub_1402B1170.c)
 *     sub_1402B1740 @ 0x1402B1740 (sub_1402B1740.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1402F8040 @ 0x1402F8040 (sub_1402F8040.c)
 *     sub_1402F8420 @ 0x1402F8420 (sub_1402F8420.c)
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 *     sub_14032BD70 @ 0x14032BD70 (sub_14032BD70.c)
 *     sub_140343010 @ 0x140343010 (sub_140343010.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 *     sub_14056E6FC @ 0x14056E6FC (sub_14056E6FC.c)
 * Callees:
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 */

__int64 __fastcall sub_140282C20(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  do
  {
    if ( (++v2 & dword_140D0527C) == 0 && (dword_140D0689C & 0x40) != 0 && (unsigned __int8)sub_14039EA10() )
      sub_14039D930(v2);
    else
      _mm_pause();
    result = *a1;
  }
  while ( !*a1 );
  return result;
}
