/*
 * XREFs of MiCommitPoolMemory @ 0x1402860C0
 * Callers:
 *     MmAllocatePoolMemory @ 0x140286A58 (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x140641E3C (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 *     MiMakeZeroedPageTablesEx @ 0x140214310 (MiMakeZeroedPageTablesEx.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiFillPoolCommitPageTable @ 0x140285620 (MiFillPoolCommitPageTable.c)
 *     MiLockPoolCommitPageTable @ 0x1402863CC (MiLockPoolCommitPageTable.c)
 *     MiLinkPoolCommitChain @ 0x140286530 (MiLinkPoolCommitChain.c)
 *     MiUnlockPoolCommitWs @ 0x1402867D0 (MiUnlockPoolCommitWs.c)
 *     MiReturnExcessPoolCommit @ 0x140286828 (MiReturnExcessPoolCommit.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14061DDC8 (MiLogPerfMemoryRangeEvent.c)
 *     MiFreeExcessSegments @ 0x140624F6C (MiFreeExcessSegments.c)
 */

__int64 __fastcall MiCommitPoolMemory(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // dl
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // rax
  _DWORD *SchedulerAssist; // r10
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  int ZeroedPageTables; // eax
  unsigned __int8 v21; // dl
  __int64 v22; // rcx
  unsigned __int8 v23; // dl
  __int64 v24; // rcx
  _DWORD *v25; // r10
  __int64 v26; // r8
  _DWORD *v27; // r10
  __int64 v28; // r8
  _DWORD *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // r9d

  v2 = ((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LODWORD(v4) = 4;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v17) = 4;
    else
      v17 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v17;
  }
  v5 = a1[6];
  *((_BYTE *)a1 + 76) = CurrentIrql;
  MiLockWorkingSetShared(v5);
  v8 = 0;
  while ( v2 <= a1[7] )
  {
    v9 = a1[8];
    if ( v9 )
    {
      MiUnlockPageTableInternal(a1[6], v9);
      a1[8] = 0LL;
    }
    if ( *((_BYTE *)a1 + 76) < 2u
      && ((*(_DWORD *)MiGetSharedVm(a1[6], v9, v6, v7) & 0x40000000) != 0 || KeShouldYieldProcessor()) )
    {
      MiUnlockPoolCommitWs(a1);
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
      {
        v27 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v23 == 2 )
          LODWORD(v28) = 4;
        else
          v28 = (-1LL << (v23 + 1)) & 4;
        v27[5] |= v28;
      }
      v24 = a1[6];
      *((_BYTE *)a1 + 76) = v23;
      MiLockWorkingSetShared(v24);
    }
    if ( (unsigned int)MiLockPoolCommitPageTable(a1, v2, v6, v7) )
    {
      MiLinkPoolCommitChain(a1, v2);
      v2 = (v2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    else
    {
      MiUnlockPoolCommitWs(a1);
      v19 = (v2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( v19 > a1[7] )
        v19 = a1[7];
      ZeroedPageTables = MiMakeZeroedPageTablesEx(
                           v2,
                           v19,
                           (*((_WORD *)a1 + 39) & 4 | 0x400u) >> 1,
                           *((_DWORD *)a1 + 10),
                           *((_DWORD *)a1 + 18) + 1);
      v21 = KeGetCurrentIrql();
      if ( !ZeroedPageTables )
      {
        *((_WORD *)a1 + 39) |= 1u;
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
        {
          v29 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v21 != 2 )
            v4 = (-1LL << (v21 + 1)) & 4;
          v29[5] |= v4;
        }
        v30 = a1[6];
        *((_BYTE *)a1 + 76) = v21;
        MiLockWorkingSetShared(v30);
        break;
      }
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
      {
        v25 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v21 == 2 )
          LODWORD(v26) = 4;
        else
          v26 = (-1LL << (v21 + 1)) & 4;
        v25[5] |= v26;
      }
      v22 = a1[6];
      *((_BYTE *)a1 + 76) = v21;
      MiLockWorkingSetShared(v22);
    }
  }
  MiFillPoolCommitPageTable((__int64)a1);
  MiUnlockPoolCommitWs(a1);
  v11 = *((_WORD *)a1 + 39);
  v12 = v11;
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 2) == 0 )
    {
      v31 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v2 != v31 - 0x98000000000LL )
      {
        v32 = (v11 >> 2) & 1 | 2;
        if ( (v11 & 0x100) == 0 )
          v32 = (v11 >> 2) & 1;
        MiClearNonPagedPtes(*a1, (__int64)(v2 - v31 + 0x98000000000LL) >> 3, 0x4000u, v32);
      }
    }
    v8 = -1073741670;
  }
  else
  {
    if ( (v11 & 0x104) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*a1, 0LL, 11LL, a1[1]);
    v13 = *((_DWORD *)a1 + 10);
    v14 = a1[3];
    switch ( v13 )
    {
      case 5:
        v18 = v14 + _InterlockedExchangeAdd64(&qword_140C65488, v14);
        if ( v18 >= MiState[0] || MiState[0] - v18 < 0x300 )
          MiFreeExcessSegments(v18, v12, v10);
        break;
      case 6:
        _InterlockedExchangeAdd64(&qword_140C69928, v14);
        break;
      case 15:
        _InterlockedExchangeAdd64(&qword_140C65490, v14);
        break;
      default:
        _InterlockedExchangeAdd64(0LL, v14);
        break;
    }
  }
  MiReturnExcessPoolCommit(a1);
  return v8;
}
