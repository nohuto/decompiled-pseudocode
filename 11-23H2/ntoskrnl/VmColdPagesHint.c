/*
 * XREFs of VmColdPagesHint @ 0x1405F8EA0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwUnlockVirtualMemory @ 0x14041EC50 (ZwUnlockVirtualMemory.c)
 *     VmpProcessContextLockShared @ 0x140467194 (VmpProcessContextLockShared.c)
 *     VmpLogColdHint @ 0x1405FA150 (VmpLogColdHint.c)
 */

__int64 __fastcall VmColdPagesHint(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // r12
  unsigned __int8 v8; // di
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  ULONG_PTR v18; // r9
  __int64 v19; // rcx
  ULONG_PTR RegionSize; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-8h]
  PVOID BaseAddress; // [rsp+78h] [rbp+48h] BYREF

  RegionSize = 0LL;
  BaseAddress = 0LL;
  v4 = KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5];
  if ( !v4 )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( *(_QWORD *)(v4 + 72) != a3 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v5 = a1 >> 12;
  v6 = (unsigned __int64 *)(v4 + 8);
  v7 = 0LL;
  v22 = (a1 >> 12) + a2 - 1;
  do
  {
    v8 = VmpProcessContextLockShared((PEX_SPIN_LOCK)v4);
    v9 = *v6;
    if ( (*(_BYTE *)(v4 + 16) & 1) != 0 && v9 )
      v9 ^= (unsigned __int64)v6;
    while ( v9 )
    {
      if ( v5 <= *(_QWORD *)(v9 + 32) )
      {
        if ( v5 >= *(_QWORD *)(v9 + 24) )
          break;
        v10 = *(_QWORD *)v9;
      }
      else
      {
        v10 = *(_QWORD *)(v9 + 8);
      }
      if ( (*(_BYTE *)(v4 + 16) & 1) != 0 && v10 )
        v9 ^= v10;
      else
        v9 = v10;
    }
    if ( !v9 || (v11 = (_QWORD *)(v9 - 24), v9 == 24) )
      NT_ASSERT("GpaMemoryRange != ((void *)0)");
    BaseAddress = *(PVOID *)(v11[2] + 24LL);
    BaseAddress = (char *)BaseAddress + v5 - v11[6];
    v12 = v11[7];
    if ( v12 >= v22 )
      v12 = v22;
    RegionSize = v12 - v5 + 1;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v4);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (v8 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v8);
    v18 = RegionSize;
    v7 += RegionSize;
    v5 += RegionSize;
    if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 4LL) )
    {
      VmpLogColdHint(v19, v5, BaseAddress);
      v18 = RegionSize;
    }
    BaseAddress = (PVOID)((_QWORD)BaseAddress << 12);
    RegionSize = v18 << 12;
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
  }
  while ( v7 < a2 );
  return 0LL;
}
