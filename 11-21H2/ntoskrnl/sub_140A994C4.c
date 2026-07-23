/*
 * XREFs of sub_140A994C4 @ 0x140A994C4
 * Callers:
 *     sub_1406015D4 @ 0x1406015D4 (sub_1406015D4.c)
 *     sub_140601734 @ 0x140601734 (sub_140601734.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A97FF4 @ 0x140A97FF4 (sub_140A97FF4.c)
 *     sub_140A98064 @ 0x140A98064 (sub_140A98064.c)
 *     sub_140A98420 @ 0x140A98420 (sub_140A98420.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 *     sub_140A99478 @ 0x140A99478 (sub_140A99478.c)
 *     sub_140A9952C @ 0x140A9952C (sub_140A9952C.c)
 *     sub_140A9A170 @ 0x140A9A170 (sub_140A9A170.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall sub_140A994C4(int a1)
{
  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C1A938);
    qword_140C1A930 = (__int64)KeGetCurrentThread();
  }
  else
  {
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140C1A938);
  }
}
