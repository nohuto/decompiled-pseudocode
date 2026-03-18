/*
 * XREFs of VmpUnpinMemoryRange @ 0x14062C2E4
 * Callers:
 *     VmUnpinMemoryRange @ 0x1409D9A80 (VmUnpinMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14045F78C (VmpProcessContextLockExclusive.c)
 *     VmpInvalidateSlatBatched @ 0x14062A30C (VmpInvalidateSlatBatched.c)
 *     VmpVaRangeCheckPinnedGpaRanges @ 0x14062C524 (VmpVaRangeCheckPinnedGpaRanges.c)
 *     VmpUnlockMemoryForPin @ 0x1409DA634 (VmpUnlockMemoryForPin.c)
 */

__int64 __fastcall VmpUnpinMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  __int64 result; // rax
  _QWORD *v21; // rcx
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a5 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v9 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v9 )
    v9 ^= (unsigned __int64)(SpinLock + 2);
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_16;
    if ( a2 > *(_QWORD *)(v9 + 32) )
    {
      v10 = *(_QWORD *)(v9 + 8);
      goto LABEL_11;
    }
    if ( a2 >= *(_QWORD *)(v9 + 24) )
      break;
    v10 = *(_QWORD *)v9;
LABEL_11:
    if ( (SpinLock[4] & 1) != 0 && v10 )
      v9 ^= v10;
    else
      v9 = v10;
  }
  v21 = (_QWORD *)(v9 - 24);
  if ( v9 == 24 )
LABEL_16:
    NT_ASSERT("GpaMemoryRange != ((void *)0)");
  v11 = *((_DWORD *)v21 + 16);
  if ( (v11 & 1) == 0 )
    NT_ASSERT("GpaMemoryRange->Pinned");
  if ( v21[6] != a2 )
    NT_ASSERT("GpaMemoryRange->StartGpn == StartGpn");
  if ( v21[7] != a2 + a4 - 1 )
    NT_ASSERT("GpaMemoryRange->LastGpn == (StartGpn + SizeInPages - 1)");
  v12 = v21[2];
  if ( *(_QWORD *)(v12 + 24) != a3 )
    NT_ASSERT("VaMemoryRange->StartVpn == StartVpn");
  if ( !*(_QWORD *)(v12 + 56) )
    NT_ASSERT("VaMemoryRange->PinnedSecureHandle != ((void *)0)");
  *((_DWORD *)v21 + 16) = v11 & 0xFFFFFFFE;
  v13 = VmpVaRangeCheckPinnedGpaRanges(v12);
  ++*((_QWORD *)SpinLock + 5);
  v14 = v13;
  VmpInvalidateSlatBatched(SpinLock, a2, a3, a4, &v22, 2);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = (unsigned __int8)v22;
  __writecr8((unsigned __int8)v22);
  if ( v14 )
    return VmpUnlockMemoryForPin(SpinLock, v14);
  return result;
}
