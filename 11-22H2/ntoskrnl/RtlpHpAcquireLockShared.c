/*
 * XREFs of RtlpHpAcquireLockShared @ 0x140315948
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x1402ADC90 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhContextCompact @ 0x140314E58 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x14031579C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140316150 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140316E10 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1405B7404 (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall RtlpHpAcquireLockShared(volatile LONG *a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( (_DWORD)a2 )
    return ExAcquireSpinLockShared(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)a1, a2);
  return -1;
}
