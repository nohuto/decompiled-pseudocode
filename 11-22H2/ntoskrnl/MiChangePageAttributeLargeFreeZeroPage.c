/*
 * XREFs of MiChangePageAttributeLargeFreeZeroPage @ 0x14064EB14
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x140332C20 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     MiChangePageAttributeContiguous @ 0x14021A6C0 (MiChangePageAttributeContiguous.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     MiGetPfnChannel @ 0x1402870B0 (MiGetPfnChannel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6BE0 (MiInsertLargePageInNodeList.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D89C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiLargePfnPromoteCandidate @ 0x1403331D0 (MiLargePfnPromoteCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiChangePageAttributeLargeFreeZeroPage(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rdi
  unsigned int v8; // r14d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  __int64 v19; // rsi
  __int64 v20; // rbx
  unsigned int PfnChannel; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // r8
  int v25; // eax
  BOOL v26; // ebx
  unsigned __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  BOOL v28; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+3Ch] [rbp-4Ch]
  __int128 v30; // [rsp+40h] [rbp-48h]
  unsigned int v31; // [rsp+98h] [rbp+10h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v31 = a2;
  v32 = MiLargePageSizes[a2];
  v6 = (unsigned __int8)MiLockPageInline(a1);
  v7 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v8 = 0;
  if ( !MiLargePfnPromoteCandidate(v7, a1, a2) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v6 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
LABEL_18:
    __writecr8(v6);
    return v8;
  }
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 == a3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
    v8 = 1;
    goto LABEL_18;
  }
  v19 = 25408LL * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2);
  v20 = v19 + *(_QWORD *)(v7 + 16);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v20 + 23104));
  PfnChannel = MiGetPfnChannel(a1);
  MiUnlinkNodeLargePageHelper((_QWORD *)v20, (unsigned __int64 *)a1, v31, PfnChannel, 64);
  ++*(_DWORD *)(v19 + *(_QWORD *)(v7 + 16) + 23004);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 23104));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v22 - 2) <= 0xDu )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v13 = (v24[5] & 0xFFFF0007) == 0;
      v24[5] &= 0xFFFF0007;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)v23);
    }
  }
  __writecr8(2uLL);
  MiChangePageAttributeContiguous(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), v32, a3, 0);
  v25 = *(_DWORD *)(a1 + 16);
  v31 = 0;
  v26 = (v25 & 0x3E0) != 0LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v31);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v27 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v30 = 0LL;
  v28 = v26;
  v29 = 5;
  LOBYTE(v30) = v6;
  MiInsertLargePageInNodeList((__int64)&v27);
  return 1LL;
}
