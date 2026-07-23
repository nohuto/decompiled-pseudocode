/*
 * XREFs of sub_1408258B8 @ 0x1408258B8
 * Callers:
 *     PsAllocSiloContextSlot @ 0x140825790 (PsAllocSiloContextSlot.c)
 *     PsRegisterSiloMonitor @ 0x1408257B0 (PsRegisterSiloMonitor.c)
 *     sub_14085B100 @ 0x14085B100 (sub_14085B100.c)
 *     sub_140861E5C @ 0x140861E5C (sub_140861E5C.c)
 *     sub_140AFF540 @ 0x140AFF540 (sub_140AFF540.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1408258B8(ULONG *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  ULONG ClearBitsAndSet; // ebx
  char v5; // di

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1BD28, 0LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140C1BD30, 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140C1BD40, 1u, 0);
    if ( ClearBitsAndSet == -1 )
      v2 = -1073741670;
    else
      ClearBitsAndSet += 32;
  }
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1BD28, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C1BD28);
  sub_1402AFC00((ULONG_PTR)&qword_140C1BD28);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v2 >= 0 )
    *a1 = ClearBitsAndSet;
  return (unsigned int)v2;
}
